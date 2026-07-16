#include "misura.h"

#include <iostream>
#include <string.h>
#include <iostream>
using namespace std;

void get_id( misura m , char *app){
    strcpy( app, m.id);
};

int get_time( misura m){
    return m.time;
};

float get_temp(misura m){
    return m.temp;
};


//* ritorna -1 se hanno id diverso
int compare(misura m1, misura m2){
    if ( strcmp(m1.id,m2.id) == 0)
    {
        if ( m1.time == m2.time)
        {
            if (m1.temp == m2.temp)
            {
                /* code */
            }
            
        }
        
    }
    else 
        return -1;
};

void stampa(misura);

void copy(misura , misura);