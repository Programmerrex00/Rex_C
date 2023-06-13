#include <stdio.h>
#include <conio.h>

#define TAMANO 5

void cargarVector(int vector[TAMANO]){
    for (int i = 0; i < TAMANO; i++){
        printf("Ingrese el %i del vector", i+1);
        scanf("%i", &vector[i]);
    }
}

void imprimirVector(int vector[TAMANO]){
    printf("El vector Proporcionado es: ");
    for (int i = 0; i < TAMANO; i++){
        printf("%i - ", vector[i]);
    }
}

void determinarMayorYMenor(int vector[TAMANO], int *mayor, int *menor){
    *mayor = vector[0];
    *menor = vector[0];
    for (int i = 1; i < TAMANO; i++){
        if(vector[i] > *mayor){
            *mayor = vector[i];
        }
        if(vector[i] < *menor){
            *menor = vector[i];
        }
    }
    
}


int main(){
    int vector[TAMANO];
    cargarVector(vector);
    int numeroMayor, numeroMenor;
    imprimirVector(vector);
    determinarMayorYMenor(vector, &numeroMayor, &numeroMenor);
    printf("El numero mayor de la lista es %i y el menor es %i", numeroMayor, numeroMenor);

}