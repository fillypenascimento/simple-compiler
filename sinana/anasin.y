%debug
%locations
%define parse.error verbose

%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <math.h>
  #include "uthash.h"

  extern int yylex();
  extern int yylex_destroy();
  extern FILE *yyin;
  extern int line;
  extern int column;
  extern int error_count;
  extern void yyerror(const char *tt_name);


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
    PARAMETER,
    COMPOUND_STMT,
    LOCAL_DECLARATIONS,
    STATEMENT_LIST,
    STATEMENT,
    FORALL_STATEMENT,
    CONDITIONAL_STMT,
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

 





  /* INITIALIZATIONS */
  symbol_table_entry* symbol_table = NULL; // Tabela de símbolos definida como uma cadeia de entradas symbol_table_entry
  tree_node* abstract_tree = NULL; // Árvore abstrata definida como uma cadeia de entradas tree_node
  int current_scope = 0; // Inicializa escopo global - https://steemit.com/programming/@drifter1/writing-a-simple-compiler-on-my-own-using-symbol-tables-in-the-lexer - 13/04

%}



%define lr.type canonical-lr

%union value {
  char* tt_name; // tt_name: Terminal Token name
  struct tree_node* nt_node; // nt_node: Nonterminal Token node
}

// Terminal grammar symbols
// tt_name stands for Terminal Token name
%token <tt_name> DIGIT
%token <tt_name> INT
%token <tt_name> FLOAT
%token <tt_name> LETTER_
%token <tt_name> ID
%token <tt_name> CHAR
%token <tt_name> STRING
%token <tt_name> EMPTY
%token <tt_name> PLUS
%token <tt_name> MINUS
%token <tt_name> MULT
%token <tt_name> DIV
%token <tt_name> NOT
%token <tt_name> OR
%token <tt_name> AND
%token <tt_name> LT
%token <tt_name> LTE
%token <tt_name> GT
%token <tt_name> GTE
%token <tt_name> EQ
%token <tt_name> NEQ
%token <tt_name> ASSIGN
%token <tt_name> TYPEINT
%token <tt_name> TYPEFLOAT
%token <tt_name> TYPEELEM
%token <tt_name> TYPESET
%token <tt_name> IF
%token <tt_name> ELSE
%token <tt_name> FOR
%token <tt_name> RETURN
%token <tt_name> READ
%token <tt_name> WRITE
%token <tt_name> WRITELN
%token <tt_name> IN_OP
%token <tt_name> IS_SET_OP
%token <tt_name> ADD_OP
%token <tt_name> REMOVE_OP
%token <tt_name> EXISTS_OP
%token <tt_name> FORALL_OP
%token <tt_name> LPAREN
%token <tt_name> RPAREN
%token <tt_name> LBRACK
%token <tt_name> RBRACK
%token <tt_name> LBRACE
%token <tt_name> RBRACE
%token <tt_name> COMMA
%token <tt_name> SEMICOLON

// Nonterminal grammar symbols
// nt_node stands for Nonterminal Token node
%type <nt_node> program
%type <nt_node> declaration-list
%type <nt_node> declaration
%type <nt_node> var-declaration
%type <nt_node> variable
%type <nt_node> func-declaration
%type <nt_node> type-specifier
%type <nt_node> parameters
%type <nt_node> parameter-list
%type <nt_node> parameter
%type <nt_node> compound-stmt
%type <nt_node> local-declarations
%type <nt_node> statement-list
%type <nt_node> statement
%type <nt_node> forall-statement
%type <nt_node> conditional-stmt
%type <nt_node> iteration-stmt
%type <nt_node> forall-stmt
%type <nt_node> expression-stmt
%type <nt_node> return-stmt
%type <nt_node> expression
%type <nt_node> simple-expression
%type <nt_node> relational-exp
%type <nt_node> arithm-add-exp
%type <nt_node> arithm-mul-exp
%type <nt_node> unary-minus-exp
%type <nt_node> factor
%type <nt_node> logop-una
%type <nt_node> logop-bin
%type <nt_node> relop
%type <nt_node> ariop-add
%type <nt_node> ariop-mul
%type <nt_node> set-expression
%type <nt_node> setop-in
%type <nt_node> setop-is-set
%type <nt_node> setop-add
%type <nt_node> setop-remove
%type <nt_node> setop-exists
%type <nt_node> io-expression
%type <nt_node> ioop-read
%type <nt_node> ioop-write
%type <nt_node> word
%type <nt_node> func-call
%type <nt_node> arguments
%type <nt_node> args-list
%type <nt_node> var


