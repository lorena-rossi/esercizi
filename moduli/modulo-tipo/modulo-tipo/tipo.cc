
#include <iostream>
#include <cstring>

using namespace std ;

#include "tipo.h"

int compare(tipo_inf s1,tipo_inf s2){
	return strcmp(s1,s2);
};

tipo_inf copy(tipo_inf& arrivo, tipo_inf partenza){
	arrivo = new char[ strlen(partenza) ];
	strcpy(arrivo, partenza);
};

void print(tipo_inf n){
	cout<<n;
};
