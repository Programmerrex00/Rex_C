#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

#define CANTIDAD 10

enum texiste {NO, SI};

void cargar(int vector[CANTIDAD]){
    srand(time(NULL));
    for (int i = 0; i < CANTIDAD; i++)
        vector[i] = rand() % 100 + 1;
}

void imprimir(int vector[CANTIDAD]){
    for (int i = 0; i < CANTIDAD; i++)
        printf("%i ", vector[i]);
    printf("\n\n");        
}   

void consultar(int vector[CANTIDAD]){
    int valor;
    printf("Ingrese el valor a buscar en el vector: ");
    scanf("%i", &valor);
    enum texiste existe = NO;
    for (int i = 0; i < CANTIDAD; i++)
        if (valor == vector[i])
            existe = SI;
    if(existe == SI)        
        printf("El valor ingresado se encuentra en el vector");
    else
        printf("El valor ingresado no se encuentra en el vector");   
}




int main(){
    int vector[CANTIDAD];
    cargar(vector);
    imprimir(vector);
    consultar(vector);
    getch();
    return 0;
}