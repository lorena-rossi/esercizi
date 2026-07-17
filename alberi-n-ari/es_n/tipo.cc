

#include <iostream>
#include <cstring>

using namespace std ;

#include "tipo.h"


int compare(tipo_inf s1,tipo_inf s2){
	if (strcmp(s1.modello,s2.modello) == 0 && s1.carico == s2.carico )
	{
		return 0;
	}
	return -1;
	
}

void copy(tipo_inf& dest, tipo_inf source){
	stpcpy(dest.modello, source.modello);
	dest.carico=source.carico;
}

void print(tipo_inf inf){
	cout<<" "<< inf.modello;
	cout<<" " << inf.carico;
}

float get_carico(tipo_inf f){
	return f.carico;
};

char* get_modello(tipo_inf f){
	return f.modello;
};

