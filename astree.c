/**
 * @Author: Dušan Kolář
 * @Year:   2003-2018
 * Copyright (c) 2018
 * Licence: GLP 3.0
 */

#include "astree.h"
#include "stduse.h"
#include "y.tab.h"
#include "symtab.h"

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

extern int yylineno;

//ast_t *block_root = NULL;


ast_t *mkSlf(unsigned tag, char *str) {
    ast_t *res = xmalloc(sizeof(ast_t));
    lnum(res) = (unsigned)yylineno;
    tag(res) = tag;
    sv(res) = str;
    return res;
}

ast_t *mkDlf(unsigned tag, double dval) {
    ast_t *res = xmalloc(sizeof(ast_t));
    lnum(res) = (unsigned)yylineno;
    tag(res) = tag;
    dv(res) = dval;
    return res;
}

ast_t *mkNd(unsigned tag, ast_t *l, ast_t *r) {
    ast_t *res = xmalloc(sizeof(ast_t));
    lnum(res) = (unsigned)yylineno;
    tag(res) = tag;
    left(res) = l;
    right(res) = r;
    return res;
}


ast_t *appR(unsigned tag, ast_t *lst, ast_t *nd) {
    if (lst == NULL) {
        if (nd == NULL) {
            return NULL;
        }
        return mkNd(tag,nd,NULL);
    }
    if (nd == NULL) {
        return lst;
    }

    ast_t *tmp = lst;
    while (right(tmp) != NULL) {
        tmp = right(tmp);
    }
    right(tmp) = mkNd(tag,nd,NULL);

    return lst;
}

// ----------------------------------------------------------------------------

static double expr(ast_t *root) {
    switch (tag(root)) {
        case LESS:
            if (expr(left(root)) < expr(right(root))) {
                return 1.0;
            } else {
                return 0.0;
            }
        case LEQ:
            if (expr(left(root)) <= expr(right(root))) {
                return 1.0;
            } else {
                return 0.0;
            }
        case GREATER:
            if (expr(left(root)) > expr(right(root))) {
                return 1.0;
            } else {
                return 0.0;
            }
        case GEQ:
            if (expr(left(root)) >= expr(right(root))) {
                return 1.0;
            } else {
                return 0.0;
            }
        case AND:
            if (expr(left(root)) && expr(right(root))) {
                return 1.0;
            } else {
                return 0.0;
            }
        case OR:
            if (expr(left(root)) || expr(right(root))) {
                return 1.0;
            } else {
                return 0.0;
            }
        case EQ:
            if (expr(left(root)) == expr(right(root))) {
                return 1.0;
            } else {
                return 0.0;
            }
        case NEQ:
            if (expr(left(root)) != expr(right(root))) {
                return 1.0;
            } else {
                return 0.0;
            }
        case '+':
            return expr(left(root)) + expr(right(root));
        case '-':
            if (left(root) == NULL) {
                return - expr(right(root));
            } else {
                return expr(left(root)) - expr(right(root));
            }
        case '*':
            return expr(left(root)) * expr(right(root));
        case '/':
            return expr(left(root)) / expr(right(root));
        case '%':
            return fmod(expr(left(root)), expr(right(root)));
        case '^':
            return pow( expr(left(root)), expr(right(root)) );
        case NOT:
            if (expr( right(root) ) == 0.0) {
                return 1.0;
            } else {
                return 0.0;
            }
        case NUMBER:
            return dv(root);
        case IDENTIFIER:
            return read( sv(root) );
        case SIN:
            return sin( expr(left(root)) );
        case COS:
            return cos( expr(left(root)) );
        case TAN:
            return tan( expr(left(root)) );
        case ASIN:
            return asin( expr(left(root)) );
        case ACOS:
            return acos( expr(left(root)) );
        case ATAN:
            return atan( expr(left(root)) );
        case LOG:
            return log( expr(left(root)) );
        case LOG10:
            return log10( expr(left(root)) );
        case EXP:
            return exp( expr(left(root)) );
        default:
            prError((unsigned short)lnum(root),"Unknown tag in expr AST %u\n",tag(root),NULL);
            break;
    }
}

static void proc(ast_t *root) {
    switch (tag(root)) {
        case '=':
            //printf("Assignment\n");
            //printf("%lf\n", expr(right(root)));
            insertModify( sv(left(root)), expr(right(root)) );
            break;
        case WRITE:
            //printf("WRITE\n");
            if (left(root) == NULL) {
                printf("%g", expr(right(root)) );
            } else if (right(root) == NULL) {
                //puts( sv(left(root)) );
                printf("%s", sv(left(root)));
            } else {
                printf("%s%g", sv(left(root)), expr(right(root)) );
            }
            break;
        case READ:
            //printf("READ\n");
            if (left(root) == NULL) {
                double rval;
                scanf("%lf",&rval);
                insertModify(sv(right(root)), rval);
            } else {
                double rval;
                printf("%s", sv(left(root)));
                scanf("%lf", &rval);
                insertModify( sv(right(root)), rval);
            }
            break;
        case IF:
            //printf("IF\n");
            //Evaluamos la expresión asociada a la sentencia. Si el resultado es un número
            //Positivo, ejecutamos el bloque de código asociado a la sentencia recorriendo 
            //el subárbol con las sentencias del bloque

            //Sentencia vacía, ya que C sólo permite poner una sentencia después de una 
            //etiqueta, (en este caso IF:), pero las declaraciones no cuentan como sentencias,
            //por tanto no se puede poner la declaración de block_root como la primera sentencia
            //del caso
            ;
            ast_t *block_root = left(right(root));
            //printf("Root tag: %d\n", tag(block_root));
            if ( expr(left(root)) > 0 ){
                while (block_root != NULL) {
                    proc(left(block_root));
                    block_root = right(block_root);
                    //printf("Node tag: %d\n", tag(block_root));
                }
            }else if(right(right(root)) != NULL){
                ast_t *block_root = right(right(root));
                while (block_root != NULL) {
                    proc(left(block_root));
                    block_root = right(block_root);
                    //printf("Node tag: %d\n", tag(block_root));
                }
            }
            break;

        case WHILE:

            while ( expr(left(root)) > 0 ){
                block_root = right(root);
                while (block_root != NULL) {
                    proc(left(block_root));
                    block_root = right(block_root);
                }
            }
            break;

        default:
            prError((unsigned short)lnum(root),"Unknown tag in statement AST %u\n",tag(root),NULL);
            break;
    }
}

void evaluate(ast_t *root) {
    printf("Executing program:\n");
    while (root != NULL) {
        proc(left(root));
        root = right(root);
    }
}


// ----- EOF ------
