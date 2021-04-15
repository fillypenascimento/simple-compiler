#include "ast.h"

/* HANDLE ABSTRACT TREE */

tree_node* create_ast_node(rules_types rule, char* type, char* value, struct tree_node* next, struct tree_node* child) {
  tree_node* new_node = (tree_node*) malloc(sizeof(tree_node));

  new_node->rule = rule;
  new_node->type = type;
  new_node->value = value;
  new_node->next = next;
  new_node->child = child;

  return new_node;
}

void print_node_type(int node_type) {
  switch(node_type){
    case PROGRAM:
      printf("PROGRAM");
      break;
    case DECLARATION_LIST:
      printf("DECLARATION_LIST");
      break;
    case DECLARATION:
      printf("DECLARATION");
      break;
    case VAR_DECLARATION:
      printf("VAR_DECLARATION");
      break;
    case VARIABLE:
      printf("VARIABLE");
      break;
    case FUNC_DECLARATION:
      printf("FUNC_DECLARATION");
      break;
    case TYPE_SPECIFIER:
      printf("TYPE_SPECIFIER");
      break;
    case PARAMETERS:
      printf("PARAMETERS");
      break;
    case PARAMETER_LIST:
      printf("PARAMETER_LIST");
      break;
    case PARAMETER:
      printf("PARAMETER");
      break;
    case COMPOUND_STMT:
      printf("COMPOUND_STMT");
      break;
    case LOCAL_DECLARATIONS:
      printf("LOCAL_DECLARATIONS");
      break;
    case STATEMENT_LIST:
      printf("STATEMENT_LIST");
      break;
    case STATEMENT:
      printf("STATEMENT");
      break;
    case FORALL_STATEMENT:
      printf("FORALL_STATEMENT");
      break;
    case CONDITIONAL_STMT:
      printf("CONDITIONAL_STMT");
      break;
    case ITERATION_STMT:
      printf("ITERATION_STMT");
      break;
    case FORALL_STMT:
      printf("FORALL_STMT");
      break;
    case EXPRESSION_STMT:
      printf("EXPRESSION_STMT");
      break;
    case RETURN_STMT:
      printf("RETURN_STMT");
      break;
    case EXPRESSION:
      printf("EXPRESSION");
      break;
    case SIMPLE_EXPRESSION:
      printf("SIMPLE_EXPRESSION");
      break;
    case RELATIONAL_EXP:
      printf("RELATIONAL_EXP");
      break;
    case ARITHM_ADD_EXP:
      printf("ARITHM_ADD_EXP");
      break;
    case ARITHM_MUL_EXP:
      printf("ARITHM_MUL_EXP");
      break;
    case UNARY_MINUS_EXP:
      printf("UNARY_MINUS_EXP");
      break;
    case FACTOR:
      printf("FACTOR");
      break;
    case LOGOP_UNA:
      printf("LOGOP_UNA");
      break;
    case LOGOP_BIN:
      printf("LOGOP_BIN");
      break;
    case RELOP:
      printf("RELOP");
      break;
    case ARIOP_ADD:
      printf("ARIOP_ADD");
      break;
    case ARIOP_MUL:
      printf("ARIOP_MUL");
      break;
    case SET_EXPRESSION:
      printf("SET_EXPRESSION");
      break;
    case SETOP_IN:
      printf("SETOP_IN");
      break;
    case SETOP_IS_SET:
      printf("SETOP_IS_SET");
      break;
    case SETOP_ADD:
      printf("SETOP_ADD");
      break;
    case SETOP_REMOVE:
      printf("SETOP_REMOVE");
      break;
    case SETOP_EXISTS:
      printf("SETOP_EXISTS");
      break;
    case IO_EXPRESSION:
      printf("IO_EXPRESSION");
      break;
    case IOOP_READ:
      printf("IOOP_READ");
      break;
    case IOOP_WRITE:
      printf("IOOP_WRITE");
      break;
    case WORD:
      printf("WORD");
      break;
    case FUNC_CALL:
      printf("FUNC_CALL");
      break;
    case ARGUMENTS:
      printf("ARGUMENTS");
      break;
    case ARGS_LIST:
      printf("ARGS_LIST");
      break;
    case VAR:
      printf("VAR");
      break;
    case DIGIT_T:
      printf("DIGIT_T");
      break;
    case INT_T:
      printf("INT_T");
      break;
    case FLOAT_T:
      printf("FLOAT_T");
      break;
    case LETTER__T:
      printf("LETTER__T");
      break;
    case ID_T:
      printf("ID_T");
      break;
    case CHAR_T:
      printf("CHAR_T");
      break;
    case STRING_T:
      printf("STRING_T");
      break;
    case EMPTY_T:
      printf("EMPTY_T");
      break;
    case PLUS_T:
      printf("PLUS_T");
      break;
    case MINUS_T:
      printf("MINUS_T");
      break;
    case MULT_T:
      printf("MULT_T");
      break;
    case DIV_T:
      printf("DIV_T");
      break;
    case NOT_T:
      printf("NOT_T");
      break;
    case OR_T:
      printf("OR_T");
      break;
    case AND_T:
      printf("AND_T");
      break;
    case LT_T:
      printf("LT_T");
      break;
    case LTE_T:
      printf("LTE_T");
      break;
    case GT_T:
      printf("GT_T");
      break;
    case GTE_T:
      printf("GTE_T");
      break;
    case EQ_T:
      printf("EQ_T");
      break;
    case NEQ_T:
      printf("NEQ_T");
      break;
    case ASSIGN_T:
      printf("ASSIGN_T");
      break;
    case TYPEINT_T:
      printf("TYPEINT_T");
      break;
    case TYPEFLOAT_T:
      printf("TYPEFLOAT_T");
      break;
    case TYPEELEM_T:
      printf("TYPEELEM_T");
      break;
    case TYPESET_T:
      printf("TYPESET_T");
      break;
    case IF_T:
      printf("IF_T");
      break;
    case ELSE_T:
      printf("ELSE_T");
      break;
    case FOR_T:
      printf("FOR_T");
      break;
    case RETURN_T:
      printf("RETURN_T");
      break;
    case READ_T:
      printf("READ_T");
      break;
    case WRITE_T:
      printf("WRITE_T");
      break;
    case WRITELN_T:
      printf("WRITELN_T");
      break;
    case IN_OP_T:
      printf("IN_OP_T");
      break;
    case IS_SET_OP_T:
      printf("IS_SET_OP_T");
      break;
    case ADD_OP_T:
      printf("ADD_OP_T");
      break;
    case REMOVE_OP_T:
      printf("REMOVE_OP_T");
      break;
    case EXISTS_OP_T:
      printf("EXISTS_OP_T");
      break;
    case FORALL_OP_T:
      printf("FORALL_OP_T");
      break;
    case LPAREN_T:
      printf("LPAREN_T");
      break;
    case RPAREN_T:
      printf("RPAREN_T");
      break;
    case LBRACK_T:
      printf("LBRACK_T");
      break;
    case RBRACK_T:
      printf("RBRACK_T");
      break;
    case LBRACE_T:
      printf("LBRACE_T");
      break;
    case RBRACE_T:
      printf("RBRACE_T");
      break;
    case COMMA_T:
      printf("COMMA_T");
      break;
    case SEMICOLON_T:
      printf("SEMICOLON_T");
      break;
    }
  printf(" | ");
}

void print_ast_ident(int depth) {
  for(int i = depth; i != 0; i--){
    printf(" | ");
  }
}

void print_tree(tree_node* tree, int start_depth) {
  if (tree) {
    print_ast_ident(start_depth);
    print_node_type(tree->rule);

    if (tree->type != NULL){
      printf("node_type: %s | ", tree->type);
    }

    if (tree->value != NULL){
      printf("node_value: %s | ", tree->value);
    }

    printf("\n");
    print_tree(tree->next, start_depth);
    print_tree(tree->child, start_depth + 1);
  }
}

void free_ast(tree_node* node){
  if(node == NULL) {
    return;
  }

  if(node->next) {
    free_ast(node->next);
  }

  if(node->child) {
    free_ast(node->child);
  }
  
  free(node);
}