// precedences and associativity
%nonassoc IFX
%nonassoc ELSE

%left NOT
%left OR AND
%left LT LTE GT GTE EQ NEQ
%left PLUS MINUS
%left MULT DIV
%precedence NEG



%%

program:
  declaration-list
    {
      printf("program\n");
      // abstract_tree = $1;
      // tree_node* create_ast_node(rules_types rule, char* type, char* value, struct tree_node* next, struct tree_node* child) 
      $$ = create_ast_node(PROGRAM, NULL, NULL, NULL, $1);
      abstract_tree = $$;
    }
  |
  error 
    {
      yyerrok;
    }
;
declaration-list:
  declaration-list declaration
    {
      printf("declaration-list  ->  declaration-list declaration\n");
      $$ = create_ast_node(DECLARATION_LIST, NULL, NULL, NULL, $1);
      $1->next = $2;
    }
  |
  declaration
    {
      printf("declaration-list  ->  declaration\n");
      $$ = $1;
    }
;
declaration:
  var-declaration
    {
      printf("declaration  ->  var-declaration\n");
      $$ = $1;
    }
  |
  func-declaration
    {
      printf("declaration  ->  func-declaration\n");
      $$ = $1;
    }
;
var-declaration:
  variable ';'
    {
      printf("var declaration  ->  variable ;\n");
      $$ = $1;
    }
;
variable:
  type-specifier ID
    { 
      printf("variable  ->  type-specifier %s\n", $2);
      $$ = create_ast_node(VAR_DECLARATION, $1->type, $2, NULL, NULL);
      insert_into_symbol_table($2, $1->type, "variable");
    }
;
func-declaration:
  type-specifier ID '(' parameters ')' compound-stmt
    {
      printf("func-declaration  ->  type-specifier %s ( parameters ) compount-stmt\n", $2);
      $$ = create_ast_node(FUNC_DECLARATION, $1->type, $2, NULL, $4);
      $4->next = $6;
      insert_into_symbol_table($2, $1->type, "function");
    }
;
type-specifier:
  TYPEINT
    {
      printf("type-specifier  ->  %s\n", $1);
      $$ = create_ast_node(TYPE_SPECIFIER, $1, NULL, NULL, NULL);
    }
  |
  TYPEFLOAT
    {
      printf("type-specifier  ->  %s\n", $1);
      $$ = create_ast_node(TYPE_SPECIFIER, $1, NULL, NULL, NULL);
    }
  |
  TYPEELEM
    {
      printf("type-specifier  ->  %s\n", $1);
      $$ = create_ast_node(TYPE_SPECIFIER, $1, NULL, NULL, NULL);
    }
  |
  TYPESET
    {
      printf("type-specifier  ->  %s\n", $1);
      $$ = create_ast_node(TYPE_SPECIFIER, $1, NULL, NULL, NULL);
    }
;
parameters:
  parameter-list
    {
      printf("parameters  ->  parameter-list\n");
      $$ = $1;
    }
  // |
  // %empty
  //   {
  //     printf("parameters  ->\n");
  //     $$ = NULL;
  //   }
;
parameter-list:
  parameter-list ',' parameter
    {
      printf("parameter-list  ->  parameter-list , parameter\n");
      $$ = create_ast_node(PARAMETER_LIST, NULL, NULL, NULL, $1);
      $1->next = $3;
    }
  |
  parameter
    {
      printf("parameter-list  ->  parameter\n");
      $$ = create_ast_node(PARAMETER_LIST, NULL, NULL, NULL, $1);
    }
;
parameter:
  variable
    {
      printf("parameter  ->  variable\n");
      $$ = $1;
    }
  |
  %empty
    {
      $$ = NULL;
    }
