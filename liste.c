#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct elem
{
    int info;
    struct elem* pun;
};
typedef struct elem* lista; 

int head (lista m){ return m->info;};

lista tail (lista m){ return m->pun; };

void stampalista( lista m ){
    while ( m != NULL )
    {
        printf(" %d \n" , m->info);
        m = tail(m);
    }
    
};

lista insert_elem (lista l, struct elem* e){
    e->pun = l;
    return e;
};

lista crealista(int n ){
    lista t = malloc( sizeof(lista) );
    t->pun = NULL;
    for (int i = 0; i < n; i++)
    {
        struct elem* p = malloc(sizeof(struct elem*));
        p->info = scanf("%d", p->info); //non legge, mi dice che manca il puntatore dopo la virgola 
        p->pun = NULL;
        t = insert_elem(t,p);
    }
    return t;
};

lista delete_elem(){};    
void eliminalista(){};
struct elem* serarc(){};
int conta(){};
lista cancella(lista l , int v){ }; //trovo elemento e poi lo cancello, sarebbe da ottimizzare per casa 
lista copy(){};
//sulle slide ci sono altri esercizi che si possono fare per casa 

int main(){

    //come fare per creare uan lista di più elementi ? funziona 
    struct elem* testa= malloc( sizeof(lista) );
    testa->info = 7;
    testa->pun = NULL;

    struct elem* p = malloc( sizeof(lista) );
    p->info = 3;
    p->pun = NULL;
    testa->pun = p; 

    //posso fare la stessa cosa con una primitiva insert_elem 

    stampalista(testa);
    printf("fine\n");

    return 0;
}