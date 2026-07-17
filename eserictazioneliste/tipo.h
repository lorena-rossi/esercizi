
#ifndef TIPO_H
#define TIPO_H

typedef struct tipo_inf
{
    char codice[11];
    char nome[31];
    float prezzo;
    int quant;
};

void get_codice(tipo_inf, char*);
void get_nome(tipo_inf ,char*);
float get_costo(tipo_inf );
int get_qauntita(tipo_inf);

int compare(tipo_inf,tipo_inf);
void copy(tipo_inf&,tipo_inf);
void print(tipo_inf);

#endif