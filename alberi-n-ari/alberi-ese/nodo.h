#ifndef NODO_H
#define NODO_H

#include "tipo.h"

struct node{
    tipo_inf inf;
    int id;
    node* parent;
    node* firstchild;
    node* nextsibling;
} ;

typedef node* tree;

int get_id(node* );
tipo_inf get_info(node* );
node* get_firstchild(node* );
node* get_nextsibiling(node *);
node* get_parent(node*);

node* new_node(tipo_inf, int);

void insert_child( tree , tree );

void insert_sibling( node* , tree );

#endif