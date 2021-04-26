#include "symbol_table.h"
// #include "scope.h"

extern int current_scope_seq;
extern scope* current_scope;
extern int line;
extern int column;
extern symbol_table_entry* symbol_table;
extern int semantic_errors;

/* HANDLE SYMBOL TABLE */

symbol_table_entry* create_symbol_table_entry(char* hash_key, char* symbol_name, char* symbol_type, scope* symbol_scope, char* entry_type) {
  symbol_table_entry* new_entry = (symbol_table_entry*) malloc(sizeof (symbol_table_entry));

  new_entry->hash_key = hash_key;
  new_entry->symbol_name = symbol_name;
  new_entry->symbol_type = symbol_type;
  new_entry->symbol_scope = symbol_scope;
  new_entry->entry_type = entry_type;
  return new_entry;
}

int insert_into_symbol_table(char* symbol_name, char* symbol_type, char* entry_type) {
  int inserted = 0;
  symbol_table_entry* new_entry = NULL;
  symbol_table_entry* retrieved_entry = NULL;
  char* hash_key = build_hash_key(current_scope_seq, symbol_name, symbol_type, entry_type);
  symbol_table_entry* emulated_retrieved_entry = NULL;
  char* emulated_hash_key = build_hash_key(0,symbol_name, symbol_type, entry_type); // utilizada para capturar declaração de variável com mesmo nome de função;
  // se o novo token a ser inserido for variável ou parâmetro, verifica se ele não está nomeado com o nome de função já declarada
  // if(strcmp(entry_type, "function") != 0) {
  //   retrieved_entry = lookup_symbol_table(emulated_hash_key, retrieved_entry);
  // } else {
  retrieved_entry = lookup_symbol_table(hash_key, retrieved_entry);
  emulated_retrieved_entry = lookup_symbol_table(emulated_hash_key, emulated_retrieved_entry);
  // }

  // if(retrieved_entry == NULL) {
  //   new_entry = create_symbol_table_entry(hash_key, symbol_name, symbol_type, current_scope_seq, entry_type);
  //   HASH_ADD_STR(symbol_table, hash_key, new_entry);
  //   inserted = 1;
  // } else 
  if(insertion_allowed(retrieved_entry, emulated_retrieved_entry, symbol_name, symbol_type, entry_type)) {
    new_entry = create_symbol_table_entry(hash_key, symbol_name, symbol_type, current_scope, entry_type);
    HASH_ADD_STR(symbol_table, hash_key, new_entry);
    inserted = 1;
    // printf("TENTANTO INSERIR: %s\n", symbol_name);
  }
  // else {
  //   printf("Symbol of type %s \"%s %s\" entry already exists for scope %d in the Symbol Table.\n", entry_type, symbol_type, symbol_name, current_scope_seq);
  // }

  return inserted;
}

