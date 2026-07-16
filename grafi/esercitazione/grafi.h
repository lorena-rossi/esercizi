#ifndef GRAFI_H
#define GRAFI_H

struct adj_node
{
    int node;
    float weight;
    adj_node* next;
};

typedef adj_node* adj_list;


typedef struct {
    adj_list* nodes;
    int dim;
}graph;


int get_dim(graph);
adj_list get_adjlist(graph, int);

int get_adjnode(adj_node*);
adj_list get_nextadj( adj_list);
float get_weight(adj_list);


graph new_graph( int );
void add_arc(graph& , int, int, float); //grafo orientato 
void add_edge(graph& , int, int, float); // grafo non orientato 

#endif