#include <stdio.h>
#include <conio.h>

#define FILAS 2
#define COLUMNAS 2

void llenarVector(int (*puntero)[COLUMNAS]){
    for (int i = 0; i < FILAS; i++){
        for (int j = 0; j < COLUMNAS; j++){
            printf("Ingrese el numero en la posicion [%i][%i]", i,j);
            scanf("%i", &puntero[i][j]);
        }
        
    }
    
}


void imprimirVector(int (*puntero)[COLUMNAS]){
       for (int i = 0; i < FILAS; i++){
        for (int j = 0; j < COLUMNAS; j++){
            printf("Ingrese el numero en la posicion [%i][%i]: %i\n", i,j, puntero[i][j]);
        }
    }
}


int main(){
    int vectorBidimencional[FILAS][COLUMNAS];
    llenarVector(vectorBidimencional);
    imprimirVector(vectorBidimencional);
    getch();
    return 0;
}