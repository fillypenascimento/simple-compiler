To compile the Flex solution run:

flex analex.l

This is going to generate the C program with the Lexycal Analyzer in the file lex.yy.c,
then compile this using:

gcc lex.yy.c -o analex -lfl

To run the Lexer you must feed to the program an input .txt file with the code written in the specified language.

./analex ex1R.txt

The available examples were obtained from the Language Description available at Aprender3.
Changes to these examples were made to explore the errors thrown by the Lexer,so:
- files whose names end in "...R.txt" contain correct (they are right according to the Lexer rules) programs written in the language;
- files whose names end in "...W.txt" contain incorrect (they are wrong according to the Lexer rules) programs written in the language.


