
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

bnode* bst_insert(bst& b, bnode* n){
    if (b==NULL)
    {
        b=n; 
        return;
    }
    if ( compare_key( get_key(b), get_key(n) ) < 0 )
    {
        if (get_left(b) != NULL)
        {
            bst_insert( b->left, n );
        }
        else
        {
            b->left=n; 
            n->parent=b;
        }   
    }
    if (compare_key( get_key(b), get_key(n) ) > 0 )
    {   
        if (get_right(b) != NULL)
        {
            bst_insert( b->right, n );
        }
        else
        {
            b->right=n; 
            n->parent=b;
        } 
    }
    
    
};

void print_key(bnode* n){
    cout<<"chiave : %d"<< n->key <<endl;
};