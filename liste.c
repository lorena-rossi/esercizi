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


int main(){

    //come fare per creare uan lista di più elementi ? funziona 
    struct elem* testa= malloc( sizeof(lista) );
    testa->info = 7;
    testa->pun = NULL;

    struct elem* p = malloc( sizeof(lista) );
    p->info = 3;
    p->pun = NULL;
    testa->pun = p;

    stampalista(testa);
    printf("fine\n");

    return 0;
}