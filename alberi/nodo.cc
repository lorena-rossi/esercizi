
#include <iostream>

using namespace std;

#include "nodo.h"

nodo* new_node( tipo_inf i){
    nodo* n = new nodo;
    n->inf = i;
    n-> firstchild = n->nextsibling=NULL;
    return n;
}

//inserendo albero radicato in c in filgio p 
void insert_child( tree p, tree c){
    c->nextsibling = p->firstchild;
    c->parent = p; 
    p->firstchild = c;
}

//il nodo diventa il fratello nell'albero t 
void inser_sibling( node* n, tree t){
    t->nextsibling = n;
    n->parent = t;
    n->nextsibling= t->nextsibling;
}