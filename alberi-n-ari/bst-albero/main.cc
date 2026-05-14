#include <iostream>
using namespace std;

#include "tipo.h"
#include "bst.h"

void print_BST(bnode* n){
    if (get_left(n) != NULL)
    {
        print_BST( get_left(n) );
    }
    print_key(n);
    cout<<" ";
    if (get_right(n) != NULL)
    {
        print_BST( get_right(n) );
    }
        
};

bnode* bst_delete(bst& t, bnode* c){
    //bisogna inserire il caso in cui c non sia contenuto in t, ma mi serve la funzione search
    //caso folgia 
    if (c == NULL)
    {
        (c->parent)->left = NULL;
        //devo capire come mettere null sul nodo precendete a c
        //come so quale in quale figlio mho tolto la folgia ?? se a sinistra o destra ? 
        delete c;
        return t;
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
        return t;
    }
    //caso con 2 figli

    //ricerco il maggiore dei sui predecessori 
    while (c != NULL)
    {
        c=get_left(c);
    }
    t=c;
    delete c; 
    return t;
};

int main(){
    
    int i=0;
    tipo_inf n;
    tipo_key k;
    bst t = new (bnode);
    //get_right(t)=get_left(t)=get_parent(t)=NULL;
    cout<<"quanti valori vupi inserire ? ";
    cin>> i;
    for (int j = 0; j < i; j++)
    {
        cout<<"dimmi l'informazione da aggiungere : ";
        cin>> n;
        cout<<"dimmi la chiave da aggoingere : ";
        cin>> k;
        t = bst_new_node(k,n);
    }
    
    print_BST(t);
}