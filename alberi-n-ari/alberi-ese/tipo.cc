#include <cstring>
#include <iostream> 

using namespace std;

#include "tipo.h"

/** ritorna -1 se i due dati non sono uguali, ritorna 0 se lo sono*/
int compare(tipo_inf s1,tipo_inf s2){
    if( strcmp(s1.nome,s2.nome) == 0 ){
        if( strcmp(s1.ruolo,s2.ruolo) == 0 ){
            if( s1.sti == s2.sti ){
                return 0;
            }
            return -1;
        }
        return -1;
    }
    return -1;
}

void print(tipo_inf c){
    cout<<"il dipendente : "<< c.nome;
    cout<<" avente ruolo : "<< c.ruolo;
    cout<<" riceve : "<< c.sti;
    cout<<" di stipendio\n"<<endl;
};

void copy(tipo_inf& dest, tipo_inf source){
    
    dest.nome=new char[strlen(source.nome)];
    strcpy(dest.nome,source.nome);
    dest.ruolo=new char[strlen(source.ruolo)];
    strcpy(dest.ruolo,source.ruolo);
    dest.sti = source.sti;
}
