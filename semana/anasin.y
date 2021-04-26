%debug
%locations
%define parse.error verbose

%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <math.h>
  #include "uthash.h"
  #include "symbol_table.h"
  #include "ast.h"
  #include "scope.h"

  extern int yylex();
  extern int yylex_destroy();
  extern FILE *yyin;
  extern int line;
  extern int column;
  extern int error_count;
  extern void yyerror(const char *tt_name);

  typedef struct semantic_validations {
    int main_issue;
    int scope_issue;
    int previous_ref_issue;
    int function_args_issue;
    int implicit_cast_issue;
    int return_type_issue;
  } semantic_validations;

  void perform_main_validation(char* func_name);
  void run_semantic_validation();
  void initialize_semantic_validations();

  /* INITIALIZATIONS */
  symbol_table_entry* symbol_table = NULL; // Tabela de símbolos definida como uma cadeia de entradas symbol_table_entry
  tree_node* abstract_tree = NULL; // Árvore abstrata definida como uma cadeia de entradas tree_node
  int global_scope_counter = 0; // Inicializa escopo global - https://steemit.com/programming/@drifter1/writing-a-simple-compiler-on-my-own-using-symbol-tables-in-the-lexer - 13/04
  int current_scope_seq = 0;
  int aux_scope = 0;
  scope* global_scope = NULL;
  scope* current_scope = NULL;
  int whitin_parameters = 0;
  int whitin_function = 0;
  semantic_validations* semantics = NULL;

%}



%define lr.type canonical-lr

%union value {
  // char tt_name[51]; // tt_name: Terminal Token name      inicialização com tamanho estático para poder usar strcpy no léxico e não precisar lidar com free's eternos por causa do strdup
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
%type <tt_name> type-specifier
// %type <nt_node> parameters
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
      // printf("program\n");
      // abstract_tree = $1;
      // tree_node* create_ast_node(rules_types rule, char* type, char* value, struct tree_node* next, struct tree_node* child) 
      $$ = create_ast_node(PROGRAM, NULL, NULL, NULL, $1);
      abstract_tree = $$;
    }
  
;
declaration-list:
  declaration-list declaration
    {
      // printf("declaration-list  ->  declaration-list declaration\n");
      $$ = create_ast_node(DECLARATION_LIST, NULL, NULL, NULL, $1);
      $1->next = $2;
    }
  |
  declaration
    {
      // printf("declaration-list  ->  declaration\n");
      $$ = $1;
    }
;
declaration:
  var-declaration
    {
      // printf("declaration  ->  var-declaration\n");
      $$ = $1;
    }
  |
  func-declaration
    {
      // printf("declaration  ->  func-declaration\n");
      $$ = $1;
    }
;
var-declaration:
  variable ';'
    {
      // printf("var declaration  ->  variable ;\n");
      $$ = $1;
    }
;
variable:
  type-specifier ID
    { 
      // printf("variable  ->  type-specifier %s\n", $2);
      // NÃO PRECISA CRIAR NÓ NO TYPE-SPECIFIER, SÓ CHAMAR A TT_NAME DA UNION 
      $$ = create_ast_node(VARIABLE, (char*) $1, $2, NULL, NULL);
      if(whitin_parameters) insert_into_symbol_table($2, (char*) $1, "parameter");
      else insert_into_symbol_table($2, (char*) $1, "variable");
    }
;
func-declaration:
  type-specifier ID '('
    {
      whitin_parameters = 1;
      whitin_function = 1;
      printf("1: %d\n", global_scope_counter);
      global_scope_counter++;
      aux_scope = current_scope_seq;
      current_scope_seq = global_scope_counter;
      printf("2: %d\n", global_scope_counter);
      // current_scope_seq = global_scope_counter;
      // current_scope = create_scope(current_scope, global_scope_counter);
    }
  parameter-list ')'
    {
      whitin_parameters = 0;
      global_scope_counter--;
      current_scope_seq = aux_scope;
      // current_scope_seq--;
      // current_scope = current_scope->father;
    }
  compound-stmt
    {
      // printf("func-declaration  ->  type-specifier %s ( parameters ) compount-stmt\n", $2);
      $$ = create_ast_node(FUNC_DECLARATION, $1, $2, NULL, $5);
      $5->next = $8;
      // current_scope_seq--;
      aux_scope = current_scope_seq;
      current_scope_seq = current_scope->scope_seq;
      insert_into_symbol_table($2, $1, "function");
      current_scope_seq = aux_scope;
      perform_main_validation($2);
      // printf("wfunction: %d\n", whitin_function);
      whitin_function = 0;
    }