;
compound-stmt:
  '{' 
    {
      current_scope+=1;
    }
  local-declarations '}'
    {
      printf("compound-stmt  ->  { local-declarations }\n");
      // $$ = create_ast_node(COMPOUND_STMT, NULL, NULL, NULL, $3);
      $$ = $3;
      current_scope-=1;
    }
;
local-declarations:
  statement-list
    {
      printf("local-declarations  ->  statement-list\n");
      $$ = $1;
    }
  |
  %empty
    {
      printf("local-declarations  ->\n");
      $$ = NULL;
    }
;
statement-list:
  statement-list statement
    {
      printf("statement-list  ->  statement-list statement\n");
      $$ = create_ast_node(STATEMENT_LIST, NULL, NULL, NULL, $1);
      $1->next = $2;
    }
  |
  statement
    {
      printf("statement-list  ->  statement\n");
      $$ = $1;
    }
;
statement:
  compound-stmt
    {
      printf("statement  ->  compound-stmt \n");
      $$ = $1;
    }
  |
  conditional-stmt
    {
      printf("statement  ->  conditional-stmt \n" );
      $$ = $1;
    }
  |
  iteration-stmt
    {
      printf("statement  ->  iteration-stmt \n" );
      $$ = $1;
    }
  |
  expression-stmt
    {
      printf("statement  ->  expression-stmt \n" );
      $$ = $1;
    }
  |
  return-stmt
    {
      printf("statement  ->  return-stmt \n" );
      $$ = $1;
    }
  |
  var-declaration
    {
      printf("statement  ->  var-declaration \n");
      $$ = $1;
    }
  |
  forall-stmt
    {
      printf("statement  ->  forall-stmt \n");
      $$ = $1;
    }
;
forall-statement:
  compound-stmt
    {
      printf("statement  ->  compound-stmt \n");
      $$ = $1;
    }
  |
  conditional-stmt
    {
      printf("statement  ->  conditional-stmt \n" );
      $$ = $1;
    }
  |
  iteration-stmt
    {
      printf("statement  ->  iteration-stmt \n" );
      $$ = $1;
    }
  |
  expression-stmt
    {
      printf("statement  ->  expression-stmt \n" );
      $$ = $1;
    }
  |
  forall-stmt
    {
      printf("statement  ->  forall-stmt \n");
      $$ = $1;
    }
;
// https://www.epaperpress.com/lexandyacc/if.html - 8/4
conditional-stmt:
  IF '(' expression ')' statement %prec IFX
    {
      printf("conditional-stmt  ->  if ( expression ) statement \n");
      $$ = create_ast_node(CONDITIONAL_STMT, NULL, NULL, NULL, $3);
      $3->next = $5;
    }
  |
  IF '(' expression ')' statement ELSE statement
    {
      printf("conditional-stmt  ->  if ( expression ) statement else statement\n");
      $$ = create_ast_node(CONDITIONAL_STMT, NULL, NULL, NULL, $3);
      $3->next = $5;
      $5->next = $7;
    }
  |
  IF setop-in statement %prec IFX
    {
      printf("conditional-stmt  ->  if ( expression ) statement \n");
      $$ = create_ast_node(CONDITIONAL_STMT, NULL, NULL, NULL, $2);
      $2->next = $3;
    }
  |
  IF setop-in statement ELSE statement
    {
      printf("conditional-stmt  ->  if ( expression ) statement else statement\n");
      $$ = create_ast_node(CONDITIONAL_STMT, NULL, NULL, NULL, $2);
      $2->next = $3;
      $3->next = $5;
    }
;
iteration-stmt:
  FOR '(' expression-stmt expression-stmt expression ')' statement
    {
      printf("iteration-stmt  ->  for ( expression ; expression ; expression ) statement\n");
      $$ = create_ast_node(ITERATION_STMT, NULL, NULL, NULL, $3);
      $3->next = $4;
      $4->next = $5;
      $5->next = $7;
    }
;

forall-stmt:
  FORALL_OP setop-in forall-statement
    {
      printf("setop-forall  ->  setop-in forall-statement\n");
      $$ = create_ast_node(FORALL_STMT, NULL, NULL, NULL, $2);
      $2->next = $3;
    }
;

