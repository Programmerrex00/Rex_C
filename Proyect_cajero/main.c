#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "caja_compra.h"

// SEEK_SET o 0 : principio del fichero.
// SEEK_CUR o 1 : posición actual.
// SEEK_END o 2 : final del fichero.

// fread -fwrite, fgetc -fputc, fgets -
// fputs, fscanf -fprintf



// Por ejemplo, en un fichero que almacene números enteros la instrucción
// fseek (f, 0, SEEK-SET); colocará el puntero al principio del fichero.
// fseek (f, 3*sizeof(int), SEEK-CUR); colocará el puntero 3 posiciones más
// allá de la posición actual del puntero

//Funcion main principal
int main(){
    int opcion, opcionSub;
    do{
        //Menu principal para gestionar productos y vestas
        printf("--Menu Principal--\n");
        printf("1. Registrar Venta.\n");
        printf("2. Inventario.\n");
        printf("3. Listar Ventas.\n");
        printf("4. Salir!.\n\n");
        printf("Escoga la Opcion: ");
        scanf("%i", &opcion);
        switch (opcion){
        case 1:
            registrarVenta();
            break;
        case 2:
            do{
                //Submenu para la gestion de los productos
                printf("--Gestion del producto--\n");
                printf("1. Crear un Producto\n");
                printf("2. Listar Productos\n");
                printf("3. Regresar\n\n");
                printf("Escoga la Opcion: ");
                scanf("%i", &opcionSub);
                switch (opcionSub){
                case 1:
                    crearProducto();
                    break;
                case 2:
                    listarProductos();
                    break;  
                default:
                    printf("Opcion Incorrecta!\n");
                    break;
                }
            } while (opcionSub != 3);
            break;
        case 3:
            listarVentas();
            break;
        case 4:
            printf("--Sistema Finalizado--");
            break;
        default:
            printf("Opcion Incorrecta!\n");
            break;
        }
    } while (opcion != 4);
    getch();
    return 0;
}