#include "tipo.h"
#include "grafi.h"
#include "codabfs.h"



#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int carica(const char* filename, graph& g){
    int n=0, s=0, d=0;
    float f=0;
    FILE *fp = fopen(filename , "r");
    if (fp == NULL)
    {
        cout<<"errore apertura file"<<endl;
        return 0;
    }
    
    fscanf(fp, "%d", &n);
    g = new_graph(n);
    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%s" "%s" "%f", g.dato[i].id, g.dato[i].tipo, &(g.dato[i].soglia));
    }
    fscanf(fp, "%d", &n);
    for (int i = 0; i < n; i++)
    {
        fscanf(fp,"%d" "%d""%f", &d,&s,&f);
        add_edge(g,d+1,s+1,f);
    }

    fclose(fp);
    return 1;
};

void stampa( graph& g){
    cout<<"struttura grafo\n";
    for (int i = 0; i < g.dim; i++)
    {
        cout<<"nodo "<< i;
        stampas(g.dato[i]);
        cout<<"avente come nodi adiacenti ";
        adj_node* corrente = g.nodes[i];
        while ( corrente != NULL )
        {
            cout<<" "<<corrente->node;
            corrente = corrente->next;
        }
        cout<<"\n";
        
    }
    cout<<"\n fine del grafo "<<endl;
};

void libera( graph& g){
    for (int i = 0; i < g.dim; i++) {
        adj_node* corrente = g.nodes[i];
        while (corrente != NULL) {
            adj_node* tmp = corrente;
            corrente = corrente->next;
            delete tmp;
        }
    }
    delete[] g.nodes;
    delete[] g.dato;
}

visitaBFSricosiva( graph G, nodo v){ 
	Creo raggiunto come boolenao di grandezza G.dim (non so come fare non abbiamo fatto i booleani in classe) inizializzato a False;
	raggiunto[v]= true;
	enqueue( C , v );
	While ( C != NULL ){
		v = dequeue(C);
		stampo v;
		while( Adj[v].pun != NULL ){
			if( ! raggiunto[ Adj[v].valore ] ){
				enqueue( C, Adj[v].valore);
				raggiunto[ Adj[v].valore ] = true;
			}
			Adj[v] = Adj[v].pun;
		}
	}
}


int main(){
    graph g ;
    sensore s;
    if ( carica("sensori.txt", g) == 1 )
    {
        cout<<"grafo caricato correttamente"<<endl;
    }
    
    stampa( g );

    libera (g);

    
    return 1;
}