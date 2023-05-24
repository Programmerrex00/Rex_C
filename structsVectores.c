#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

#define TAMANO 4
#define SALTO "\n"


struct producto{
    int codigo;
    char descripcion[40];
    float precio;
};

//con la expresion struct producto* nombreFuncition, podremos retornar cualquier tipo de dato, int, float, char, []...

void cargarVectoDeProductos(struct producto vector[TAMANO]){
    for (int i = 0; i < TAMANO; i++){
        printf("Ingrese el codigo del %i producto: ", i+1);
        scanf("%i", &vector[i].codigo);
        printf("Ingrese la descripcion del %i producto: ", i+1);
        fflush(stdin);
        gets(vector[i].descripcion);
        printf("Ingrese el precio del %i producto: ", i+1);
        scanf("%f", &vector[i].precio);
        printf(SALTO);
    }
}

void imprimirVectorDeStructs(struct producto vector[TAMANO]){
    for (int i = 0; i < TAMANO; i++){
        printf("Codigo: %i \t Descripcion: %s Precio: %0.3f \n", vector[i].codigo, vector[i].descripcion, vector[i].precio);
    }
    
}

void articuloConMayorPrecio(struct producto vector[TAMANO]){
    int posicion = 0;
    for (int i = 1; i < TAMANO; i++){
        if(vector[i].precio > vector[posicion].precio){
            posicion = i;
        }
    }
    printf("El Producto con mayor precio es: %s, con un precio de %0.3f", vector[posicion].descripcion, vector[posicion].precio);
}

int main(){
    struct producto vectorProducto[TAMANO];
    cargarVectoDeProductos(vectorProducto);
    imprimirVectorDeStructs(vectorProducto);
    articuloConMayorPrecio(vectorProducto);
}