#include "tipo.h"

#include <string.h>
#include <iostream>
using namespace std;

void get_codice(tipo_inf t, char* s){
        s=t.codice;
};

void get_nome(tipo_inf t ,char* s){
        s=t.nome;
};

float get_prezzo(tipo_inf t ){
        return t.prezzo;
};

int get_qauntita(tipo_inf t){
        return t.quant;
};


int compare(tipo_inf s1,tipo_inf s2){
        if ( strcmp(s1.codice,s2.codice) == 0 && strcmp(s1.nome,s2.nome) == 0 )
        {
              if (s1.prezzo == s2.prezzo && s1.quant == s2.quant)
              {
                return 0;
              }
              else 
                return -1;
                
        }
        else    
                return -1;
        
        
}

void copy(tipo_inf& dest, tipo_inf source){
        strcpy(dest.codice,source.codice);
        strcpy(dest.nome,source.nome);
        dest.quant=source.quant;
        dest.prezzo=source.prezzo;
}

void print(tipo_inf inf){
       cout<<"l'articolo ha nome : "<< inf.nome;
       cout <<" codice : "<<inf.codice;
       cout<<" prezzo : "<<inf.prezzo;
       cout<< " sono presenti "<<inf.quant<<" atricoli come questo"<<endl; 
}
