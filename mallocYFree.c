#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    int *puntero;
    int tamano;
    int r;
    printf("Ingrese la cantidad de elementos que tendra el vector: ");
    scanf("%i", &tamano);
    puntero = malloc(tamano*sizeof(int));
    for ( r = 0; r < tamano; r++){
        printf("Ingrese el %i valor", r+1);
        scanf("%i", &puntero[r]);
    }
    printf("\nEl contenido del vector es: ");
    for ( r = 0; r < tamano; r++){
        printf("%i - ", puntero[r]);
    }
    free(puntero);
    getch();
    return 0;
}