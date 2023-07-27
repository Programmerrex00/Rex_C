#include <stdio.h>
#include <conio.h>

#define TAMANO 5   


void cargarVector(int vector[TAMANO]){
    for (int i = 0; i < TAMANO; i++){
        printf("El %i valor: ", i+1);
        scanf("%i", &vector[i]);
    }
    printf("\n");
}

void mostrarVector(int vector[TAMANO]){
    for (int i = 0; i < TAMANO; i++){
        printf("%i ", vector[i]);
    }
    printf("\n");
}

int imprimirMayor(int vector[TAMANO]){
    int mayor = vector[0];
    for (int i = 1; i < TAMANO; i++){
        if(vector[i] > mayor){
            mayor = vector[i];
        }
    }
    return mayor;
}

int imprimirMenor(int vector[TAMANO]){
    int menor = vector[0];
    for (int i = 1; i < TAMANO; i++){
        if(vector[i] < menor){
            menor = vector[i];
        }
    }
    return menor;
}

int main(){
    int vector[TAMANO];
    int opcion;
    do{
        printf("\n1- Cargar el vector\n2- Mostrar el vector\n3- Imprimir el mayor\n4- Imprimir el menor\n5- Finalizar el programa\nDijite su opcion!!");
        scanf("%i", &opcion);
        switch(opcion){
        case 1:
            cargarVector(vector);
            break;
        case 2:
            mostrarVector(vector);
            break;
        case 3:
            printf("\n Es valor mayor del vector es: %i\n", imprimirMayor(vector));
            break;
        case 4:
            printf("\n Es valor menor del vector es: %i\n", imprimirMenor(vector));
            break;
    
        }
        
    } while(opcion != 5);
    

    getch();
    return 0;
}