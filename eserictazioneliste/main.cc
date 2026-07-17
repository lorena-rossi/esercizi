#include "tipo.h"
#include "liste.h"

#include<iostream>
using namespace std;

void stampaB(lista t){
    lista t1=t;
    lista t2= NULL;
    while ( t1 != NULL )
    {
        print(t1->inf);
        if (t1->pun == NULL)
        {
            t2= t1;
        }
        t1= t1->pun;
    }
    while ( t2 != NULL )
    {
        print(t2->inf);
        t2= t2->prev;
    }
    
}



int main(){

    lista testa=NULL;
    tipo_inf l;

    FILE *fp = fopen( "prodotti.txt" , "r");
    if ( fp == NULL )
    {
        cout<<"errore apertura file"<<endl;
    }

    while ( fscanf(fp, "%s" "%s" "%f" "%d", l.codice, l.nome, &(l.prezzo), &(l.quant) ) != EOF )
    {
        testa = insert_elem( testa, new_elem(l));
    }

    fclose(fp);

    stampaB(testa);
    
    return 1;
} 