;
type-specifier:
  TYPEINT
    {
      // printf("type-specifier  ->  %s\n", $1);
      // $$ = create_ast_node(TYPE_SPECIFIER, $1, NULL, NULL, NULL);
      $$ = $1;
    }
  |
  TYPEFLOAT
    {
      // printf("type-specifier  ->  %s\n", $1);
      // $$ = create_ast_node(TYPE_SPECIFIER, $1, NULL, NULL, NULL);
      $$ = $1;
    }
  |
  TYPEELEM
    {
      // printf("type-specifier  ->  %s\n", $1);
      // $$ = create_ast_node(TYPE_SPECIFIER, $1, NULL, NULL, NULL);
      $$ = $1;
    }
  |
  TYPESET
    {
      // printf("type-specifier  ->  %s\n", $1);
      // $$ = create_ast_node(TYPE_SPECIFIER, $1, NULL, NULL, NULL);
      $$ = $1;
    }
;
// parameters:
//   parameter-list
//     {
//       // printf("parameters  ->  parameter-list\n");
//       $$ = $1;
//     }
// ;
parameter-list:
  parameter-list ',' parameter
    {
      // printf("parameter-list  ->  parameter-list , parameter\n");
      $$ = create_ast_node(PARAMETER_LIST, NULL, NULL, NULL, $1);
      $1->next = $3;
    }
  |
  parameter
    {
      // printf("parameter-list  ->  parameter\n");
      $$ = create_ast_node(PARAMETER_LIST, NULL, NULL, NULL, $1);
      // $$ = $1;
    }
  |
  %empty
    {
      // $$ = NULL;
      $$ = create_ast_node(EMPTY_PARAMETER_LIST, NULL, NULL, NULL, NULL);
    }
  |
  error 
    {
      yyerrok;
      $$ = NULL;
    }
;
parameter:
  variable
    {
      // printf("parameter  ->  variable\n");
      $$ = $1;
    }
;
compound-stmt:
  '{' 
    {
      // if(!whitin_function){
        printf("3: %d\n", global_scope_counter);
        
        // if(whitin_function) {
        //   global_scope_counter++;
        //   aux_scope = current_scope_seq;
        //   current_scope_seq = global_scope_counter;
        // }
        
        global_scope_counter++;
        aux_scope = current_scope_seq;
        current_scope_seq = global_scope_counter;
        printf("4: %d\n", global_scope_counter);
      // }
      // current_scope_seq++;
      current_scope = create_scope(current_scope, global_scope_counter);
    }
  local-declarations '}'
    {
      // printf("compound-stmt  ->  { local-declarations }\n");
      $$ = create_ast_node(COMPOUND_STMT, NULL, NULL, NULL, $3);
      // $$ = $3;
      printf("5: %d\n", global_scope_counter);
      // global_scope_counter--;
      // current_scope_seq--;
      current_scope_seq = aux_scope;
      printf("6: %d\n", global_scope_counter);
      // current_scope_seq--;
      current_scope = current_scope->father;
      whitin_function = 0;
      printf("wfunction: %d\n", whitin_function);
    }
;
local-declarations:
  statement-list
    {
      // printf("local-declarations  ->  statement-list\n");
      // $$ = create_ast_node(COMPOUND_STMT, NULL, NULL, NULL, $3);
      $$ = $1;
    }
  |
  %empty
    {
      // printf("local-declarations  ->\n");
      $$ = NULL;
    }
;
statement-list:
  statement-list statement
    {
      // printf("statement-list  ->  statement-list statement\n");
      $$ = create_ast_node(STATEMENT_LIST, NULL, NULL, NULL, $1);
      $1->next = $2;
    }
  |
  statement
    {
      // printf("statement-list  ->  statement\n");
      $$ = $1;
    }
;
statement:
  compound-stmt
    {
      // printf("statement  ->  compound-stmt \n");
      $$ = $1;
    }
  |
  conditional-stmt
    {
      // printf("statement  ->  conditional-stmt \n" );
      $$ = $1;
    }
  |
  iteration-stmt
    {
      // printf("statement  ->  iteration-stmt \n" );
      $$ = $1;
    }
  |
  expression-stmt
    {
      // printf("statement  ->  expression-stmt \n" );
      $$ = $1;
    }
  |
  return-stmt
    {
      // printf("statement  ->  return-stmt \n" );
      $$ = $1;
    }
  |
  var-declaration
    {
      // printf("statement  ->  var-declaration \n");
      $$ = $1;
    }
  |
  forall-stmt
    {
      // printf("statement  ->  forall-stmt \n");
      $$ = $1;
    }
  |
  error 
    {
      yyerrok;
      $$ = NULL;
    }
