#include <iostream> 

using namespace std;

#include "nodo.h"
#include "tipo.h"


tipo_inf get_info(node* n ){
    return n->inf;
};

node* get_firstchild(node* n ){ 
    return n->firstchild;
};

node* get_nextsibiling(node * n){
    return n->nextsibling;
};

node* get_parent(node* n){
    return n->parent;
};

node* new_node( tipo_inf i){
    node* n = new node;
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
void insert_sibling( node* n, tree t){
    t->nextsibling = n->nextsibling;
    t->parent = n->parent;
    n->nextsibling= t;
}