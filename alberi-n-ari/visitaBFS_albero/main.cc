#define DEBUG

#include <iostream>

using namespace std;

#include "tipo.h"
#include "nodo.h"
#include "coda-bfs.h"

void serializza(tree t){
    cout<<"(";
    print(get_info(t));
    tree t1= get_firstchild(t);
    while (t1 != NULL)
    {
        serializza(t1);
        t1=get_nextsibiling(t1);
    }
    cout<<")";
};

int altezza(tree t){
    int max=0,max_loc;
    if (get_firstchild(t) == NULL)
    {
        return 0;
    }
    
    tree t1 = get_firstchild(t);
    while (t1 != NULL)
    {
        max_loc=altezza(t1);
        if ( max_loc > max )
        {
            max=max_loc;
        }
        t1=get_nextsibiling(t1);    
    }
    return max + 1;
};

int dimensione (tree t){
    int i =0;
    codaBFS c= newQueue();
    c = enqueue(c,t);
    while (! isEmpty(c))
    {
        node* n = dequeue(c); // perché nuovo nodo ? 
        i+=1;
        tree t1 = get_firstchild(t);
        while (t1 != NULL)
        {
            c=enqueue(c,t1);
            t1=get_nextsibiling(t1);
        }
    }
    return i;
};

int main(){
    tree t = NULL;
    t= new_node("Luca");
    node* n = new_node("Paolo");
    insert_child(t,n);
    n =new_node("Marco");
    insert_sibling(get_firstchild(t), n );
    n=new_node("Lucia");
    insert_child( get_firstchild(get_nextsibiling(t)),n);
    node* m =new_node("Anna"); //perché mi serve un nuovo nodo ? non posso fare come ho fatto per gli lòtri nodi ? 
    insert_child(get_parent(n),m);

#ifdef DEBUG
    serializza(t);
#endif

    cout<<"altezza dell'albero"<< altezza(t)<<endl;

    return 0; 
}