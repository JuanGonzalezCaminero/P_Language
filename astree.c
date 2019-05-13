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

extern int yylineno;


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
        case '<':
            if (expr(left(root)) < expr(right(root))) {
                return 1.0;
            } else {
                return 0.0;
            }
        case '>':
            if (expr(left(root)) > expr(right(root))) {
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
        case '^':
            return pow( expr(left(root)), expr(right(root)) );
        case '!':
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
        default:
            prError((unsigned short)lnum(root),"Unknown tag in expr AST %u\n",tag(root),NULL);
            break;
    }
}

static void proc(ast_t *root) {
    switch (tag(root)) {
        case '=':
            //printf("%lf\n", expr(right(root)));
            insertModify( sv(left(root)), expr(right(root)) );
            break;
        case WRITE:
            if (left(root) == NULL) {
                printf("%g\n", expr(right(root)) );
            } else if (right(root) == NULL) {
                puts( sv(left(root)) );
            } else {
                printf("%s%g\n", sv(left(root)), expr(right(root)) );
            }
            break;
        case READ:
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
