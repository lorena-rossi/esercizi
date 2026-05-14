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