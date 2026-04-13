#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct elem
{
    int info;
    struct elem* perc;
    struct elem* next;
};
typedef struct elem* lista; 

int head (lista m){ return m->info;};

lista tail (lista m){ return m->next; };

int main(){
    return 1;
}