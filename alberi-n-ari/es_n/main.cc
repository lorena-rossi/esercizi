
#define DEBUG

#include <iostream>
using namespace std;

#include "tipo.h"
#include "bst.h"

void print_BST(bst b){
	if(get_left(b)!=NULL)
		print_BST(get_left(b));
	print_key(get_key(b));
	cout<<"  ";
	print(get_value(b));
	cout<<endl;
	if(get_right(b)!=NULL)
	print_BST(get_right(b));

}

void ricerca( bst b){
	bst t=NULL;
	bool risp;
	int k=0;
		do {
			cout << "Inserisci valore di chiave da cercare: " << endl;
		       cin >> k;
		       if((b=bst_search(t,k))!=NULL){
		    	   cout<<"Nodo trovato: ";
		    	   print_key(get_key(b));
		    	   	cout<<"  ";
		    	   	print(get_value(b));
		    	   	cout<<endl;
		       }
		       else
		    	   cout<<"Nodo non trovato!!";
		       cout<<"Per terminare digitare 0 altrimenti 1: ";
		      	       cin>>risp;
		    }
		while(risp);

}

void can_elem(bst b){
	int k=0;
	bst t=NULL;
	bnode* b;

	cout << "Inserisci valore di chiave da cancellare: " << endl;
	       cin >> k;
	       if((b=bst_search(t,k))!=NULL){
	    	   bst_delete(t,b);
	    	   cout<<"Nodo cancellato!"<<endl;}
	       else
	    	   cout<<"Valore di chiave non trovato!!"<<endl;
}


int main(){

}
