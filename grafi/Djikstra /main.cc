#include "grafo.h"
#include "codap.h"

#include <float.h>
#include <fstream>
#include <iostream>

using namespace std;

void add(graph& g, int u, int v, float w, bool d) {
        if (d)
                add_arc(g,u,v,w);
        else
                add_edge(g,u,v,w);
}

graph g_build(ifstream &g, bool d, bool w) {
  int n;
  g >> n;
  graph G = new_graph(n);
  int v1,v2;
  if (w) {
    float w;
    while (g >> v1 >> v2 >> w) {
      add(G,v1,v2,w,d);
     }
  } else {
    while (g >> v1 >> v2) {
      add(G,v1,v2,1.0,d);
    }
  }
  return G;
}

void metodoDjikstra(graph g, float w, adj_list s){
    inizialize(g,s);
    
};

void inizialize(graph g, adj_list s){
    //array dinamici per parent e per dest 
};

int main(int argc,char *argv[]) {
   /* Se il numero di parametri con cui e' stato chiamato il client e'
     inferiore a tre - si ricordi che il primo parametro c'e' sempre, ed e' il
     nome del file eseguibile - si ricorda all'utente che deve inserire
     anche il nome del file che descrive il grafo e il flag  weighted*/

  if (argc<3) {
    cout << "Usage: " << argv[0] << " filename directed weighted\n";
    exit(0);
  };


  ifstream g;
  g.open(argv[1]);
      cout <<   argv[1] << " " << argv[2] << " " << argv[2]<<endl;
  int directed = atoi(argv[2]);
  int weighted = atoi(argv[3]);

  /*Chiamata a g_build che costruisce un grafo*/

 graph G=g_build(g, directed, weighted);

cout<<get_dim(G)<<endl;

  //Stampa dell'array di liste
  adj_list tmp;
    for (int i=1; i<=get_dim(G); i++) {
       tmp=get_adjlist(G,i);
       cout << i;
       while (tmp) {
          cout << " --> " << get_adjnode(tmp);
          tmp=get_nextadj(tmp);
       }
       cout << endl;
  }

    //algoritmo Djistra 

}



