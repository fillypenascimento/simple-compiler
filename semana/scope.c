#include "scope.h"


scope* get_scope_top(scope* current_scope);

scope* create_scope(scope* current_scope, int new_scope_seq) {
  scope* new_scope = (scope*) malloc(sizeof(scope));

  new_scope->scope_seq = new_scope_seq;
  new_scope->next = NULL;
  new_scope->father = NULL;
  new_scope->child = NULL;

  insert_scope(current_scope, new_scope);

  return new_scope;
}

void insert_scope(scope* current_scope, scope* new_scope) {
  if(current_scope->child == NULL) {
    current_scope->child = new_scope;
    new_scope->father = current_scope;

  } else {
    scope* aux = current_scope->child;
    while(aux->next != NULL) {
      aux = aux->next;
    }
    aux->next = new_scope;
    new_scope->father = current_scope;
  }
}

scope* initialize_scope() {
  scope* initial_scope = (scope*) malloc(sizeof(scope));
  initial_scope->scope_seq = 0;
  initial_scope->next = NULL;
  initial_scope->father = NULL;
  initial_scope->child = NULL;

  return initial_scope;
}

void free_scope(scope* scp) {
  if(scp == NULL) return;
  if(scp->next) free_scope(scp->next);
  if(scp->child) free_scope(scp->child);
  free(scp);
}

int check_existence_in_scope();  // retorna o numero do escopo

void print_scope(scope* scp, int depth) {
  if(scp){
    int aux = depth;
    while(aux > 0) {
      printf("|  ");
      aux--;
    }
    printf("SCOPE => %d\n", scp->scope_seq);
    print_scope(scp->child, depth+1);
    print_scope(scp->next, depth);
  }
}