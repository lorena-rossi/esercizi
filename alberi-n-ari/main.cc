
#include <iostream>

using namespace std;

#include "tipo.h"
#include "nodo.h"

int main(){

    tipo_inf p;
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


    return 0; 
}
