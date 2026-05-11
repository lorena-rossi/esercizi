#define DEBUG

#include <iostream>

using namespace std;

#include "tipo.h"
#include "nodo.h"

int main(){
    tree t = NULL;
    t= new_node("Luca");
    node* n = new_node("Paolo");
    insert_child(t,n);

   /* tipo_inf p;
    tree t1,t2,t3,t4,t5;
    int n; 
    cout<<"dimmi il nome del padre dell'albero"<<endl;
    cin>>p;
    t1=new_node(p);
    cout<<"dimmi il nome del figlio "<<endl;
    cin>>p;
    t2=new_node(p); 
    cout<<"dimmi il nome del fratello"<<endl;
    cin>>p;
    t3=new_node(p);
    insert_sibling(new_node(p),t2);
    cout<<"dimmi il nome del fratello"<<endl;
    cin>>p;
    t4=new_node(p);
    insert_sibling(t4,t3);
    cout<<"dimmi il nome di figlia"<<endl;
    cin>>p;
    t5=new_node(p);
    insert_child(t5,t3);
    insert_child(t2,t1);
    modo poco furba di fare le cose 
    */

#ifdef DEBUG
    cout<<"root:"<<get_info(t)<<endl;
    cout<<"root-primofiglio"<< get_info(get_firstchild(t))<<endl;
#endif
    n=new_node("Marco");
    insert_sibling(get_firstchild(t),n);

#ifdef DEBUG 
    cout<<"root-second child"<<get_info(get_nextsibiling(get_firstchild(t)))<<endl;
    cout<<"padre di marco e paolo è"<<get_info(get_parent(get_firstchild(t))) <<endl;
#endif
    n=new_node("Lucia");
    insert_child( t->firstchild->nextsibling, n ); 
    //potevo usare get... oppure no ?? 

    node* m = new_node("Anna");
    insert_sibling(t->firstchild->nextsibling, m);

#ifdef DEBUG
    cout<<"genitore di Lucia è"<< get_info( get_parent(n) )<<endl;

    cout<<"root-terzo figlio: "<< get_info(get_nextsibiling(get_nextsibiling(get_firstchild(t))))<<endl;

#endif

    return 0; 
}
