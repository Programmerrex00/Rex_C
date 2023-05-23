#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>


/*struct producto{
    int codigo;
    char descripcion[40];
    float precio;
};


void mostrarProducto(struct producto pro){
    printf("El producto tiene un codigo: %i, una descripcion: %s y un precio de: %0.3f", pro.codigo, pro.descripcion, pro.precio);
}*/


/*struct pais{
    char nombre[30];
    int cantidad;
};

void mostrarDatos(struct pais pa){
    printf("Nombre del pais: %s ", pa.nombre);
    printf("Cantidad de habitantes: %i \n", pa.cantidad);
}*/

struct producto{
    int codigo;
    char descripcion[40];
    float precio;
};

struct producto cargarDatos(){
    struct producto pro;
    printf("Ingrese el codigo del producto: ");
    scanf("%i", &pro.codigo);
}


int main(){
    /*struct producto product;
    product.codigo = 002;
    strcpy(product.descripcion , "Fresas");
    product.precio = 3.000;
    //otra forma de inicializar un struct
    struct producto product ={333, "Los gatos son felices", 3.000};
    mostrarProducto(product);*/

    //-------------------------------------------------------------------------------------
    /*
    struct pais country1 = {"Brazil", 333}, country2 = {"Roma", 980}, country3 = {"Estados Unidos", 200};
    mostrarDatos(country1);
    mostrarDatos(country2);
    mostrarDatos(country3);*/


    
}