;
forall-statement:
  compound-stmt
    {
      // printf("statement  ->  compound-stmt \n");
      $$ = $1;
    }
  |
  conditional-stmt
    {
      // printf("statement  ->  conditional-stmt \n" );
      $$ = $1;
    }
  |
  iteration-stmt
    {
      // printf("statement  ->  iteration-stmt \n" );
      $$ = $1;
    }
  |
  expression-stmt
    {
      // printf("statement  ->  expression-stmt \n" );
      $$ = $1;
    }
  |
  forall-stmt
    {
      // printf("statement  ->  forall-stmt \n");
      $$ = $1;
    }
;
// https://www.epaperpress.com/lexandyacc/if.html - 8/4
conditional-stmt:
  IF '(' expression ')' statement %prec IFX
    {
      // printf("conditional-stmt  ->  if ( expression ) statement \n");
      $$ = create_ast_node(CONDITIONAL_IF_STMT, NULL, NULL, NULL, $3);
      $3->next = $5;
    }
  |
  IF '(' expression ')' statement ELSE statement
    {
      // printf("conditional-stmt  ->  if ( expression ) statement else statement\n");
      $$ = create_ast_node(CONDITIONAL_IF_ELSE_STMT, NULL, NULL, NULL, $3);
      $3->next = $5;
      $5->next = $7;
    }
  |
  IF setop-in statement %prec IFX
    {
      // printf("conditional-stmt  ->  if ( expression ) statement \n");
      $$ = create_ast_node(CONDITIONAL_IF_STMT, NULL, NULL, NULL, $2);
      $2->next = $3;
    }
  |
  IF setop-in statement ELSE statement
    {
      // printf("conditional-stmt  ->  if ( expression ) statement else statement\n");
      $$ = create_ast_node(CONDITIONAL_IF_ELSE_STMT, NULL, NULL, NULL, $2);
      $2->next = $3;
      $3->next = $5;
    }
;
iteration-stmt:
  FOR '(' expression-stmt expression-stmt expression ')' statement
    {
      // printf("iteration-stmt  ->  for ( expression ; expression ; expression ) statement\n");
      $$ = create_ast_node(ITERATION_STMT, NULL, NULL, NULL, $3);
      $3->next = $4;
      $4->next = $5;
      $5->next = $7;
    }
;

forall-stmt:
  FORALL_OP setop-in forall-statement
    {
      // printf("setop-forall  ->  setop-in forall-statement\n");
      $$ = create_ast_node(FORALL_STMT, NULL, NULL, NULL, $2);
      $2->next = $3;
    }
;

expression-stmt:
  expression ';'
    {
      // printf("expression-stmt  ->  expression ;\n");
      $$ = $1;
    }
  |
  ';'
    {
      // printf("expression-stmt  ->  ; \n");
      $$ = NULL;
    }
