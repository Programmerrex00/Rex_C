#include <stdio.h>
#include <conio.h>

#define TAMANO 5

int main(){
    int vector[TAMANO];
    int totalSuma = 0, totalProducto = 1;
    for (int i = 0; i < TAMANO; i++){
        printf("Ingrese el %i elemento: ", i+1);
        scanf("%i", &vector[i]);
    }
    for (int i = 0; i < TAMANO; i++){
        totalSuma += vector[i];
        totalProducto *= vector[i];
    }
    printf("\n La suma de los elementos del vector es: %i y el producoto es: %i", totalSuma, totalProducto);
    

    

    getch();
    return 0;
}