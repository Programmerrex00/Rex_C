#include <stdio.h>
#include <conio.h>
#include <string.h>

//Struct
/*
struct producto{
    int codigo;
    char descripcion[40];
    float precio;
};//el punto y coma es obligatorio*/


struct pais{
    char nombre[40];
    int cantidadHabitantes;
};

void imprimir(char nombre[40], int cantidad){
    printf("%s tiene la mayor cantidad de habitantes con un total de %i habitantes", nombre, cantidad);
}


int main(){
   /*struct producto pro1, pro2;
    printf("Ingrese el codigo del primer producto: ");
    scanf("%i", &pro1.codigo);
    fflush(stdin);
    printf("Ingrese la descripcion del primer producto: ");
    gets(pro1.descripcion);
    fflush(stdin);
    printf("Ingrese el presio del primer producto: ");
    scanf("%f", &pro1.precio);
    printf("\n");

    printf("Ingrese el codigo del segundo producto: ");
    scanf("%i", &pro2.codigo);
    fflush(stdin);
    printf("Ingrese la descripcion del segundo producto: ");
    gets(pro2.descripcion);
    fflush(stdin);
    printf("Ingrese el presio del segundo producto: ");
    scanf("%f", &pro2.precio); 

    
    if(pro1.precio > pro2.precio){
        printf("El producto con mayor precio es %s con un precio de %0.3f ", pro1.descripcion, pro1.precio);
    }else if(pro1.precio < pro2.precio){
        printf("El producto con mayor precio es %s con un precio de %0.3f ", pro2.descripcion, pro2.precio);
    }else{
        printf("los productos tienen el mismo precio!!!!");
    }*/
    //---------------------------------------------------------------------------------------------

    struct pais pais1, pais2, pais3;
    printf("Ingrese el nombre del primer pais: ");
    gets(pais1.nombre);
    fflush(stdin);
    printf("Ingrese la cantidad de habitantes que tiene el pais %s : ", pais1.nombre);
    scanf("%i", &pais1.cantidadHabitantes);
    printf("\n");
    fflush(stdin);
    printf("Ingrese el nombre del segundo pais: ");
    gets(pais2.nombre);
    fflush(stdin);
    printf("Ingrese la cantidad de habitantes que tiene el pais %s : ", pais2.nombre);
    scanf("%i", &pais2.cantidadHabitantes);
    printf("\n");
    fflush(stdin);
    printf("Ingrese el nombre del tercer pais: ");
    gets(pais3.nombre);
    fflush(stdin);
    printf("Ingrese la cantidad de habitantes que tiene el pais %s : ", pais3.nombre);
    scanf("%i", &pais3.cantidadHabitantes);
    printf("\n");

    if(pais1.cantidadHabitantes > pais2.cantidadHabitantes && pais1.cantidadHabitantes > pais3.cantidadHabitantes){
        imprimir(pais1.nombre, pais1.cantidadHabitantes);
    }else{
        if(pais2.cantidadHabitantes > pais3.cantidadHabitantes){
             imprimir(pais2.nombre, pais2.cantidadHabitantes);
        }else{
             imprimir(pais3.nombre, pais3.cantidadHabitantes);
        }
    }




    getch();
    return 0;
}