#ifndef TIPO_H
#define TIPO_H


typedef struct tipo_inf
{
    char* modello;
    float carico;
};


int compare(tipo_inf,tipo_inf);
void copy(tipo_inf&,tipo_inf);
void print(tipo_inf);

float get_carico(tipo_inf );
char* get_modello(tipo_inf );

#endif