#include "misura.h"

#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

misura* carica( const char*filename, int *size){
    misura m;
    *size=0;
    misura *tot = (misura *) malloc( 20 * sizeof(misura) );
    FILE *fp= fopen( filename, "r");
    if (fp == NULL)
    {
        cout<<"errore apertura file"<<endl;
        return NULL;
    }
    while ( fscanf(fp, "%s" "%d" "%f", m.id, &m.time, &m.temp) != EOF )
    {
        tot[*size] = m;
        *size = *size + 1;
    }

    fclose(fp);
    return tot;
};

float media(int size, misura *arr, char*id_sensore){
    float somma=0;
    int conto=0;
    for (int i = 0; i < size; i++)
    {
        if ( strcmp( id_sensore, arr[i].id) == 0 )
        {
            conto ++;
            somma = somma + arr[i].temp;
        }
        
    }
    if ( conto > 0 )
    {
        return somma/conto;
    }
    else
    {
        cout<<"nessun elemento trovato"<<endl;
        return (float)-1;
    }
    
    
};

int controllo( misura *arr, int size){

    for (int i = 0; i < size; i++)
    {
        if (arr[i].temp <= (float)50 && arr[i].temp >= (float)-50)
        {
            for (int j = 0; j < i; j++)
            {
                if ( strcmp(arr[i].id, arr[j].id) == 0 && arr[i].time == arr[j].time )
                {
                    cout<<"il sensore "<< arr[i].id;
                    cout<<"ha due misurazioni llo stesso tempo "<< arr[i].time<<" e "<<arr[j].time<<endl;
                    return 0; 
                }
                
            }  
            
        }
        else
        {
            
            cout<<"la temperatura " << arr[i].temp;
            cout<<"del sensore"<< arr[i].id;
            cout<<"è fuori scala"<< endl;
            return 0;
        }
        
    } 
    return 1;
};

int main(){
    
    int size;
    misura *tot= NULL;
    tot = carica("letture.txt", &size);
    char nome[]= "SNS_02"; 
    float med = media( size, tot, nome);
    cout<<"le media delle temperature registrate è : "<< med<<endl;

    int cnt = controllo(tot, size);
    cout<<"contorllo andato a buon fine  : "<<cnt<<endl;
    return 1;
}