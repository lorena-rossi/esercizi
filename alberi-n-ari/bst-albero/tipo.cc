#include <cstring>
#include <iostream> 

using namespace std;

#include "tipo.h"


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

//per tipo_key
int compare_key(tipo_key a, tipo_key b){
    if(a==b)
        return 0;
    else
    {
        if (a<b)
        {
            return -1;
        }
        return 1;
    }
    
};

tipo_key copy_key(tipo_key v, tipo_key p){
    v=p;
    return v;
};