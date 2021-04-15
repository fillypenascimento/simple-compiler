#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "uthash.h"

/* SYMBOL TABLE DECLARATIONS */

// Entrada da tabela de símbolos
typedef struct symbol_table_entry {
  // https://troydhanson.github.io/uthash/ - 12/04
  UT_hash_handle hh;           ///* makes this structure hashable */ garante a utilização de um hash e elimina a necessidade de um ponteiro para a proxima entrada
  char* hash_key;              // Chave única para a entrada da tabela de símbolos que é a concatenação do nome do token e do escopo em que ele está
  char* symbol_name;           // Nome do símbolo
  char* symbol_type;           // Tipo do símbolo: int, float, elem, set
  int symbol_scope;            // Escopo do símbolo TODO
  char* entry_type;            // Tipo de entrada da tabela: var, func
} symbol_table_entry;

// Cabeçalhos de funções de gerenciamento da tabela de símbolos
symbol_table_entry* create_symbol_table_entry(char* hash_key, char* symbol_name, char* symbol_type, int symbol_scope, char* entry_type);
symbol_table_entry* lookup_symbol_table(char* hash_key, symbol_table_entry* result_entry);
char* build_hash_key(char* symbol_name, char* symbol_type, char* entry_type);
void insert_into_symbol_table(char* symbol_name, char* symbol_type, char* entry_type);
void print_symbol_table();
void free_symbol_table();