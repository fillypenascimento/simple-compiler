%option noinput nounput noyywrap

%{
#include <stdio.h>
#include "anasin.tab.h"

extern char* yytext;
// extern int yylex();
int line = 1, column = 1, error_count = 0;
%}

%x ML_COMMENT

DIGIT     [0-9]
INT       {DIGIT}+
FLOAT     {DIGIT}+"."{DIGIT}+
LETTER_   [a-zA-Z]|_
ID        {LETTER_}({LETTER_}|{DIGIT})*
CHAR      \'(\\.|[^'\\])\'
STRING    \"(\\.|[^"\\])*\"
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
  // printf("<TYPEINT,%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return TYPEINT;
}

{TYPEFLOAT} {
  column += yyleng;
  // printf("<TYPEFLOAT,%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return TYPEFLOAT;
}

{TYPEELEM} {
  column += yyleng;
  // printf("<TYPEELEM,%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return TYPEELEM;
}

{TYPESET} {
  column += yyleng;
  // printf("<TYPESET,%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return TYPESET;
}

{IF} {
  column += yyleng;
  // printf("<IF>\n");
  yylval.tt_name = (char*) strdup(yytext);
  return IF;
}

{ELSE} {
  column += yyleng;
  // printf("<ELSE>\n");
  yylval.tt_name = (char*) strdup(yytext);
  return ELSE;
}

{FOR} {
  column += yyleng;
  // printf("<FOR>\n");
  yylval.tt_name = (char*) strdup(yytext);
  return FOR;
}

{RETURN} {
  column += yyleng;
  // printf("<RETURN>\n");
  yylval.tt_name = (char*) strdup(yytext);
  return RETURN;
}

{READ} {
  column += yyleng;
  // printf("<READ>\n");
  yylval.tt_name = (char*) strdup(yytext);
  return READ;
}

{WRITE} {
  column += yyleng;
  // printf("<WRITE>\n");
  yylval.tt_name = (char*) strdup(yytext);
  return WRITE;
}

{WRITELN} {
  column += yyleng;
  // printf("<WRITELN>\n");
  yylval.tt_name = (char*) strdup(yytext);
  return WRITELN;
}

{IN_OP} {
  column += yyleng;
  // printf("<IN_OP,%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return IN_OP;
}

{IS_SET_OP} {
  column += yyleng;
  // printf("<IS_SET_OP,%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return IS_SET_OP;
}

{ADD_OP} {
  column += yyleng;
  // printf("<ADD_OP,%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return ADD_OP;
}

{REMOVE_OP} {
  column += yyleng;
  // printf("<REMOVE_OP,%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return REMOVE_OP;
}

{EXISTS_OP} {
  column += yyleng;
  // printf("<EXISTS_OP,%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return EXISTS_OP;
}

{FORALL_OP} {
  column += yyleng;
  // printf("<FORALL_OP,%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return FORALL_OP;
}

{PLUS} {
  column += yyleng;
  // printf("<%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return PLUS;
}

{MINUS} {
  column += yyleng;
  // printf("<%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return MINUS;
}

{MULT} {
  column += yyleng;
  // printf("<%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return MULT;
}

{DIV} {
  column += yyleng;
  // printf("<%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return DIV;
}

{NOT} {
  column += yyleng;
  // printf("<%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return NOT;
}

{OR} {
  column += yyleng;
  // printf("<%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return OR;
}

{AND} {
  column += yyleng;
  // printf("<%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return AND;
}

{LT} {
  column += yyleng;
  // printf("<%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return LT;
}

{LTE} {
  column += yyleng;
  // printf("<%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return LTE;
}

{GT} {
  column += yyleng;
  // printf("<%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return GT;
}

{GTE} {
  column += yyleng;
  // printf("<%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return GTE;
}

{EQ} {
  column += yyleng;
  // printf("<%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return EQ;
}

{NEQ} {
  column += yyleng;
  // printf("<%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return NEQ;
}

{ASSIGN} {
  column += yyleng;
  // printf("<%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return ASSIGN;
}

{LPAREN} {
  column += yyleng;
  // printf("<%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return '(';
}

{RPAREN} {
  column += yyleng;
  // printf("<%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return ')';
}

{LBRACK} {
  column += yyleng;
  // printf("<%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  // printf("<%s>\n", yytext);
}

{RBRACK} {
  column += yyleng;
  // printf("<%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  // printf("<%s>\n", yytext);
}

{LBRACE} {
  column += yyleng;
  // printf("<%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return '{';
}

{RBRACE} {
  column += yyleng;
  // printf("<%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return '}';
}

{COMMA} {
  column += yyleng;
  // printf("<%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return ',';
}

{SEMICOLON} {
  column += yyleng;
  // printf("<%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return ';';
}

{EMPTY} {
  column += yyleng;
  // printf("<%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return EMPTY;
}

{INT} {
  column += yyleng;
  // printf("<INT,%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return INT;
}

{FLOAT} {
  column += yyleng;
  // printf("<FLOAT,%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return FLOAT;
}

{CHAR} {
  column += yyleng;
  // printf("<CHAR,%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return CHAR;
}

{STRING} {
  column += yyleng;
  // printf("<STRING,%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return STRING;
}

{ID} {
  column += yyleng;
  // printf("<ID,%s>\n", yytext);
  yylval.tt_name = (char*) strdup(yytext);
  return ID;
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

// int main(int argc, char *argv[]){
//    yyin = fopen(argv[1], "r");
//    yylex();
//    fclose(yyin);
//    yylex_destroy();

//    if(error_count > 0){
//      printf("\nThe lexical analisys finished with %d errors found.\n", error_count);
//    }

//    return 0;
// }