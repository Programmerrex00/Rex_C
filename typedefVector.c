#include <stdio.h>
#include <conio.h>

#define TAMANO 5

//Aca lo que estamos haciendo es colocarle un alias a un struct pero este contendra un 
// vector de ese tipo struct

struct people{
    char nombre[20];
    int edad;
};

typedef struct people vecPer[TAMANO];

void cargar(vecPer vecP){
    for (int i = 0; i < TAMANO; i++){
        printf("Ingrese el nombre de la %i persona: ", i+1);
        gets(vecP[i].nombre);
        printf("Ingrese la edad de la %i persona: ", i+1);
        scanf("%i", &vecP[i].edad);
        printf("\n");
        fflush(stdin);
    }
}

void imprimir(vecPer vecP){
    for (int i = 0; i < TAMANO; i++){
        printf("La %i persona se llama %s y tiene %i de edad\n", i+1, vecP[i].nombre, vecP[i].edad);
    } 
    
}

int main(){
    vecPer vecP;
    cargar(vecP);
    imprimir(vecP);

    getch();
    return 0;
}