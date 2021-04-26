#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
typedef struct scope {
  int scope_seq;
  struct scope* next;    // pointer to a subsequent scope that do not share any information with the current scope
  struct scope* father;  // pointer to the father of the current scope; declarations made there can be used here
  struct scope* child;   // pointer to a subsequent scope that can use declarations made in the current scope
} scope;

scope* get_scope_top(scope* current_scope);
scope* create_scope(scope* current_scope, int new_scope_seq);
void insert_scope(scope* current_scope, scope* new_scope);
scope* initialize_scope();
void free_scope(scope* scp);
int check_existence_in_scope();  // retorna o numero do escopo
void print_scope(scope* scp, int depth);