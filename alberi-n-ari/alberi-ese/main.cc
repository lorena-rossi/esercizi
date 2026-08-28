#include "nodo.h"
#include "tipo.h"
#include "coda-bfs.h"


#include <iostdio>
#include <iostream>
using namespace std;

bnode* search( tree& t, int n ){
    tree t1 = t;
    if(t1.id = n ){
        return t1;
    }
    t1 = get_firstchild(t1);
    while(t1 != NULL ){
        search(t1);
        t1 = get_nextsibiling(t1);
    }   
}
   
void serializza(tree t){
    cout<<"(";
    print(get_inf(t));
    tree t1= get_firstchild(t);
    while (t1 != NULL)
    {
        serializza(t1);
        t1=get_nextsibiling(t1);
    }
    cout<<")";
};



int main(){
    int k1,k2;
    tipo_inf n;
    tree t,b;
    bnode* p = NULL;
    FILE *fp = fopen( "organizzazione.txt", "r");
    if (fp == NULL)
	{
		cout <<"errore in apertura del file"<<endl;
		return -1;
	}

    fscanf(fp, "%d" "%d" "%s" "%s" "%f", &k1, &k2 , n.nome, n.ruolo, &(n.sti) );
    t =  new_node(n , k1);
	
	while ( fscanf(fp, "%d" "%d" "%s" "%s" "%f", &k, , n.nome, n.ruolo, n.sti ) != EOF)
	{
		b = new_node(n , k1);
        p = search(t, k2);
        if( get_firstchild(p) == NULL ){
            insert_child(t,b);
        }
        insert_sibling(t,b);
	}

	fclose(fp);


    return 1;    
}