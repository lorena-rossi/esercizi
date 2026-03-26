#include <stdio.h>


void stampavoti( unsigned N_COLS, float m [][N_COLS], unsigned size ){
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < N_COLS ; j++)
        {
            printf("il voto in colonna %d e riga %d è = %f" , j , i , m[i][j]);
        }
        //printf("/n"); per andare a capo finita una riga 
    }
}

void media( unsigned N_COLS, float m [][N_COLS], unsigned size){
    
    float s=0;
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < N_COLS; j++)
        {
            s = s + m[i][j] ;
        }
        printf("la media per la riga  è : %f ", s/i);
    }
    
};
//posiamo fare con un puntatore come imput 
/* void stampavoti( unsigned N_COLS, float m [][N_COLS], float *arg ){
   
    for (int i = 0; i < size; i++)
    {
          folat s=0.0;
        for (int j = 0; j < N_COLS ; j++)
        {
            s+= m[][];
        }
        argv[i]= sum / (float) arg; credo  
    }
} */

int main(){

    float Voti[3][4] = { {6.5, 7.0, 8.0, 5.5}, {9.0, 8.5, 7.5, 8.0}, {5.0, 6.0, 6.5, 7.0} };

    //stampa voti
    stampavoti(4,Voti,3);

    //media
    media(3,Voti,4);

    //calcola media maggiore foat max = 0.0 ; unsigned max_stud_id=0; for tra studenti con dentro if(avg[i]> max){max=avg[i]; max_st_id = i;} poi stampa, controlla ci sono degli errori 
    // prova a fare una funzione con imput un float array mono dimensionale
    //prima media è 6.75000 8.2500 6.1200 

    //voti sufficienti 


    printf(" in valore  \n");
    return 0          ;
}