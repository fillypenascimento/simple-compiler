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


  // SYMBOL TABLE DECLARATIONS
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

  // Tabela de símbolos definida como uma cadeia de entradas symbol_table_entry
  symbol_table_entry* symbol_table = NULL;
  // symbol_table = NULL;

  // https://steemit.com/programming/@drifter1/writing-a-simple-compiler-on-my-own-using-symbol-tables-in-the-lexer - 13/04
  int current_scope = 0;

  // Symbol Table management functions
  symbol_table_entry* create_symbol_table_entry(char* hash_key, char* symbol_name, char* symbol_type, int symbol_scope, char* entry_type);
  void insert_into_symbol_table(char* symbol_name, char* symbol_type, char* entry_type);
  char* build_hash_key(char* symbol_name, char* symbol_type, char* entry_type);
  void lookup_symbol_table();
  void print_symbol_table();
  void free_symbol_table();

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

program: declaration-list { printf("program\n"); }
;
declaration-list: declaration-list declaration { printf("declaration-list  ->  declaration-list declaration\n"); }
                | declaration { printf("declaration-list  ->  declaration\n"); }
;
declaration: var-declaration { printf("declaration  ->  var-declaration\n"); }
           | func-declaration { printf("declaration  ->  func-declaration\n"); }
;
var-declaration: variable ';' { printf("var declaration  ->  variable ;\n"); }
;
variable: type-specifier ID
          { 
            printf("variable  ->  type-specifier %s\n", $2);
            insert_into_symbol_table($2, "var_type", "var");
          }
;
func-declaration: type-specifier ID '(' parameters ')' compound-stmt
                  {
                    printf("func-declaration  ->  type-specifier %s ( parameters ) compount-stmt\n", $2);
                    insert_into_symbol_table($2, "func_type", "func");
                  }
;
type-specifier: TYPEINT { printf("type-specifier  ->  %s\n", $1); }
              | TYPEFLOAT { printf("type-specifier  ->  %s\n", $1); }
              | TYPEELEM { printf("type-specifier  ->  %s\n", $1); }
              | TYPESET { printf("type-specifier  ->  %s\n", $1); }
;
parameters: parameter-list { printf("parameters  ->  parameter-list\n"); }
          | %empty { printf("parameters  ->\n"); }
;
parameter-list: parameter-list ',' parameter { printf("parameter-list  ->  parameter-list , parameter\n"); }
              | parameter { printf("parameter-list  ->  parameter\n"); }
;
parameter: variable { printf("parameter  ->  variable\n"); }
;
compound-stmt: '{' 
                 {
                   current_scope+=1;
                 } 
               local-declarations '}'
                 {
                   printf("compound-stmt  ->  { local-declarations }\n");
                   current_scope-=1;
                 }
;
local-declarations: statement-list { printf("local-declarations  ->  statement-list\n"); }
                  | %empty { printf("local-declarations  ->\n"); }
;
statement-list: statement-list statement { printf("statement-list  ->  statement-list statement\n"); }
              | statement { printf("statement-list  ->  statement\n"); }
;
statement: compound-stmt { printf("statement  ->  compound-stmt \n"); }
         | conditional-stmt { printf("statement  ->  conditional-stmt \n" ); }
         | iteration-stmt { printf("statement  ->  iteration-stmt \n" ); }
         | expression-stmt { printf("statement  ->  expression-stmt \n" ); }
         | return-stmt { printf("statement  ->  return-stmt \n" ); }
         | var-declaration { printf("statement  ->  var-declaration \n"); }
         | forall-stmt { printf("statement  ->  forall-stmt \n"); }
;
forall-statement: compound-stmt { printf("statement  ->  compound-stmt \n"); }
                | conditional-stmt { printf("statement  ->  conditional-stmt \n" ); }
                | iteration-stmt { printf("statement  ->  iteration-stmt \n" ); }
                | expression-stmt { printf("statement  ->  expression-stmt \n" ); }
                | forall-stmt { printf("statement  ->  forall-stmt \n"); }