;
return-stmt:
  RETURN ';'
    {
      // printf("return-stmt  ->  return ; \n");
      $$ = create_ast_node(RETURN_STMT, NULL, NULL, NULL, NULL);
    }
  |
  RETURN expression ';'
    {
      // printf("return-stmt  ->  return expression ; \n");
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
  // //     printf("expression  ->  %s = expression ;\n", $1);
  //     $$ = create_ast_node(EXPRESSION, NULL, $3, NULL, $4);
  //   }
  var ASSIGN expression
    {
      // printf("expression  ->  var = expression ;\n");
      $$ = create_ast_node(EQ_T, NULL, $2, NULL, $1);
      $1->next = $3;
    }
  |
  simple-expression
    {
      // printf("expression  ->  simple-expression ;\n");
      $$ = $1;
    }
  |
  set-expression
    {
      // printf("expression  ->  set-expression ;\n");
      $$ = $1;
    }
  |
  io-expression
    {
      // printf("expression  ->  io-expression ;\n");
      $$ = $1;
    }
;
simple-expression:
  logop-una relational-exp
    {
      // printf("simple-expression  ->  logop-una relational-exp simple-expression\n");
      $$ = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
      $1->next = $2;
    }
  |
  logop-una set-expression
    {
      // printf("simple-expression  ->  logop-una relational-exp simple-expression\n");
      $$ = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
      $1->next = $2;
    }
  |
  simple-expression logop-bin relational-exp
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      $$ = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
      $1->next = $2;
      $2->next = $3;
    }
  |
  simple-expression logop-bin set-expression
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      $$ = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
      $1->next = $2;
      $2->next = $3;
      
    }
  |
  set-expression logop-bin relational-exp
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      $$ = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
      $1->next = $2;
      $2->next = $3;
    }
  |
  set-expression logop-bin set-expression
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      $$ = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
      $1->next = $2;
      $2->next = $3;
    }
  |
  simple-expression logop-bin logop-una relational-exp
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      $$ = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
      $1->next = $2;
      $2->next = $3;
      $4->next = $4;
    }
  |
  simple-expression logop-bin logop-una set-expression
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      $$ = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
      $1->next = $2;
      $2->next = $3;
      $4->next = $4;
    }
  |
  set-expression logop-bin logop-una relational-exp
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      $$ = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
      $1->next = $2;
      $2->next = $3;
      $4->next = $4;
    }
  |
  set-expression logop-bin logop-una set-expression
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      $$ = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
      $1->next = $2;
      $2->next = $3;
      $4->next = $4;
    }
  |
  relational-exp
    {
      // printf("simple-expression  ->  relational-exp\n");
      $$ = $1;
    }
;
relational-exp:
  relational-exp relop arithm-add-exp
    {
      // printf("relational-exp  ->  arithm-add-exp relop arithm-add-exp\n");
      $$ = create_ast_node(RELATIONAL_EXP, NULL, $2->value, NULL, $1);
      $1->next = $3;
      // $2->next = $3;
    }
  |
  arithm-add-exp
    {
      // printf("relational-exp  ->  arithm-add-exp\n");
      $$ = $1;
    }
;
arithm-add-exp:
  arithm-add-exp ariop-add arithm-mul-exp
    {
      // printf("arithm-add-exp  ->  arithm-add-exp ariop-add arithm-mul-exp\n");
      $$ = create_ast_node(ARITHM_ADD_EXP, NULL, $2->value, NULL, $1);
      $1->next = $3;
      // $2->next = $3;
    }
  |
  arithm-mul-exp
    {
      // printf("arithm-add-exp  ->  arithm-mul-exp\n");
      $$ = $1;
    }
;
arithm-mul-exp:
  arithm-mul-exp ariop-mul unary-minus-exp
    {
      // printf("arithm-mul-exp  ->  arithm-mul-exp ariop-mul unary-minus-exp\n");
      $$ = create_ast_node(ARITHM_MUL_EXP, NULL, $2->value, NULL, $1);
      $1->next = $3;
      // $2->next = $3;
    }
    |
  unary-minus-exp
    {
      // printf("arithm-mul-exp  ->  unary-minus-exp\n");
      $$ = $1;
    }
;
unary-minus-exp:
  MINUS factor %prec NEG
    {
      // printf("unary-minus-exp  ->  '-' factor\n");
      // $$ = $2; //CORRIGIR NUMERO NEGATIVO
      $$ = create_ast_node(UNARY_MINUS_EXP, NULL, $1, NULL, $2);
    }
  |
  factor
    {
      // printf("unary-minus-exp  ->  factor\n");
      $$ = $1;
    }
;
factor:
  '(' expression ')'
    {
      // printf("factor  ->  ( expression )\n");
      $$ = $2;
    }
  |
  func-call
    {
      // printf("factor  ->  func-call\n");
      $$ = $1;
    }
  |
  // ID
  //   {
  // //     printf("factor  ->  %s\n", $1);
  //     $$ = create_ast_node(FACTOR, NULL, $1, NULL, NULL);
  //   }
  var
    {
      // printf("factor  ->  var\n");
      $$ = $1;
    }
  |
  INT
    {
      // printf("factor  ->  %s\n", $1);
      $$ = create_ast_node(FACTOR, NULL, $1, NULL, NULL);
    }
  |
  FLOAT
    {
      // printf("factor  ->  %s\n", $1);
      $$ = create_ast_node(FACTOR, NULL, $1, NULL, NULL);
    }
  |
  EMPTY
    {
      // printf("factor  ->  %s\n", $1);
      $$ = create_ast_node(FACTOR, NULL, $1, NULL, NULL);
    }
