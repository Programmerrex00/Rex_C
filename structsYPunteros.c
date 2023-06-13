#include <stdio.h>
#include <conio.h>

struct producto{
    int codigo;
    char descripcion[40];
    float precio;
};


//para acceder a los campos del registro podemos acceder tambien a esto con esta sintaxis pro->codigo

void cargarEstructs(struct producto *pro){
    printf("Ingrese el codigo del producto");
    //scanf("%i", &(*pro).codigo);
    scanf("%i", &pro->codigo);
    fflush(stdin);
    printf("Ingrese la descripcion del producto");
    //gets((*pro).descripcion);
    gets(pro->descripcion);
    printf("Ingrese el precio del producto");
    //scanf("%f", &(*pro).precio);
    scanf("%f", &pro->precio);
}


void imprimirEstruct(struct producto product){
    printf("Codigo: %i\nDescripcion: %s\nPrecio: %0.2f", product.codigo, product.descripcion, product.precio);
}


int main(){

    struct producto product;
    cargarEstructs(&product);
    imprimirEstruct(product);



    getch();
    return 0;   
}