;
// https://www.epaperpress.com/lexandyacc/if.html - 8/4
conditional-stmt: IF '(' expression ')' statement %prec IFX { printf("conditional-stmt  ->  if ( expression ) statement \n"); }
                | IF '(' expression ')' statement ELSE statement { printf("conditional-stmt  ->  if ( expression ) statement else statement\n"); }
                | IF setop-in statement %prec IFX { printf("conditional-stmt  ->  if ( expression ) statement \n"); }
                | IF setop-in statement ELSE statement { printf("conditional-stmt  ->  if ( expression ) statement else statement\n"); }
;
iteration-stmt: FOR '(' expression-stmt expression-stmt expression ')' statement { printf("iteration-stmt  ->  for ( expression ; expression ; expression ) statement\n"); }
;

forall-stmt: FORALL_OP setop-in forall-statement { printf("setop-forall  ->  setop-in forall-statement\n"); }
;

expression-stmt: expression ';' { printf("expression-stmt  ->  expression ;\n"); }
               | ';' { printf("expression-stmt  ->  ; \n"); }
;
return-stmt: RETURN ';' { printf("return-stmt  ->  return ; \n"); }
           | RETURN expression ';' { printf("return-stmt  ->  return expression ; \n"); }
;
expression: ID '=' expression { printf("expression  ->  %s = expression ;\n", $1); }
          | simple-expression { printf("expression  ->  simple-expression ;\n"); }
          | set-expression { printf("expression  ->  set-expression ;\n"); }
          | io-expression { printf("expression  ->  io-expression ;\n"); }
