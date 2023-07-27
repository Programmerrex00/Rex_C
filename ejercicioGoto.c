#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define FILAS 5
#define COLUMNAS 10

void cargarMatriz(int matriz[FILAS][COLUMNAS]){
    for (int i = 0; i < FILAS; i++){
        for (int j = 0; j < COLUMNAS; j++){
            do{
                printf("Ingrese el valor en la posicion [%i][%i]: ", i,j);
                scanf("%i", &matriz[i][j]);
            }while(matriz[i][j] <= 0 || matriz[i][j] > 10);
        }
    }
    printf("\n");
}


void cargarMatrizConRandom(int matriz[FILAS][COLUMNAS]){
    for (int i = 0; i < FILAS; i++){
        for (int j = 0; j < COLUMNAS; j++){
            matriz[i][j] = rand()%10 + 1;
        }
    }
    printf("\n");
}

void imprimirMatriz(int matriz[FILAS][COLUMNAS]){
    for (int i = 0; i < FILAS; i++){
        for (int j = 0; j < COLUMNAS; j++){
            printf("[%i]",matriz[i][j]);
        }
        printf("\n");
    }
}


void buscarNumero(int matriz[FILAS][COLUMNAS], int numero){
    for (int i = 0; i < FILAS; i++){
        for (int j = 0; j < COLUMNAS; j++){
            if(matriz[i][j] == numero){
                goto encontrado;
            }
        }
    }
    printf("\nEl numero no existe en la matriz!!!");
    return;
    encontrado: printf("\nEl numero fue encontrado!!!");
}

int main(){
    int matriz[FILAS][COLUMNAS];
    //cargarMatriz(matriz);
    cargarMatrizConRandom(matriz);
    imprimirMatriz(matriz);
    buscarNumero(matriz, 10);
    getch();
    return 0;
}