#ifndef TIPO_H
#define TIPO_H

typedef struct tipo_inf{
    char nome[60];
    char ruolo[20];
    float sti;
};  

int compare(tipo_inf , tipo_inf );

void print(tipo_inf );

void copy( tipo_inf& , tipo_inf);

#endif
