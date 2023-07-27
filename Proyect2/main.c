#include <stdio.h>
#include"productos.h"

int main(){
    tProducto producto[CANT];
    int opcion;
    do{
        printf("1- Cargar producto\n");
        printf("2- Listar producos\n");
        printf("3- Finalizar Programa\n\n");
        printf("Elija su opcion");
        scanf("%i",&opcion);
        switch(opcion){
        case 1:
            cargar(producto);
            break;
        case 2:
            imprimir(producto);
            break;    
        default:
            printf("Opcion Incorrecta!!");
            break;
        }
    } while (opcion != 3);
    


    return 0;
}