#include "grafi.h"
#include "coda-bfs.h"

#include <fstream> 
#include <iostream>

using namespace std;

graph g_build( ifstream &g, bool d, bool w){
    // legge da g nuemero di nodi(prima riga) archi da aggiungere sono righe successive 
    // se w è true allora ha i pesi, se d è true allora è orientato
    int d=0,p,a;
    g >> d;
    graph G = new_graph(d);
    if (w)
    {
        float w=0;
        if (d)
        {
            while (g >> p >> a >> w)
            {
               add_arc(G, p, a, w); 
            }
        }else
        {
             while (g >> p >> a >> w)
            {
               add_edge(G, p, a, w); 
            }
        }  
    }
    else
    {
        if (d)
        {
            while (g >> p >> a)
            {
               add_arc(G, p, a, 1.0); 
            }
        }else
        {
             while (g >> p >> a)
            {
               add_edge(G, p, a, 1.0); 
            }
        } 
    }
    
    
};

bool visitagraph(graph g, adj_list v){
    // non ho capito cosa fare 
};

bool connected(graph g){
    //connesso se raggiunto vero per ogni vertice 
    
};


int main(int argc, char* argv[]){

    /* serve per stampare argomenti
    argc è totale degli alrogmenti, ovvero la dimensione che avrà argv
    argv comtine ein nome degli argomenti passati     
    for (int i = 0; i < argc; i++)
    {
        cout<< argv[i]<<endl;
    }*/

    //prima non devo chiedere di inserie i nomi poi se non sonosufficienti fare un controlllo
    if (argc < 3)
    {
        cout<<"mi servono altri nomi da passare al programma : "<< argv[1]<<endl;
        exit(0); //a cosa serve ?? 
    }
    


    return 0;
}