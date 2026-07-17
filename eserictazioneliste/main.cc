#include "tipo.h"
#include "liste.h"

#include <string.h>
#include <iostream>
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

elem* crecaProdotto( lista t, char* s){
    while ( t != NULL)
    {
        if ( strcmp(t->inf.codice, s) == 0)
        {
            return t;
        }
        t=tail(t);
        
    }
    return NULL;
}

void dealloca( lista& t){
    while ( t != NULL )
    {
        t= delete_elem(t,t);
    }
    t=NULL;
}

int main(){

    lista testa=NULL;
    elem* e = NULL;
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
    char s[] = "PR003";
    e=crecaProdotto(testa,s);
    if (e != NULL)
    {
        print(e->inf);
    }
    else
    {
        cout<<"prodotto non trovato"<<endl;
    }
    
    
    

    dealloca(testa);
    return 1;
} 
