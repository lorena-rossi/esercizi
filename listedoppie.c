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

lista prec (lista m){ return m->prev; };

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
    e->prev = NULL; //serve perché non sono sicura di come arrivi eleemnto alla funzione 
    return e;       
};

lista crealista(lista l, int n){
    for (int i = 0; i < n; i++)
    {
        struct elem* p = malloc(sizeof(lista));
        p->prev=p->pun=NULL;
        printf("inserisci %d URL da inserire\n", i);
        scanf("%s", &p->info);
        l=insert_elem(l,p);
    }
    
};

void stampalista(lista l){
    while (l != NULL)
    {
        printf("%s", &l->info);
        tail(l);
    }
       
};

struct elem* search(lista l, char s){
    lista l1=l;
    while ( l1 != NULL)
    {
        if ( strcmp(head(l1),s) == 0 ) //forse per confronto stringe serve funzione apposita,che ritorna 0 se sono uguali  
        {
            return l1;
        }
        else
        {
            l1=tail(l1);
        } 
    }
    return NULL;
};

int main(){
    //potrebbe essere utile fare una prova grafica per capire cosa fare i vari casi, basta lista di tre elementi
    int scelta = 1;
    int n = 0;
    do
    {
        printf("\n MENU: \n");
        printf("1 per creare lista con n URL\n");
        printf("2 per cancellare un URL \n");
        printf("3 per stampare lista\n");
        printf(" 4 per cercare un URL nella lista, per poi muoversi nella lista \n");
        printf("premere 5 per uscire\n");
        scanf("%d", &scelta);

        switch (scelta)
        {
            case 1:
                //int n;
                scanf("%d",&n );
                lista l = malloc(sizeof(lista));
                l->prev=l->pun=NULL;
                l = crealista(l,n);
                break;
            case 2:
                printf("dimmi URL da cancellare");
                char ind[50];
                scanf("%s", ind); 
                l=delete_elem(l,search(l,ind)); //nella soluzione ha fatto la ricerca dentro la funzione, creandone una nuova  
                break;
            case 3: 
                //stampa lista
                stampalista(l);
                break;
            case 4 :
                //cerca elemento
                break;
            case 5: 
                //uscita
                printf("stai uscendo");
                break;
            default:
                break;
        }
    } while (scelta =! 5);

    return 1;
}