expression-stmt:
  expression ';'
    {
      printf("expression-stmt  ->  expression ;\n");
      $$ = $1;
    }
  |
  ';'
    {
      printf("expression-stmt  ->  ; \n");
      $$ = NULL;
    }
;
return-stmt:
  RETURN ';'
    {
      printf("return-stmt  ->  return ; \n");
      $$ = create_ast_node(RETURN_STMT, NULL, NULL, NULL, NULL);
    }
  |
  RETURN expression ';'
    {
      printf("return-stmt  ->  return expression ; \n");
      $$ = create_ast_node(RETURN_STMT, NULL, NULL, NULL, $2);
    }
;
expression:
  // ID
  //   {
  //     $$ = create_ast_node(VARIABLE, NULL, $1, NULL, NULL);
  //   }
  // '=' expression
  //   {
  //     printf("expression  ->  %s = expression ;\n", $1);
  //     $$ = create_ast_node(EXPRESSION, NULL, $3, NULL, $4);
  //   }
  var ASSIGN expression
    {
      printf("expression  ->  var = expression ;\n");
      $$ = create_ast_node(EQ_T, NULL, $2, NULL, $1);
      $1->next = $3;
    }
  |
  simple-expression
    {
      printf("expression  ->  simple-expression ;\n");
      $$ = $1;
    }
  |
  set-expression
    {
      printf("expression  ->  set-expression ;\n");
      $$ = $1;
    }
  |
  io-expression
    {
      printf("expression  ->  io-expression ;\n");
      $$ = $1;
    }
;
simple-expression:
  logop-una relational-exp
    {
      printf("simple-expression  ->  logop-una relational-exp simple-expression\n");
      $$ = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
      $1->next = $2;
    }
  |
  logop-una set-expression
    {
      printf("simple-expression  ->  logop-una relational-exp simple-expression\n");
      $$ = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
      $1->next = $2;
    }
  |
  simple-expression logop-bin relational-exp
    {
      printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      $$ = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
      $1->next = $2;
      $2->next = $3;
    }
  |
  simple-expression logop-bin set-expression
    {
      printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      $$ = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
      $1->next = $2;
      $2->next = $3;
      
    }
  |
  set-expression logop-bin relational-exp
    {
      printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      $$ = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
      $1->next = $2;
      $2->next = $3;
    }
  |
  set-expression logop-bin set-expression
    {
      printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      $$ = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
      $1->next = $2;
      $2->next = $3;
    }
  |
  simple-expression logop-bin logop-una relational-exp
    {
      printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      $$ = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
      $1->next = $2;
      $2->next = $3;
      $4->next = $4;
    }
  |
  simple-expression logop-bin logop-una set-expression
    {
      printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      $$ = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
      $1->next = $2;
      $2->next = $3;
      $4->next = $4;
    }
  |
  set-expression logop-bin logop-una relational-exp
    {
      printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      $$ = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
      $1->next = $2;
      $2->next = $3;
      $4->next = $4;
    }
  |
  set-expression logop-bin logop-una set-expression
    {
      printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      $$ = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
      $1->next = $2;
      $2->next = $3;
      $4->next = $4;
    }
  |
  relational-exp
    {
      printf("simple-expression  ->  relational-exp\n");
      $$ = $1;
    }
;
relational-exp:
  relational-exp relop arithm-add-exp
    {
      printf("relational-exp  ->  arithm-add-exp relop arithm-add-exp\n");
      $$ = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
      $1->next = $2;
      $2->next = $3;
    }
  |
  arithm-add-exp
    {
      printf("relational-exp  ->  arithm-add-exp\n");
      $$ = $1;
    }
;
arithm-add-exp:
  arithm-add-exp ariop-add arithm-mul-exp
    {
      printf("arithm-add-exp  ->  arithm-add-exp ariop-add arithm-mul-exp\n");
      $$ = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
      $1->next = $2;
      $2->next = $3;
    }
  |
  arithm-mul-exp
    {
      printf("arithm-add-exp  ->  arithm-mul-exp\n");
      $$ = $1;
    }
