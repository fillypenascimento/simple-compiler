#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
  
/* SYNTATIC TREE DECLARATIONS */

// Enumeração dos tipos de nós da árvore sintática; cada nó representa uma regra da gramática
enum rules {
  PROGRAM = 1,
  DECLARATION_LIST,
  DECLARATION,
  VAR_DECLARATION,
  VARIABLE,
  FUNC_DECLARATION,
  TYPE_SPECIFIER,
  PARAMETERS,
  PARAMETER_LIST,
  EMPTY_PARAMETER_LIST,
  PARAMETER,
  COMPOUND_STMT,
  LOCAL_DECLARATIONS,
  STATEMENT_LIST,
  STATEMENT,
  FORALL_STATEMENT,
  CONDITIONAL_IF_STMT,
  CONDITIONAL_IF_ELSE_STMT,
  ITERATION_STMT,
  FORALL_STMT,
  EXPRESSION_STMT,
  RETURN_STMT,
  EXPRESSION,
  SIMPLE_EXPRESSION,
  RELATIONAL_EXP,
  ARITHM_ADD_EXP,
  ARITHM_MUL_EXP,
  UNARY_MINUS_EXP,
  FACTOR,
  LOGOP_UNA,
  LOGOP_BIN,
  RELOP,
  ARIOP_ADD,
  ARIOP_MUL,
  SET_EXPRESSION,
  SETOP_IN,
  SETOP_IS_SET,
  SETOP_ADD,
  SETOP_REMOVE,
  SETOP_EXISTS,
  IO_EXPRESSION,
  IOOP_READ,
  IOOP_WRITE,
  WORD,
  FUNC_CALL,
  ARGUMENTS,
  ARGS_LIST,
  VAR,
  DIGIT_T,
  INT_T,
  FLOAT_T,
  LETTER__T,
  ID_T,
  CHAR_T,
  STRING_T,
  EMPTY_T,
  PLUS_T,
  MINUS_T,
  MULT_T,
  DIV_T,
  NOT_T,
  OR_T,
  AND_T,
  LT_T,
  LTE_T,
  GT_T,
  GTE_T,
  EQ_T,
  NEQ_T,
  ASSIGN_T,
  TYPEINT_T,
  TYPEFLOAT_T,
  TYPEELEM_T,
  TYPESET_T,
  IF_T,
  ELSE_T,
  FOR_T,
  RETURN_T,
  READ_T,
  WRITE_T,
  WRITELN_T,
  IN_OP_T,
  IS_SET_OP_T,
  ADD_OP_T,
  REMOVE_OP_T,
  EXISTS_OP_T,
  FORALL_OP_T,
  LPAREN_T,
  RPAREN_T,
  LBRACK_T,
  RBRACK_T,
  LBRACE_T,
  RBRACE_T,
  COMMA_T,
  SEMICOLON_T
};
typedef enum rules rules_types;

// Nó da árvore sintática abstrata
typedef struct tree_node {
  rules_types rule;         // Regra da gramática que o nó representa
  char* type;               // Somente preenchido quando é uma regra do tipo VARIABLE ou FUNC_DECLARATION
  char* value;              // Somente preenchido quando é uma regra do tipo VARIABLE ou FUNC_DECLARATION
  struct tree_node* next;   // Somente preenchido quando o nó representa uma regra não-terminal, caso contrátio NULL
  struct tree_node* child;  // Somente preenchido quando o nó representa uma regra não-terminal, caso contrátio NULL
} tree_node;

// Cabeçalhos de funções de gerenciamento da Árvore Sintática Abstrata
tree_node* create_ast_node(rules_types rule, char* type, char* value, struct tree_node* next, struct tree_node* child);
void print_tree(tree_node* tree, int start_depth);
void print_node_type(int node_type);
int printable_rule(tree_node* node);
void print_ast_ident(int depth);
void free_ast(tree_node* node);