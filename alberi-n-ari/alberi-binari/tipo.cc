#include <cstring>

#include <iostream>
using namespace std;

#include "tipo.h"

/** quando ritorna -1 vuol dire che i 2 valori sono diversi se ritorna 0 i valori sono uguali */
int compare(tipo_inf a, tipo_inf b){

    if(a.codice == b.codice){
        if( strcmp(a.nome, b.nome) == 0 ){
            if( a.valore == b.valore){
                return 0;
            }
        }
        return -1;
    }
    return -1;
};

void print_inf(tipo_inf a){
    cout<<"il codice è : "<<a.codice;
    cout<<" il nome è  : "<<a.nome;
    cout<<" il valore è "<<a.valore<<endl;
};

/** source viene copiato in dest*/
void copy_inf(tipo_inf dest , tipo_inf source){
    dest.codice = source.codice;
    dest.valore = source.valore;
    strcpy(dest.nome, source.nome);
};