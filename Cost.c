#include <stdio.h>
#include <conio.h>

#define CANTIDAD 5

void cargar(int vector[CANTIDAD]){
    for (int i = 0; i < CANTIDAD; i++){
        printf("Ingrese el %i elemento: ", i+1);
        scanf("%i", &vector[i]);
    }
    printf("\n");
}

void imprimir(const int vector[CANTIDAD]){
    for (int i = 0; i < CANTIDAD; i++){
        printf("%i ", vector[i]);
    }
    
}

int main(){
    int vector[CANTIDAD];
    cargar(vector);
    imprimir(vector);
    getch();
    return 0;
}