;
arithm-mul-exp:
  arithm-mul-exp ariop-mul unary-minus-exp
    {
      printf("arithm-mul-exp  ->  arithm-mul-exp ariop-mul unary-minus-exp\n");
      $$ = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
      $1->next = $2;
      $2->next = $3;
    }
    |
  unary-minus-exp
    {
      printf("arithm-mul-exp  ->  unary-minus-exp\n");
      $$ = $1;
    }
;
unary-minus-exp:
  MINUS factor %prec NEG
    {
      printf("unary-minus-exp  ->  '-' factor\n");
      $$ = $2; //CORRIGIR NUMERO NEGATIVO
    }
  |
  factor
    {
      printf("unary-minus-exp  ->  factor\n");
      $$ = $1;
    }
;
factor:
  '(' expression ')'
    {
      printf("factor  ->  ( expression )\n");
      $$ = $2;
    }
  |
  func-call
    {
      printf("factor  ->  func-call\n");
      $$ = $1;
    }
  |
  // ID
  //   {
  //     printf("factor  ->  %s\n", $1);
  //     $$ = create_ast_node(FACTOR, NULL, $1, NULL, NULL);
  //   }
  var
    {
      printf("factor  ->  var\n");
      $$ = $1;
    }
  |
  INT
    {
      printf("factor  ->  %s\n", $1);
      $$ = create_ast_node(FACTOR, NULL, $1, NULL, NULL);
    }
  |
  FLOAT
    {
      printf("factor  ->  %s\n", $1);
      $$ = create_ast_node(FACTOR, NULL, $1, NULL, NULL);
    }
  |
  EMPTY
    {
      printf("factor  ->  %s\n", $1);
      $$ = create_ast_node(FACTOR, NULL, $1, NULL, NULL);
    }
;
logop-una:
  NOT 
    {
      printf("logop-una  ->  !\n");
      $$ = create_ast_node(LOGOP_UNA, NULL, $1, NULL, NULL);
    }
;
logop-bin:
  AND
    {
      printf("logop-bin  ->  &&\n");
      $$ = create_ast_node(LOGOP_BIN, NULL, $1, NULL, NULL);
    }
  |
  OR
    {
      printf("logop-bin  ->  ||\n");
      $$ = create_ast_node(LOGOP_BIN, NULL, $1, NULL, NULL);
    }
;
relop:
  LT
    {
      printf("relop  ->  <\n");
      $$ = create_ast_node(RELOP, NULL, $1, NULL, NULL);
    }
  |
  LTE
    {
      printf("relop  ->  <=\n");
      $$ = create_ast_node(RELOP, NULL, $1, NULL, NULL);
    }
  |
  GT
    {
      printf("relop  ->  >\n");
      $$ = create_ast_node(RELOP, NULL, $1, NULL, NULL);
    }
  |
  GTE
    {
      printf("relop  ->  >=\n");
      $$ = create_ast_node(RELOP, NULL, $1, NULL, NULL);
    }
  |
  EQ
    {
      printf("relop  ->  ==\n");
      $$ = create_ast_node(RELOP, NULL, $1, NULL, NULL);
    }
  |
  NEQ
    {
      printf("relop  ->  !=\n");
      $$ = create_ast_node(RELOP, NULL, $1, NULL, NULL);
    }
;
ariop-add:
  PLUS
    {
      printf("ariop-add  ->  +\n");
      $$ = create_ast_node(ARIOP_ADD, NULL, $1, NULL, NULL);
    }
  |
  MINUS 
    {
      printf("ariop-add  ->  -\n");
      $$ = create_ast_node(ARIOP_ADD, NULL, $1, NULL, NULL);
    }
;
ariop-mul:
  MULT
    {
      printf("ariop-mul  ->  *\n");
      $$ = create_ast_node(ARIOP_MUL, NULL, $1, NULL, NULL);
    }
  |
  DIV
    {
      printf("ariop-mul  ->  /\n");
      $$ = create_ast_node(ARIOP_MUL, NULL, $1, NULL, NULL);
    }
