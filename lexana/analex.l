%option noinput nounput

%{
#include <stdio.h>

int line = 1, column = 1, error_count = 0;
%}

%x ML_COMMENT

DIGIT     [0-9]
INT       {DIGIT}+
FLOAT     {DIGIT}+"."{DIGIT}+
LETTER_   [a-zA-Z]|_
ID        {LETTER_}({LETTER_}|{DIGIT})*
CHAR      \'(\\.|[^'\\])\'
STRING    \'(\\.|[^'\\])*\'
EMPTY     EMPTY

PLUS    "+"
MINUS   "-"
MULT    "*"
DIV     "/"

NOT   "!"
OR    "||"
AND   "&&"

LT    "<"
LTE   "<="
GT    ">"
GTE   ">="
EQ    "=="
NEQ   "!="

ASSIGN    "="

TYPEINT     "int"
TYPEFLOAT   "float"
TYPEELEM    "elem"
TYPESET     "set"
IF          "if"
ELSE        "else"
FOR         "for"
RETURN      "return"
READ        "read"
WRITE       "write"
WRITELN     "writeln"
IN_OP       "in"
IS_SET_OP   "is_set"
ADD_OP      "add"
REMOVE_OP   "remove"
EXISTS_OP   "exists"
FORALL_OP   "forall"

LPAREN      "("
RPAREN      ")"
LBRACK      "["
RBRACK      "]"
LBRACE      "{"
RBRACE      "}"
COMMA       ","
SEMICOLON   ";"

WS          [ \t\r\f]
NEW_LINE    "\n"

IL_COMMENT      "//"
ML_COMMENT_BGN  "/*"
ML_COMMENT_END  "*/"



%%
{WS} {
  column++;
}

{IL_COMMENT}.* /*Não incremento contador de coluna pois não me interessa o conteúdo do comentário*/

{ML_COMMENT_BGN} {
  BEGIN(ML_COMMENT);
}

<ML_COMMENT>{ML_COMMENT_END} {
  BEGIN(INITIAL);
}

<ML_COMMENT>[^*\n]+ //Fonte: https://steemit.com/programming/@drifter1/writing-a-simple-compiler-on-my-own-lexical-analysis-using-flex

<ML_COMMENT>"*"     //Fonte: https://steemit.com/programming/@drifter1/writing-a-simple-compiler-on-my-own-lexical-analysis-using-flex

<ML_COMMENT>{NEW_LINE} {
  line++;
}

{TYPEINT} {
  column += yyleng;
  printf("<TYPEINT,%s>\n", yytext);
}

{TYPEFLOAT} {
  column += yyleng;
  printf("<TYPEFLOAT,%s>\n", yytext);
}

{TYPEELEM} {
  column += yyleng;
  printf("<TYPEELEM,%s>\n", yytext);
}

{TYPESET} {
  column += yyleng;
  printf("<TYPESET,%s>\n", yytext);
}

{IF} {
  column += yyleng;
  printf("<IF>\n");
}

{ELSE} {
  column += yyleng;
  printf("<ELSE>\n");
}

{FOR} {
  column += yyleng;
  printf("<FOR>\n");
}

{RETURN} {
  column += yyleng;
  printf("<RETURN>\n");
}

{READ} {
  column += yyleng;
  printf("<READ>\n");
}

{WRITE} {
  column += yyleng;
  printf("<WRITE>\n");
}

{WRITELN} {
  column += yyleng;
  printf("<WRITELN>\n");
}

{IN_OP} {
  column += yyleng;
  printf("<IN_OP,%s>\n", yytext);
}

{IS_SET_OP} {
  column += yyleng;
  printf("<IS_SET_OP,%s>\n", yytext);
}

{ADD_OP} {
  column += yyleng;
  printf("<ADD_OP,%s>\n", yytext);
}

{REMOVE_OP} {
  column += yyleng;
  printf("<REMOVE_OP,%s>\n", yytext);
}

{EXISTS_OP} {
  column += yyleng;
  printf("<EXISTS_OP,%s>\n", yytext);
}

{FORALL_OP} {
  column += yyleng;
  printf("<FORALL_OP,%s>\n", yytext);
}

{PLUS} {
  column += yyleng;
  printf("<%s>\n", yytext);
}

{MINUS} {
  column += yyleng;
  printf("<%s>\n", yytext);
}

{MULT} {
  column += yyleng;
  printf("<%s>\n", yytext);
}

{DIV} {
  column += yyleng;
  printf("<%s>\n", yytext);
}

{NOT} {
  column += yyleng;
  printf("<%s>\n", yytext);
}

{OR} {
  column += yyleng;
  printf("<%s>\n", yytext);
}

{AND} {
  column += yyleng;
  printf("<%s>\n", yytext);
}

{LT} {
  column += yyleng;
  printf("<%s>\n", yytext);
}

{LTE} {
  column += yyleng;
  printf("<%s>\n", yytext);
}

{GT} {
  column += yyleng;
  printf("<%s>\n", yytext);
}

{GTE} {
  column += yyleng;
  printf("<%s>\n", yytext);
}

{EQ} {
  column += yyleng;
  printf("<%s>\n", yytext);
}

{NEQ} {
  column += yyleng;
  printf("<%s>\n", yytext);
}

{ASSIGN} {
  column += yyleng;
  printf("<%s>\n", yytext);
}

{LPAREN} {
  column += yyleng;
  printf("<%s>\n", yytext);
}

{RPAREN} {
  column += yyleng;
  printf("<%s>\n", yytext);
}

{LBRACK} {
  column += yyleng;
  printf("<%s>\n", yytext);
}

{RBRACK} {
  column += yyleng;
  printf("<%s>\n", yytext);
}

{LBRACE} {
  column += yyleng;
  printf("<%s>\n", yytext);
}

{RBRACE} {
  column += yyleng;
  printf("<%s>\n", yytext);
}

{COMMA} {
  column += yyleng;
  printf("<%s>\n", yytext);
}

{SEMICOLON} {
  column += yyleng;
  printf("<%s>\n", yytext);
}

{EMPTY} {
  column += yyleng;
  printf("<%s>\n", yytext);
}

{INT} {
  column += yyleng;
  printf("<INT,%s>\n", yytext);
}

{FLOAT} {
  column += yyleng;
  printf("<FLOAT,%s>\n", yytext);
}

{CHAR} {
  column += yyleng;
  printf("<CHAR,%s>\n", yytext);
}

{STRING} {
  column += yyleng;
  printf("<STRING,%s>\n", yytext);
}

{ID} {
  column += yyleng;
  printf("<ID,%s>\n", yytext);
}

{NEW_LINE} {
  line++;
  column = 1;
}

. {
  printf("Error: unrecognized character \"%s\" in line %d column %d\n", yytext, line, column);
  error_count++;
  column++;
}
%%

int main(int argc, char *argv[]){
   yyin = fopen(argv[1], "r");
   yylex();
   fclose(yyin);
   yylex_destroy();

   if(error_count > 0){
     printf("\nThe lexical analisys finished with %d errors found.\n", error_count);
   }

   return 0;
}