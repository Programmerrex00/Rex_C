#include <stdio.h>
#include <conio.h>

#define TAMANO 5

void cargarVector(int vector[TAMANO]){
    for (int i = 0; i < TAMANO; i++){
        printf("Ingrese el %i valor", i+1);
        scanf("%i", &vector[i]);
    }
}

void imprimir(int vector[TAMANO]){
    for (int i = 0; i < TAMANO; i++){
        printf("%i ", vector[i]);
    }
    printf("\n");
}

void ordenarRecursivamente(int vector[TAMANO], int tamano){
    if(tamano > 0){
        for (int i = 0; i < tamano - 1; i++){
            if(vector[i] > vector[i+1]){
                int aux = vector[i];
                vector[i] = vector[i+1];
                vector[i+1] = aux;
            }
        }
        ordenarRecursivamente(vector, tamano - 1);
    }
    
}   


int main(){
    int vector[TAMANO];
    cargarVector(vector);
    imprimir(vector);
    ordenarRecursivamente(vector, TAMANO);
    imprimir(vector);
    getch();
    return 0;
}
