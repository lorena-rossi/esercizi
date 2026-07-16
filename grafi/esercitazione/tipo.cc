#include "tipo.h"

#include <string.h>
#include <iostream>
using namespace std;

void get_id(sensore m , char* app){
    app = m.id;
};

void get_tipo(sensore m , char* app){
    app = m.tipo;
};

float get_soglia(sensore m ){ return m.soglia; };

void stampa(sensore m){ 
    cout<<"sensore "<<m.id;
    cout<<" di tipo " << m.tipo;
    cout<<" con solgia "<<m.soglia<<endl;
};

int compare(sensore m1, sensore m2){
    if ( strcmp(m1.id,m2.id) == 0 )
    {
        if ( strcmp(m1.tipo,m2.tipo) == 0 )
        {
            if ( m1.soglia == m2.soglia)
            {
                return 0;
            }
            
        }
        
    }
    return -1;
    
};

void inizia(sensore m, float f, char s1, char s2){
    stpcpy( m.id, &s1);
    stpcpy( m.tipo, &s2);
    m.soglia = f;
};