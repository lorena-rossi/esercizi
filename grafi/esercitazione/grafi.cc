#include "grafi.h"
#include "codabfs.h"
#include "tipo.h"

#include "iostream"

using namespace std;


int get_dim(graph g){
    return g.dim;
    //percvhé non posso usare ->, perché g non è un puntatore
};

adj_list get_adjlist(graph g, int i){
    return g.nodes[i-1];
};

sensore get_dato (graph g ,int i){
    return g.dato[i-1];
};

int get_adjnode(adj_node* n){
    return n->node;
};

adj_list get_nextadj( adj_list l){
    return l->next;
};

float get_weight(adj_list n){
    return n->weight;
};

graph new_graph( int i){
    graph g;
    g.dim= i;
    g.dato = new sensore[i];
    g.nodes = new adj_list[i];
    for (int j = 0; j < i; j++)
    {
        g.nodes[j]=NULL;
    }
    return g;
};

void add_arc(graph& g , int s, int d, float w){
    //aggiunge un arco come se il grafo fosse orientato
    adj_node* n1 = new adj_node;
    n1->node = d-1;
    n1->next = g.nodes[s-1]; 
    g.nodes[s-1] = n1;
};

void add_edge(graph& g, int s, int d, float w){
    add_arc(g,s,d,w);
    add_arc(g,d,s,w);
};


