all:
	lex pcc.l
	yacc -d pcc.y
	gcc lex.yy.c y.tab.c symtab.c stduse.c astree.c -lm
	#-ly -lfl 

lex:
	lex pcc.l
	gcc -lfl lex.yy.c

clean:
	rm a.out
	rm lex.yy.c
	rm y.tab.c
	rm y.tab.h