;
set-expression:
  setop-in
    {
      printf("set-expressions  ->  setop-in\n");
      $$ = $1;
    }
  |
  setop-is-set
    {
      printf("set-expressions  ->  setop-is-set\n");
      $$ = $1;
    }
  |
  setop-add
    {
      printf("set-expressions  ->  setop-add\n");
      $$ = $1;
    }
  |
  setop-remove
    {
      printf("set-expressions  ->  setop-remove\n");
      $$ = $1;
    }
  |
  setop-exists
    {
      printf("set-expressions  ->  setop-exists\n");
      $$ = $1;
    }
;
setop-in:
  '(' expression IN_OP expression ')'
    {
      printf("setop-in  ->  ( expression IN_OP expression ) \n");
      $$ = create_ast_node(SETOP_IN, NULL, $3, NULL, $2);
      $2->next = $4;
    }
;
setop-is-set:
  // IS_SET_OP 
  //   {
  //     $$ = create_ast_node(SETOP_IS_SET, NULL, $1, NULL, NULL);
  //   }
  // '(' ID ')'
  //   {
  //     printf("setop-is-set  ->  is_set ( %s )\n", $3);
  //     $$ = create_ast_node(VARIABLE, NULL, $4, NULL, NULL);
  //   }
  IS_SET_OP '(' var ')'
    {
      printf("setop-is-set  ->  is_set ( var )\n");
      $$ = create_ast_node(SETOP_IS_SET, NULL, $1, NULL, $3);
    }
;
setop-add:
  ADD_OP setop-in
    {
      printf("setop-add  ->  add setop-in\n");
      $$ = create_ast_node(SETOP_ADD, NULL, $1, NULL, $2);
    }
;
setop-remove:
  REMOVE_OP setop-in
    {
      printf("setop-remove  ->  remove setop-in\n");
      $$ = create_ast_node(SETOP_REMOVE, NULL, $1, NULL, $2);
    }
;
setop-exists:
  // EXISTS_OP
  //   {
  //     $$ = create_ast_node(SETOP_EXISTS, NULL, $1, NULL, NULL);
  //   }
  // '(' ID
  //   {
  //     $$ = create_ast_node(VARIABLE, NULL, $4, NULL, NULL);
  //   }
  // IN_OP
  //   {
  //     ;
  //   }
  // ID ')'
  //   {
  //     printf("setop-exists  ->  exists ( %s in %s )\n", $3, $5);
  //     $$ = create_ast_node(VARIABLE, NULL, $8, NULL, NULL);
  //   }
  EXISTS_OP '(' var IN_OP var ')'
    {
      printf("setop-exists  ->  exists ( var in var )\n");
      $$ = create_ast_node(SETOP_EXISTS, NULL, $1, NULL, $3);
      $3->next = $5;
    }
;
io-expression:
  ioop-read
    {
      printf("io-expression  ->  ioop-read\n");
      $$ = $1;
    }
  |
  ioop-write
    {
      printf("io-expression  ->  ioop-read\n");
      $$ = $1;
    }
;
ioop-read:
  // READ
  //   {
  //     $$ = create_ast_node(READ, NULL, $1, NULL, NULL);
  //   }
  // '(' ID ')'
  //   {
  //     printf("ioop-read  ->  read ( %s ) \n", $3);
  //     $$ = create_ast_node(VARIABLE, NULL, $4, NULL, NULL);
  //   }
  READ '(' var ')'
    {
      printf("ioop-read  ->  read ( var ) \n");
      $$ = create_ast_node(READ_T, NULL, $1, NULL, $3);
    }
;
ioop-write:
  WRITE '(' word ')'
    {
      printf("ioop-write  ->  write ( word ) \n");
      $$ = create_ast_node(WRITE, NULL, $1, NULL, $3);
    }
  |
  WRITELN '(' word ')'
    {
      printf("ioop-write  ->  writeln ( word ) \n");
      $$ = create_ast_node(WRITELN, NULL, $1, NULL, $3);
    }
;
word:
  CHAR
    {
      printf("word  ->  %s\n", $1);
      $$ = create_ast_node(CHAR_T, NULL, $1, NULL, NULL);
    }
  |
  STRING
    {
      printf("word  ->  %s\n", $1);
      $$ = create_ast_node(STRING_T, NULL, $1, NULL, NULL);
    }
;
func-call:
  ID '(' arguments ')'
    {
      printf("func-call  ->  %s ( arguments )\n", $1);
      $$ = create_ast_node(FUNC_CALL, NULL, $1, NULL, $3);
    }
