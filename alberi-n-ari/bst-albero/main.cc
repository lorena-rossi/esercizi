#include <iostream>
using namespace std;

#include "tipo.h"
#include "bst.h"

void print_BST(bnode* n){
    if (get_left(n) != NULL)
    {
        print_BST( get_left(n) );
    }
    print_key(n);
    cout<<" ";
    if (get_right(n) != NULL)
    {
        print_BST( get_right(n) );
    }
        
};


int main(){
    
    int i=0;
    int scelta=0;
    tipo_inf n;
    tipo_key k;
    bst t = new (bnode);
    bnode* b= new (bnode);
    //get_right(t)=get_left(t)=get_parent(t)=NULL;
    /*cout<<"quanti valori vupi inserire ? ";
    cin>> i;
    for (int j = 0; j < i; j++)
    {
        cout<<"dimmi l'informazione da aggiungere : ";
        cin>> n;
        cout<<"dimmi la chiave da aggoingere : ";
        cin>> k;
        t = bst_new_node(k,n);
    }*/
    do
    {
        cout<<" \n MENU: \n "<<endl;
        cout<< " Digitare 1 per uscire \n";
        cout<< " Digitare 2 per creare radice albero binario ricerca \n";
        cout<< " Digitare 3 per aggiungere un nodo\n";
        cout<< " Digitare 4 per cercare valore \n";
        cout<< " Digitare 5 per eliminare un nodo dall'albero \n";
        cout<< " Digitare 6 per stampare un albero in ordine crescente\n"<<endl;
    
        cin>>scelta;

        switch (scelta)
        {
        case 1:
            cout<< " Ciao Ciao !!\n "<< endl;
            break;
        
        case 2:
            cout<<" Digita l'informazione che vuoi inserire per prima\n";
            cin>>n;
            cout<<"Digita la chiave corrispondente a quella informazione\n";
            cin>>k;
            t = bst_new_node(k,n);
            break;

        case 3:
            cout<<" Dimmi il valore che vuoi che abbia il nuovo nodo\n";
            cin>>n;
            cout<<" Dimmmi la chiave che vuoi che abbia il nuovo nodo\n";
            cin>>k;
            t=bst_insert(t,bst_new_node(k,n));
            break;
        
        case 4:
            cout<< " Dimmi che chiave vuoi cercare\n";
            cin>>k;
            b = bst_search(t,k);
            cout<< " A quella chiave corrisponde il seguente valore "<<get_value(b)<<endl;
            break;

        case 5:
            cout<< "Dimmi la chiave del nodo che vuoi cancellare\n";
            cin>>k;
            b = bst_new_node(k, get_value(bst_search(t,k)));
            bst_delete(t,b);
            break;
        
        case 6:
            print_BST(t);
            break;
        
        default:
            cout<<"Scelta non valida,riprova \n"<<endl;
            break;
        }

    } while (scelta != 1);
    
}