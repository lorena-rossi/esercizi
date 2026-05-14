#include <cstring>
#include <iostream> 
#include "tipo.h"


using namespace std;




int compare(tipo_inf s1,tipo_inf s2){
    return strcmp(s1,s2);
}

void print(tipo_inf c){
    cout<<c;
};

void copy(tipo_inf& dest, tipo_inf source){
    dest=new char[strlen(source)];
    strcpy(dest,source);
}

