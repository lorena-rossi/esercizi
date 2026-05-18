
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
    //posso fare anche con while
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

bnode* bst_search(bst bt, tipo_key k){

    //potevo farla anche con il while, e magari togliendo qualche if
    if (get_key(bt) == k)
    {
        return bt;
    }
    if ( compare_key( get_key(bt), k) < 0 )
    {
        if ( get_right(bt) != NULL )
        {
            bst_search( get_left(bt), k);
        } 
        else
        {
            return bt;
        }
    }
    if (compare_key( get_key(bt),k ) > 0)
    {
        if (get_right(bt) != NULL)
        {
            bst_search(get_right(bt),k);
        }
        else
        {
           return bt;
        }
    }
    return NULL;    
};

void bst_delete(bst& t, bnode* c){
    //bisogna inserire il caso in cui c non sia contenuto in t, ma mi serve la funzione search
    //caso folgia 
    if (c == NULL)
    {
        (c->parent)->left = NULL;
        //devo capire come mettere null sul nodo precendete a c
        //come so quale in quale figlio mho tolto la folgia ?? se a sinistra o destra ? 
        delete c;
    }
    //caso un figlio
    if (get_left(c)!= NULL || get_right(c)!=NULL)
    {
        if (get_left(c)==NULL)
        {
            c->parent=get_right(c);
        }
        c->parent=get_left(c);
        delete c;
    }
    //caso con 2 figli

    //ricerco il maggiore dei sui predecessori 
    while (c != NULL)
    {
        c=get_left(c);
    }
    t=c;
    delete c;
};

void print_key(bnode* n){
    cout<<"chiave : %d"<< n->key <<endl;
};