;
logop-una:
  NOT 
    {
      // printf("logop-una  ->  !\n");
      $$ = create_ast_node(LOGOP_UNA, NULL, $1, NULL, NULL);
      // $$ = $1;
    }
;
logop-bin:
  AND
    {
      // printf("logop-bin  ->  &&\n");
      $$ = create_ast_node(LOGOP_BIN, NULL, $1, NULL, NULL);
      // $$ = $1;
    }
  |
  OR
    {
      // printf("logop-bin  ->  ||\n");
      $$ = create_ast_node(LOGOP_BIN, NULL, $1, NULL, NULL);
      // $$ = $1;
    }
;
relop:
  LT
    {
      // printf("relop  ->  <\n");
      $$ = create_ast_node(RELOP, NULL, $1, NULL, NULL);
      // $$ = $1;
    }
  |
  LTE
    {
      // printf("relop  ->  <=\n");
      $$ = create_ast_node(RELOP, NULL, $1, NULL, NULL);
      // $$ = $1;
    }
  |
  GT
    {
      // printf("relop  ->  >\n");
      $$ = create_ast_node(RELOP, NULL, $1, NULL, NULL);
      // $$ = $1;
    }
  |
  GTE
    {
      // printf("relop  ->  >=\n");
      $$ = create_ast_node(RELOP, NULL, $1, NULL, NULL);
      // $$ = $1;
    }
  |
  EQ
    {
      // printf("relop  ->  ==\n");
      $$ = create_ast_node(RELOP, NULL, $1, NULL, NULL);
      // $$ = $1;
    }
  |
  NEQ
    {
      // printf("relop  ->  !=\n");
      $$ = create_ast_node(RELOP, NULL, $1, NULL, NULL);
      // $$ = $1;
    }
;
ariop-add:
  PLUS
    {
      // printf("ariop-add  ->  +\n");
      $$ = create_ast_node(ARIOP_ADD, NULL, $1, NULL, NULL);
      // $$ = $1;
    }
  |
  MINUS 
    {
      // printf("ariop-add  ->  -\n");
      $$ = create_ast_node(ARIOP_ADD, NULL, $1, NULL, NULL);
      // $$ = $1;
    }
;
ariop-mul:
  MULT
    {
      // printf("ariop-mul  ->  *\n");
      $$ = create_ast_node(ARIOP_MUL, NULL, $1, NULL, NULL);
      // $$ = $1;
    }
  |
  DIV
    {
      // printf("ariop-mul  ->  /\n");
      $$ = create_ast_node(ARIOP_MUL, NULL, $1, NULL, NULL);
      // $$ = $1;
    }
;
set-expression:
  setop-in
    {
      // printf("set-expressions  ->  setop-in\n");
      $$ = $1;
    }
  |
  setop-is-set
    {
      // printf("set-expressions  ->  setop-is-set\n");
      $$ = $1;
    }
  |
  setop-add
    {
      // printf("set-expressions  ->  setop-add\n");
      $$ = $1;
    }
  |
  setop-remove
    {
      // printf("set-expressions  ->  setop-remove\n");
      $$ = $1;
    }
  |
  setop-exists
    {
      // printf("set-expressions  ->  setop-exists\n");
      $$ = $1;
    }