;
arguments:
  args-list
    {
      printf("arguments  ->  args-list\n");
      $$ = $1;
    }
  |
  %empty
    {
      printf("arguments  ->  empty-set\n");
      $$ = NULL;
    }
;
args-list:
  args-list ',' expression
    {
      printf("args-list  ->  args-list , expression\n");
      $$ = create_ast_node(ARGS_LIST, NULL, NULL, NULL, $1);
      $1->next = $3;
    }
  |
  expression
    {
      printf("args-list  ->  expression\n");
      $$ = $1;
    }
;
var:
  ID
    {
      printf("var  ->  %s\n", $1);
      $$ = create_ast_node(VAR, NULL, $1, NULL, NULL);
    }
;

%%


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
  // char hash_key[5] = "hash" ;

  new_entry = lookup_symbol_table(hash_key, new_entry);
  // HASH_FIND_STR(symbol_table, hash_key, new_entry);

  if(new_entry == NULL) {
    new_entry = create_symbol_table_entry(hash_key, symbol_name, symbol_type, current_scope, entry_type);
    HASH_ADD_STR(symbol_table, hash_key, new_entry);
  } else {
    printf("Symbol of type %s \"%s %s\" entry already exists for scope %d in the Symbol Table.\n", entry_type, symbol_type, symbol_name, current_scope);
  }
}

char* build_hash_key(char* symbol_name, char* symbol_type, char* entry_type) {
  // https://stackoverflow.com/questions/8257714/how-to-convert-an-int-to-string-in-c
  char* scope = malloc(sizeof(char));
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

  return new_key;
}

symbol_table_entry* lookup_symbol_table(char* hash_key, symbol_table_entry* result_entry) {
  HASH_FIND_STR(symbol_table, hash_key, result_entry);

  return result_entry;
}

void print_symbol_table() {
  symbol_table_entry* entry;
  
  printf("\n\n________________ SYMBOL TABLE ________________\n\n");
  for(entry = symbol_table; entry != NULL; entry = entry->hh.next) {
    printf("Table Entry =>   < HASH_KEY:%s >     < SYMBOL_NAME:%s >     < SYMBOL_TYPE:%s >     < SYMBOL_SCOPE:%d >     < ENTRY_TYPE:%s >\n", entry->hash_key, entry->symbol_name, entry->symbol_type, entry->symbol_scope, entry->entry_type);
  }
}

void free_symbol_table(){
  symbol_table_entry* entry;
  symbol_table_entry* aux_entry;

  HASH_ITER(hh, symbol_table, entry, aux_entry) {
    HASH_DEL(symbol_table, entry);
    free(entry);
  }
}


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






// Printa informação da classe do Nó
void print_class(int node_type){
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
    }
    printf(" | ");
}

// Printa identação
void print_depth(int depth) {
    int i = depth;
    while(i != 0){
        printf("-");
        i--;
    }
}

// Printa árvore
void print_tree(tree_node* tree, int depth) {
    if (tree) {
        print_depth(depth);
        print_class(tree->rule);
        if (tree->type != NULL){
            printf("type: %s | ", tree->type);
        }
        if (tree->value != NULL){
            printf("value: %s | ", tree->value);
        }
        printf("\n");
        print_tree(tree->next, depth);
        print_tree(tree->child, depth + 1);
    }
}

// Apaga a árvore
void free_tree(tree_node* node){
    if(node == NULL) return;
    if(node->next) free_tree(node->next);
    if(node->child) free_tree(node->child);
    free(node);
}











void yyerror(const char *tt_name) {
    printf("yyerror:%s em linha:%d coluna:%d.\n", tt_name, line, column);

}

int main(int argc, char *argv[]){
  yyin = fopen(argv[1], "r");

  yyparse();
  fclose(yyin);
  yylex_destroy();

  //  if(error_count > 0){
  //    printf("\nThe lexical analisys finished with %d errors found.\n", error_count);
  //  }

  print_tree(abstract_tree, 0);
  print_symbol_table();

  free_tree(abstract_tree);
  free_symbol_table();

  return 0;
}