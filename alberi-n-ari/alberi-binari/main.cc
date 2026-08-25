
#include <cstring>

#include <iostream>
using namespace std;

#include "tipo.h"
#include "bst.h"

int main(){

    bst tree = NULL;
    tipo_inf a;
    tipo_key k;

    FILE *fp = fopen( "dati.txt" , "r");
    if ( fp == NULL )
    {
        cout<<"errore apertura file"<<endl;
    }

    while ( fscanf(fp, "%d" "%s" "%f", &k, a.nome, &( a.valore ) ) != EOF )
    {
        bst_insert(tree, bst_newNode(k,a) );
    }

    fclose(fp);

    print_BST(tree);

    return 1;
}