;
setop-in:
  '(' expression IN_OP expression ')'
    {
      // printf("setop-in  ->  ( expression IN_OP expression ) \n");
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
  // //     printf("setop-is-set  ->  is_set ( %s )\n", $3);
  //     $$ = create_ast_node(VARIABLE, NULL, $4, NULL, NULL);
  //   }
  IS_SET_OP '(' var ')'
    {
      // printf("setop-is-set  ->  is_set ( var )\n");
      $$ = create_ast_node(SETOP_IS_SET, NULL, $1, NULL, $3);
    }
;
setop-add:
  ADD_OP setop-in
    {
      // printf("setop-add  ->  add setop-in\n");
      $$ = create_ast_node(SETOP_ADD, NULL, $1, NULL, $2);
    }
;
setop-remove:
  REMOVE_OP setop-in
    {
      // printf("setop-remove  ->  remove setop-in\n");
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
  // //     printf("setop-exists  ->  exists ( %s in %s )\n", $3, $5);
  //     $$ = create_ast_node(VARIABLE, NULL, $8, NULL, NULL);
  //   }
  EXISTS_OP '(' var IN_OP var ')'
    {
      // printf("setop-exists  ->  exists ( var in var )\n");
      $$ = create_ast_node(SETOP_EXISTS, NULL, $1, NULL, $3);
      $3->next = $5;
    }
;
io-expression:
  ioop-read
    {
      // printf("io-expression  ->  ioop-read\n");
      $$ = $1;
    }
  |
  ioop-write
    {
      // printf("io-expression  ->  ioop-read\n");
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
  // //     printf("ioop-read  ->  read ( %s ) \n", $3);
  //     $$ = create_ast_node(VARIABLE, NULL, $4, NULL, NULL);
  //   }
  READ '(' var ')'
    {
      // printf("ioop-read  ->  read ( var ) \n");
      $$ = create_ast_node(READ_T, NULL, $1, NULL, $3);
    }
;
ioop-write:
  WRITE '(' word ')'
    {
      // printf("ioop-write  ->  write ( word ) \n");
      $$ = create_ast_node(WRITE_T, NULL, $1, NULL, $3);
    }
  |
  WRITELN '(' word ')'
    {
      // printf("ioop-write  ->  writeln ( word ) \n");
      $$ = create_ast_node(WRITELN_T, NULL, $1, NULL, $3);
    }
;
word:
  CHAR
    {
      // printf("word  ->  %s\n", $1);
      $$ = create_ast_node(CHAR_T, NULL, $1, NULL, NULL);
      // $$ = $1;
    }
  |
  STRING
    {
      // printf("word  ->  %s\n", $1);
      $$ = create_ast_node(STRING_T, NULL, $1, NULL, NULL);
      // $$ = $1;
    }
;
func-call:
  ID '(' arguments ')'
    {
      // printf("func-call  ->  %s ( arguments )\n", $1);
      $$ = create_ast_node(FUNC_CALL, NULL, $1, NULL, $3);
    }
;
arguments:
  args-list
    {
      // printf("arguments  ->  args-list\n");
      $$ = $1;
    }
  |
  %empty
    {
      // printf("arguments  ->  empty-set\n");
      $$ = NULL;
    }
;
args-list:
  args-list ',' expression
    {
      // printf("args-list  ->  args-list , expression\n");
      $$ = create_ast_node(ARGS_LIST, NULL, NULL, NULL, $1);
      $1->next = $3;
    }
  |
  expression
    {
      // printf("args-list  ->  expression\n");
      $$ = create_ast_node(ARGS_LIST, NULL, NULL, NULL, $1);
      // $$ = $1;
    }
;
var:
  ID
    {
      // printf("var  ->  %s\n", $1);
      $$ = create_ast_node(VAR, NULL, $1, NULL, NULL);
      // $$ = $1;
    }
;

%%



void yyerror(const char *tt_name) {
  printf("yyerror:%s em linha:%d coluna:%d.\n", tt_name, line, column);
}

int main(int argc, char *argv[]){
  yyin = fopen(argv[1], "r");

  global_scope = initialize_scope();
  current_scope = global_scope;
  initialize_semantic_validations();
  yyparse();
  fclose(yyin);

  //  if(error_count > 0){
  //    printf("\nThe lexical analisys finished with %d errors found.\n", error_count);
  //  }

  run_semantic_validation();

  printf("\n\n\n________________| ABSTRACT SYNTAX TREE |________________\n\n");
  print_tree(abstract_tree, 0);
  print_symbol_table();
  print_scope(global_scope, 0);

  free_ast(abstract_tree);
  free_symbol_table();
  free_scope(global_scope);
  
  yylex_destroy();

  return 0;
}

void initialize_semantic_validations() {
  semantics = (semantic_validations*) malloc(sizeof(semantic_validations));

  semantics->main_issue = 1;
  semantics->scope_issue = 0;
  semantics->previous_ref_issue = 0;
  semantics->function_args_issue = 0;
  semantics->implicit_cast_issue = 0;
  semantics->return_type_issue = 0;
}

void run_semantic_validation() {
  if(semantics->main_issue == 1) printf("-> SEMANTIC_VALIDATION_ERROR: no function 'main' declared.");
}

void perform_main_validation(char* func_name) {
  // if(semantics->main_issue){
  //   printf("-> SEMANTIC_VALIDATION_ERROR: double 'main' function declaration.");
  // }
  // valida se existe main declarada
  // printf("%s\n", func_name);
  // printf("%d %d\n", semantics->main_issue, strcmp(func_name, "main"));
  if(semantics->main_issue && (strcmp(func_name, "main") == 0)) {
    semantics->main_issue = 0;
  }
}