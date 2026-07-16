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


/** ritorna -1 se hanno id diverso 
 * -2 se time diverso e 
 * -3 se temp diversa 
 */
int compare(misura m1, misura m2){
    if ( strcmp(m1.id,m2.id) == 0)
    {
        if ( m1.time == m2.time)
        {
            if (m1.temp == m2.temp)
            {
                return 0;
            }
            else
                return -3;
            
        }
        else
            return -2;
        
    }
    else 
        return -1;
};

void stampa(misura m){
    cout<<"misure registrate :\n";
    cout<<"sensore : "<<m.id;
    cout<<"timestamp: "<<m.time;
    cout<<"temperatura: "<< m.temp<<endl;
};


/**
 * @param m1 copiato in @param m2 
 */

void copy(misura m1 , misura m2){
    strcpy(m2.id, m1.id);
    m2.temp = m1.temp;
    m2.time = m1.time;
};