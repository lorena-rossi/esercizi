#include <iostream> 

using namespace std;

#include "nodo.h"
#include "tipo.h"

typedef struct node{
    tipo_inf inf;
    node* parent;
    node* firstchild;
    node* nextsibling;
} tree;

tree root; //variabile di tipo tree 

int main{
    return 0;
}