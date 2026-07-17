
#ifndef TIPO_H
#define TIPO_H

typedef struct sensore
{
    char id[20];
    char tipo[30];
    float soglia;
};

void get_id(sensore , char*);
void get_tipo(sensore , char*);
float get_soglia(sensore );

void stampas(sensore);

int compare(sensore, sensore);

void inizia(sensore, float, char, char);

#endif