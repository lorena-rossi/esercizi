#include <iostream> 

using namespace std;

#include "nodo.h"
#include "tipo.h"

int get_id(node* n){
    return n.id;
};
 
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

node* new_node(tipo_inf r, int s){
    node* n = new node;
    n->id = s;
    n->inf = r;
    n-> firstchild = n->nextsibling=n->parent=NULL;
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