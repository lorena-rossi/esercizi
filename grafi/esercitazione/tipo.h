
#ifndef TIPO_H
#define TIPO_H

typedef struct sensore
{
    char id[7];
    char tipo[20];
    float soglia;
};

void get_id(sensore , char*){};
void get_tipo(sensore , char*){};
float get_soglia(sensore ){};

#endif