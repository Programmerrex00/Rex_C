#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



int main(){
    int tamano;
    char *puntero;
    printf("Ingrese el tamano de la palabra");
    scanf("%i", &tamano);
    puntero = malloc(tamano*sizeof(char)+1);
    fflush(stdin);
    printf("Ingrese la palabra");
    gets(puntero);
    printf("\nLa palabra que ingreso es: %s", puntero);

    free(puntero);

    getch();
    return 0;
}