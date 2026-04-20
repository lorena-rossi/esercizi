
#include <iostream>
#include <cstring>

using namespace std ;

#include "tipo.h"

int compare(tipo_inf* s1,tipo_inf* s2){
	return strcmp(s1,s2);
}

tipo_inf* head(lista p){return p->inf;}
lista tail(lista p){return p->pun;}

elem* search(lista l, tipo_inf* v){
	while(l!=NULL)
		if(strcmp(head(l),v)==0)
			return l;
		else
			l=tail(l);
	return NULL;}
	
elem* new_elem(tipo_inf* inf){
	    elem* p = new elem ;
	    strcpy(p->inf,inf);
	    p->pun=p->prev=NULL;
		return p;
	
	}

