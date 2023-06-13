#include <stdio.h>
#include <conio.h>




int main(){
    int vector[7]={32,42,32,43,22,11,43};
    int *puntero;
    puntero=vector;
    for (int i = 0; i < 7; i++){
        if(i == 3){
            puntero[i] = 9999;
        }

    }
    for (int j = 0; j < 7; j++){
        printf("%i\n", vector[j]);
    }
    
    
    getch();
    return 0;
}