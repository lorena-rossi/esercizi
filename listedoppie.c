#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct elem
{
    char info;
    struct elem* prev;
    struct elem* pun;
};
typedef struct elem* lista; 

char head (lista m){ return m->info;};

lista tail (lista m){ return m->pun; };

lista delete_elem(lista l, struct elem* e){
    if (l==e)
    {
        l=tail(l);
    }
    else
    {
        (e->prev)->pun = e->pun;
    }
    if (e->pun != NULL)
    {
        (e->pun)->prev = e->prev;
    }
    free (e);
    return l;  
};

lista insert_elem(lista l, struct elem* e){
    e->pun = l;
    if (l != NULL)
    {
        l->prev = e;
    }
    e->prev = NULL; //posso evitare di farla s eho già elento allocato ho già anche NULL???
    return e;       
};

int main(){
    //potrebbe essere utile fare una prova grafica per capire cosa fare  ei vari casi, basta lista di tre elementi
    return 1;
}