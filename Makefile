all:
	lex pcc.l
	yacc -d pcc.y
	gcc lex.yy.c y.tab.c symtab.c stduse.c astree.c -lm -o interprete

lex:
	lex pcc.l
	gcc -lfl lex.yy.c

clean:
	rm interprete
	rm lex.yy.c
	rm y.tab.c
	rm y.tab.h