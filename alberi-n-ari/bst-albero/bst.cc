
#include <iostream>

using namespace std;

#include "tipo.h"
#include "bst.h"

bnode* bst_new_node(tipo_key k, tipo_inf i){
    bnode* b= new(bnode);
    b->inf= i;
    b->key=k;
    b->left=b->parent=b->right=NULL;
    return b;
};

tipo_key get_key(bnode* n){
    return n->key; 
};

tipo_inf get_value(bnode* n){
    return n->inf;
};

bnode* get_right(bnode* n){
    return n->right;
};

bnode* get_left(bnode* n ){
    return n->left;
};

bnode* get_parent(bnode* n){
    return n->parent;
};

bnode* bst_insert(bst& a, bnode* n){
    //da rifare così non funziona 
    while (a != NULL)
    {
        if (get_key(a)< get_key(n))//devi usare compare_key 
        {
            bst_insert(a,get_left(n));
            //get_left(a)= n; 
        }
        else
            bst_insert(a,get_right(n));
            //get_right(n)= a;
        //questa cosa non funziona perché non vede quando la foglia è vuota
    }
    
};

void print_key(bnode* n){
    cout<<"chiave : %d"<< n->key <<endl;
};