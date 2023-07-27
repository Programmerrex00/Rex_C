#include <stdio.h>
#include <conio.h>
#include "pila.h"

tnodo raiz = NULL;

int main(){
    insertar(12);
    insertar(312);
    insertar(32);
    insertar(54);
    imprimir();
    printf("Extraemos de la pila %i\n", extraer());
    imprimir();
    liberar();
    getch();
    return 0;
}