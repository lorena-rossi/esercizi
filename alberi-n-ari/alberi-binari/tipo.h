#ifndef TIPO_H
#define TIPO_H

typedef struct tipo_inf
{
    int codice;
    char nome[10];
    float valore;
};

int compare(tipo_inf , tipo_inf);

void print_inf(tipo_inf);

void copy_inf(tipo_inf , tipo_inf);

#endif