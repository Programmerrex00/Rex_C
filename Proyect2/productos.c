#include <stdio.h>
#include "productos.h"

static void mostrarTitulo(char *title){
    printf("%s\n", title);
}

static void mostrarAsteriscos(){
    printf("**********************************************\n\n");
}

void cargar(tProducto producto[CANT]){
    mostrarTitulo("--Ingrese sus datos--");
    for (int i = 0; i < CANT; i++){
        printf("Ingrese el codigo:");
        scanf("%i", &producto[i].codigo);
        fflush(stdin);
        printf("Ingrese la descripcion:");
        gets(producto[i].descripcion);
        printf("Ingrese el precio");
        scanf("%f", &producto[i].precio);
    }
    mostrarAsteriscos();
}

void imprimir(tProducto producto[CANT]){
    mostrarTitulo("Imprecion de productos");
    for (int i = 0; i < CANT; i++){
        printf("Codigo: %i\n", producto[i].codigo);
        printf("Descripcion: %s\n", producto[i].descripcion);
        printf("Precio: %f\n", producto[i].precio);
    }
    mostrarAsteriscos();
}