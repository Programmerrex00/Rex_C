#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>



int main(){
    int dato1 = 20;
    int dato2 = 200;
    int *puntero;
    puntero = &dato1;
    printf("Lo apuntado por puntero es: %i\n", *puntero);
    printf("La direccion que almacena puntero es: %p\n", puntero);

    puntero = &dato2;
    printf("Lo apuntado por puntero es: %i\n", *puntero);
    printf("La direccion que almacena puntero es: %p\n", puntero);


    getch();
    return 0;
}