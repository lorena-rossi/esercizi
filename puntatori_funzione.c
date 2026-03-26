#include <stdio.h>

float max (float a, float b){
    
    if (a<b)
    {
        return b;
    }
    else
    {
        return a;
    }
    //return x > y ? y : x
}

float min (float a, float b){

    if(a<b){ return a; }
    else{ return b; }
}

float applica(float x, float y, float(*op)(float , float)){

    return op(x,y);

}

int main(){

    float(*pf)(float, float);

    pf=max;
    printf(" max(8,3) è %f \n", pf(3,8));

    pf=min;
    printf(" min(8,3) è %f \n", pf(3,8));

    //3
    printf(" min(8,3) è %f \n", applica(8,3,min)); 
    //uguale a sopra 

    return 0;
}