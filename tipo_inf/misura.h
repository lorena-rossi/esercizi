
#ifndef MISURA_H
#define MISURA_H


typedef struct misura
{
    char id[10];
    int time;
    float temp;
};

void get_id( misura , char*);
int get_time( misura );
float get_temp(misura );

int compare(misura, misura);
void stampa(misura);
void copy(misura , misura);


#endif