int insertion_allowed(symbol_table_entry* retrieved_entry,
                      symbol_table_entry* emulated_retrieved_entry,
                      char* new_symbol_name,
                      char* new_symbol_type,
                      char* new_entry_type)
{
  int allowed = 0;
  scope* aux_scope = current_scope;

  // printf("TENTANTO INSERIR 1: %s\n", new_symbol_name);
  if(retrieved_entry == NULL) {
    // printf("TENTANTO INSERIR 2: %s\n", new_symbol_name);
    if((strcmp(new_entry_type, "function") != 0) && (emulated_retrieved_entry != NULL)) {
      // printf("TENTANTO INSERIR 3: %s\n", new_symbol_name);
      // se o novo for variável ou parâmetro, emulated_retrieved_entry será um token para a variável global ou função com o mesmo nome do novo token que se está tentando declarar
      // declaração de variável com nome de função ou variável global já existente
      printf("-> SEMANTIC_VALIDATION_ERROR|SE002|: variable/parameter '%s' is being declared at line %d column %d using the same identifier for already declared global variable or function.\n", new_symbol_name, line, column);
      semantic_errors = 1;
      allowed = 0;
    } else if((strcmp(new_entry_type, "variable") == 0)) {
      // printf("TENTANTO INSERIR 4: %s\n", new_symbol_name);
      char* aux_hash_key = NULL;
      symbol_table_entry* aux_retrieved_entry = NULL;

      while(aux_scope->father != NULL) {
        aux_scope = aux_scope->father;
        aux_hash_key = build_hash_key(aux_scope->scope_seq, new_symbol_name, new_symbol_type, new_entry_type);
        aux_retrieved_entry = lookup_symbol_table(aux_hash_key, aux_retrieved_entry);

        if((aux_retrieved_entry != NULL) && (strcmp(aux_retrieved_entry->entry_type, "parameter") == 0)) {
          // printf("TENTANTO INSERIR 5: %s\n", new_symbol_name);
          printf("-> SEMANTIC_VALIDATION_ERROR|SE003|: variable '%s' is being declared at line %d column %d using the same identifier for already declared parameter.\n", new_symbol_name, line, column);
          semantic_errors = 1;
          allowed = 0;
          break;
        } else {
          allowed = 1;
          // printf("INSERTION ALLOWED\n");
        }
        
      }
    } // procurar por um parameter em escopos pais
    else {
      allowed = 1;
      // printf("INSERTION ALLOWED\n");
    }
  }
  // tem que colocar aqui o caso de uma variável declarada em escopo diferente do parâmetro
  else {
    if((strcmp(retrieved_entry->entry_type, "function") == 0) && (strcmp(new_entry_type, "function") == 0)) {
      // printf("TENTANTO INSERIR 6: %s\n", new_symbol_name);
      // redeclaração de função - PROIBIDO
      printf("-> SEMANTIC_VALIDATION_ERROR|SE004|: function '%s' is being redeclared at line %d column %d.\n", new_symbol_name, line, column);
      semantic_errors = 1;
      allowed = 0;
    } else if((strcmp(retrieved_entry->entry_type, "variable") == 0) && (strcmp(new_entry_type, "function") == 0)) {
      // printf("TENTANTO INSERIR 7: %s\n", new_symbol_name);
      // declaração de função com nome de variável global já existente
      printf("-> SEMANTIC_VALIDATION_ERROR|SE005|: function '%s' is being declared at line %d column %d using the same identifier for already declared global variable.\n", new_symbol_name, line, column);
      semantic_errors = 1;
      allowed = 0;
    } else if((strcmp(retrieved_entry->entry_type, "parameter") == 0) && (strcmp(new_entry_type, "function") != 0)) {
      // printf("TENTANTO INSERIR 8: %s\n", new_symbol_name);
      // redeclaração de variável ou parâmetro no mesmo escopo
      printf("-> SEMANTIC_VALIDATION_ERROR|SE006|: variable/parameter '%s' is being declared at line %d column %d using the same identifier for already declared variable/parameter whitin the same scope.\n", new_symbol_name, line, column);
      semantic_errors = 1;
      allowed = 0;
    } else if((strcmp(retrieved_entry->entry_type, "variable") == 0) && (strcmp(new_entry_type, "variable") == 0)) {
      // printf("TENTANTO INSERIR 9: %s\n", new_symbol_name);
      printf("-> SEMANTIC_VALIDATION_ERROR|SE007|: variable '%s' is being declared at line %d column %d using the same identifier for already declared variable whitin the same scope.\n", new_symbol_name, line, column);
      semantic_errors = 1;
      allowed = 0;
    } else {
      allowed = 1;
      // printf("INSERTION ALLOWED\n");
    }
  }

  return allowed;
}

char* build_hash_key(int scope_number, char* symbol_name, char* symbol_type, char* entry_type) {
  // https://stackoverflow.com/questions/8257714/how-to-convert-an-int-to-string-in-c
  char* scope = malloc(3*sizeof(char)); // CORRIGIR ALOCAÇÃO QUANDO ESTIVER LIDANDO COM ESCOPO
  // sprintf(scope, "%d", current_scope_seq);
  sprintf(scope, "%d", scope_number);
  // https://stackoverflow.com/questions/8465006/how-do-i-concatenate-two-strings-in-c
  // int key_size = strlen(scope) + strlen(entry_type) + strlen(symbol_type) + strlen(symbol_name) + 6;
  int key_size = strlen(scope) + strlen(symbol_name) + 3;

  // Cada chave hash a ser utilizada no uthash tem o formato "(scope)entry_type::symbol_type.symbol_name"
  char* new_key = (char*) malloc(key_size);
  strcpy(new_key, "(");
  strcat(new_key, scope);
  strcat(new_key, ")");
  strcat(new_key, symbol_name);
  // strcat(new_key, entry_type);
  // strcat(new_key, "::");
  // strcat(new_key, symbol_type);
  // strcat(new_key, ".");
  // strcat(new_key, symbol_name);

  free(scope);

  return new_key;
}

symbol_table_entry* lookup_symbol_table(char* hash_key, symbol_table_entry* result_entry) {
  HASH_FIND_STR(symbol_table, hash_key, result_entry);

  return result_entry;
}

void print_symbol_table() {
  symbol_table_entry* entry;
  
  printf("\n\n\n________________| SYMBOL TABLE |________________\n\n");
  for(entry = symbol_table; entry != NULL; entry = entry->hh.next) {
    printf("Table Entry =>   < HASH_KEY:%s >     < SYMBOL_NAME:%s >     < SYMBOL_TYPE:%s >     < SYMBOL_SCOPE:%d >     < ENTRY_TYPE:%s >\n", entry->hash_key, entry->symbol_name, entry->symbol_type, entry->symbol_scope->scope_seq, entry->entry_type);
  }
}

void free_symbol_table(){
  symbol_table_entry* entry;
  symbol_table_entry* aux_entry;

  HASH_ITER(hh, symbol_table, entry, aux_entry) {
    HASH_DEL(symbol_table, entry);
    free(entry->hash_key);
    free(entry);
  }
}