;
simple-expression: logop-una relational-exp { printf("simple-expression  ->  logop-una relational-exp simple-expression\n"); }
                 | logop-una set-expression { printf("simple-expression  ->  logop-una relational-exp simple-expression\n"); }
                 | simple-expression logop-bin relational-exp { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
                 | simple-expression logop-bin set-expression { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
                 | set-expression logop-bin relational-exp { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
                 | set-expression logop-bin set-expression { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
                 | simple-expression logop-bin logop-una relational-exp { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
                 | simple-expression logop-bin logop-una set-expression { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
                 | set-expression logop-bin logop-una relational-exp { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
                 | set-expression logop-bin logop-una set-expression { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
                 | relational-exp { printf("simple-expression  ->  relational-exp\n"); }
;
relational-exp: relational-exp relop arithm-add-exp { printf("relational-exp  ->  arithm-add-exp relop arithm-add-exp\n"); }
              | arithm-add-exp { printf("relational-exp  ->  arithm-add-exp\n"); }
;
arithm-add-exp: arithm-add-exp ariop-add arithm-mul-exp { printf("arithm-add-exp  ->  arithm-add-exp ariop-add arithm-mul-exp\n"); }
              | arithm-mul-exp { printf("arithm-add-exp  ->  arithm-mul-exp\n"); }
;
// arithm-mul-exp: arithm-mul-exp ariop-mul factor { printf("arithm-mul-exp  ->  arithm-mul-exp ariop-mul factor\n"); }
//               | factor { printf("arithm-mul-exp  ->  factor\n"); }
// ;
arithm-mul-exp: arithm-mul-exp ariop-mul unary-minus-exp { printf("arithm-mul-exp  ->  arithm-mul-exp ariop-mul unary-minus-exp\n"); }
              | unary-minus-exp { printf("arithm-mul-exp  ->  unary-minus-exp\n"); }
;
unary-minus-exp: '-' factor %prec NEG { printf("unary-minus-exp  ->  '-' factor\n"); }
              | factor { printf("unary-minus-exp  ->  factor\n"); }
;
factor: '(' expression ')' { printf("factor  ->  ( expression )\n"); }
      | func-call { printf("factor  ->  func-call\n"); }
      | ID { printf("factor  ->  %s\n", $1); }
      | INT { printf("factor  ->  %s\n", $1); }
      | FLOAT { printf("factor  ->  %s\n", $1); }
      | EMPTY { printf("factor  ->  %s\n", $1); }
;
logop-una: '!'  { printf("logop-una  ->  !\n"); }
;
logop-bin: AND { printf("logop-bin  ->  &&\n"); }
         | OR { printf("logop-bin  ->  ||\n"); }
;
relop: '<' { printf("relop  ->  <\n"); }
     | LTE { printf("relop  ->  <=\n"); }
     | '>' { printf("relop  ->  >\n"); }
     | GTE { printf("relop  ->  >=\n"); }
     | EQ { printf("relop  ->  ==\n"); }
     | NEQ { printf("relop  ->  !=\n"); }
;
ariop-add: '+' { printf("ariop-add  ->  +\n"); }
         | '-'  { printf("ariop-add  ->  -\n"); }
;
ariop-mul: '*' { printf("ariop-mul  ->  *\n"); }
         | '/' { printf("ariop-mul  ->  /\n"); }
;
set-expression: setop-in { printf("set-expressions  ->  setop-in\n"); }
              | setop-is-set { printf("set-expressions  ->  setop-is-set\n"); }
              | setop-add { printf("set-expressions  ->  setop-add\n"); }
              | setop-remove { printf("set-expressions  ->  setop-remove\n"); }
              | setop-exists { printf("set-expressions  ->  setop-exists\n"); }
;
setop-in: '(' expression IN_OP expression ')' { printf("setop-in  ->  ( expression IN_OP expression ) \n"); }
;
setop-is-set: IS_SET_OP '(' ID ')' { printf("setop-is-set  ->  is_set ( %s )\n", $3); }
;
setop-add: ADD_OP setop-in { printf("setop-add  ->  add setop-in\n"); }
;
setop-remove: REMOVE_OP setop-in { printf("setop-remove  ->  remove setop-in\n"); }
;
setop-exists: EXISTS_OP '(' ID IN_OP ID ')' { printf("setop-exists  ->  exists ( %s in %s )\n", $3, $5); }
;
io-expression: ioop-read { printf("io-expression  ->  ioop-read\n"); }
             | ioop-write { printf("io-expression  ->  ioop-read\n"); }
;
ioop-read: READ '(' ID ')' { printf("ioop-read  ->  read ( %s ) \n", $3); }
;
ioop-write: WRITE '(' word ')' { printf("ioop-write  ->  write ( word ) \n"); }
          | WRITELN '(' word ')' { printf("ioop-write  ->  writeln ( word ) \n"); }
;
word: CHAR { printf("word  ->  %s\n", $1); }
    | STRING { printf("word  ->  %s\n", $1); }
;
func-call: ID '(' arguments ')' { printf("func-call  ->  %s ( arguments )\n", $1); }
;
arguments: args-list { printf("arguments  ->  args-list\n"); }
         | %empty { printf("arguments  ->  empty-set\n"); }
;
args-list: args-list ',' expression { printf("args-list  ->  args-list , expression\n"); }
         | expression { printf("args-list  ->  expression\n"); }
;

%%

symbol_table_entry* create_symbol_table_entry(char* hash_key, char* symbol_name, char* symbol_type, int symbol_scope, char* entry_type) {
  symbol_table_entry* new_entry = (symbol_table_entry*) malloc(sizeof (symbol_table_entry));
  printf("created new entry\n");

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

  lookup_symbol_table(hash_key, new_entry);

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
  char* new_key = (char*) malloc(sizeof(key_size));
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

void lookup_symbol_table(char* hash_key, symbol_table_entry* result_entry) {
  HASH_FIND_STR(symbol_table, hash_key, result_entry);
}

void print_symbol_table() {
  symbol_table_entry* entry;
  
  printf("\n\n________________ SYMBOL TABLE ________________\n\n");
  for(entry = symbol_table; entry != NULL; entry = entry->hh.next) {
    printf("Table Entry =>   < HASH_KEY: %s >     < SYMBOL_NAME: %s >     < SYMBOL_TYPE: %s >     < SYMBOL_SCOPE: %d >     < ENTRY_TYPE: %s >\n", entry->hash_key, entry->symbol_name, entry->symbol_type, entry->symbol_scope, entry->entry_type);
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


void yyerror(const char *tt_name) {
    printf("yyerror: %s em linha: %d coluna: %d.\n", tt_name, line, column);

}

int main(int argc, char *argv[]){
  yyin = fopen(argv[1], "r");

  yyparse();
  fclose(yyin);
  yylex_destroy();

  //  if(error_count > 0){
  //    printf("\nThe lexical analisys finished with %d errors found.\n", error_count);
  //  }

  print_symbol_table();
  free_symbol_table();

  return 0;
}