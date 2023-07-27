#include <stdio.h>
#include <conio.h>

typedef struct{
    int codigo;
    char descripcion[41];
    float precio;
}tProducto;

//Otra alternativa para declarar un alias al struct sin poner su nombre en la ultima llave es: 

// struct tProducto{
//     int codigo;
//     char descripcion[41];
//     float precio;
// };

// typedef struct tProducto pro;



int main(){
    tProducto pro1, pro2;
    printf("Ingrese el codigo del primer producto: ");
    scanf("%i", &pro1.codigo);
    fflush(stdin);
    printf("Ingrese la descripcion para el primer producto: ");
    gets(pro1.descripcion);
    printf("Ingrese el precio para el primer producto: ");
    scanf("%f", &pro1.precio);
    printf("\nIngrese el codigo del segundo producto: ");
    scanf("%i", &pro2.codigo);
    fflush(stdin);
    printf("Ingrese la descripcion para el segundo producto: ");
    gets(pro2.descripcion);
    printf("Ingrese el precio para el segundo producto: ");
    scanf("%f", &pro2.precio);
    if(pro1.precio > pro2.precio){
        printf("El producto con mayor precio es: %s", pro1.descripcion);
    }else{
        if(pro1.precio < pro2.precio){
            printf("El producto con mayor precio es: %s", pro2.descripcion);
        }else{
            printf("Tienen igual precio!!!");
        }
    }
    getch();
    return 0;
}
