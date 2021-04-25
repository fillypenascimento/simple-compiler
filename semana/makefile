compiler: lexana sinana cmodules

lexana:
	flex analex.l

sinana:
	bison -d anasin.y

cmodules:
	gcc -g -Wall lex.yy.c 	\
	anasin.tab.c						\
	symbol_table.c					\
	ast.c 									\
	-lm -o parser

valgrind:
	valgrind -v --tool=memcheck --leak-check=full \
	--show-leak-kinds=all --track-origins=yes --log-file="logfile.out" \
	./parser examples/prof1.c