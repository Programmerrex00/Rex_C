#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct producto{
    int codigo;
    char descripcion[40];
    float precio;
};



int main(){
    struct producto *pro;

    pro =   malloc(sizeof(struct producto));

    //forma de asignar los datos manualmente al struct
    pro->codigo = 111;
    strcpy(pro->descripcion, "Comida chatarra");
    pro->precio = 2.000;


    printf("Ingrese el codigo del producot");
    scanf("%i", &pro->codigo);
    fflush(stdin);
    printf("Ingrese la descripcion de producto");
    gets(pro->descripcion);
    printf("Ingrese el precio del producto");
    scanf("%f", &pro->precio);
    printf("\n");
    printf("Codigo: %i\n descripcion: %s\n precio: %0.3f", pro->codigo, pro->descripcion, pro->precio);
    free(pro);
    getch();
    return 0;
}