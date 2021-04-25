#include "symbol_table.h"


extern int current_scope;
extern symbol_table_entry* symbol_table;

/* HANDLE SYMBOL TABLE */

symbol_table_entry* create_symbol_table_entry(char* hash_key, char* symbol_name, char* symbol_type, int symbol_scope, char* entry_type) {
  symbol_table_entry* new_entry = (symbol_table_entry*) malloc(sizeof (symbol_table_entry));

  new_entry->hash_key = hash_key;
  new_entry->symbol_name = symbol_name;
  new_entry->symbol_type = symbol_type;
  new_entry->symbol_scope = symbol_scope;
  new_entry->entry_type = entry_type;

  return new_entry;
}

void insert_into_symbol_table(char* symbol_name, char* symbol_type, char* entry_type) {
  symbol_table_entry* new_entry = NULL;
  char* hash_key = build_hash_key(symbol_name, symbol_type, entry_type);

  new_entry = lookup_symbol_table(hash_key, new_entry);

  if(new_entry == NULL) {
    new_entry = create_symbol_table_entry(hash_key, symbol_name, symbol_type, current_scope, entry_type);
    HASH_ADD_STR(symbol_table, hash_key, new_entry);
  } else {
    printf("Symbol of type %s \"%s %s\" entry already exists for scope %d in the Symbol Table.\n", entry_type, symbol_type, symbol_name, current_scope);
  }
}

char* build_hash_key(char* symbol_name, char* symbol_type, char* entry_type) {
  // https://stackoverflow.com/questions/8257714/how-to-convert-an-int-to-string-in-c
  char* scope = malloc(2*sizeof(char)); // CORRIGIR ALOCAÇÃO QUANDO ESTIVER LIDANDO COM ESCOPO
  sprintf(scope, "%d", current_scope);
  // https://stackoverflow.com/questions/8465006/how-do-i-concatenate-two-strings-in-c
  int key_size = strlen(scope) + strlen(entry_type) + strlen(symbol_type) + strlen(symbol_name) + 6;

  // Cada chave hash a ser utilizada no uthash tem o formato "(scope)entry_type::symbol_type.symbol_name"
  char* new_key = (char*) malloc(key_size);
  strcpy(new_key, "(");
  strcat(new_key, scope);
  strcat(new_key, ")");
  strcat(new_key, entry_type);
  strcat(new_key, "::");
  strcat(new_key, symbol_type);
  strcat(new_key, ".");
  strcat(new_key, symbol_name);

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
    printf("Table Entry =>   < HASH_KEY:%s >     < SYMBOL_NAME:%s >     < SYMBOL_TYPE:%s >     < SYMBOL_SCOPE:%d >     < ENTRY_TYPE:%s >\n", entry->hash_key, entry->symbol_name, entry->symbol_type, entry->symbol_scope, entry->entry_type);
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
