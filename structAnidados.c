#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

#define TAMANO 3
#define SALTO "\n"

struct fecha{
    int dd;
    int mm;
    int aa;
};

struct producto{
    int codigo;
    char descripcion[41];
    float precio;
    struct fecha fechaDeVencimiento;
};

void cargarVectorDeProductos(struct producto vector[TAMANO]){
    for (int i = 0; i < TAMANO; i++){
        printf("Ingrese el codigo del %i Producto: ", i+1);
        scanf("%i", &vector[i].codigo);
        fflush(stdin);
        printf("Ingrese la descripcion del %i Producto: ", i+1);
        gets(vector[i].descripcion);
        printf("Ingrese el precio del %i Producto: ", i+1);
        scanf("%f", &vector[i].precio);
        printf("Ingrese la fecha de Vencimiento el %i Producto: \n", i+1);
        printf("Dia: ");
        scanf("%i", &vector[i].fechaDeVencimiento.dd);
        printf("Mes: ");
        scanf("%i", &vector[i].fechaDeVencimiento.mm);
        printf("Anio: ");
        scanf("%i", &vector[i].fechaDeVencimiento.aa);
        printf(SALTO);
    }
}

void imprimirProducto(struct producto vector[TAMANO]){
    for (int i = 0; i < TAMANO; i++){
        printf("Codigo: %i\n Descripcion: %s\n Precio: %0.3f\n Fecha: %i/%i/%i \n\n",
         vector[i].codigo, vector[i].descripcion, vector[i].precio, vector[i].fechaDeVencimiento.dd,
         vector[i].fechaDeVencimiento.mm, vector[i].fechaDeVencimiento.aa);
    }
    
}

//----------------------EJERCICIO POR SEPARADO 

void pedirNumero(){
    char especimen[60];
    printf("Ingrese un numero o una palabra para ver su invertido: ");
    gets(especimen);
    for (int i = strlen(especimen); i >= 0; i--){
        printf("%c", especimen[i]);
    }
}

int main(){
    //struct producto productos[TAMANO];
    //cargarVectorDeProductos(productos);
    //imprimirProducto(productos);
    pedirNumero();


    getch();
    return 0;
}