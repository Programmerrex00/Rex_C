#include <stdio.h>
#include <conio.h>

#define FILAS 3
#define COLUMNAS 3

//El comando goto lo que hace es salir directamente del lugar donde este
//Asi sea que este anidado entre 3 for, sale inmediatamente


void cargar(int matriz[FILAS][COLUMNAS]){
    for (int i = 0; i < FILAS; i++){
        for (int j = 0; j < COLUMNAS; j++){
               printf("Ingrese el elemento: [%i][%i]", i,j);
               scanf("%i", &matriz[i][j]);
               if(matriz[i][j] == 0){
                    goto salir;
               }    
        }
    }
    return;
    salir: printf("Recuerde que si ingresa un 0, finalizara la carga de elementos!!!\n");
}

void imprimir(int matriz[FILAS][COLUMNAS]){
    for (int i = 0; i < FILAS; i++){
        for (int j = 0; j < COLUMNAS; j++){
            printf("[%i]", matriz[i][j]);
        }
        printf("\n");
    }
    
}

int main(){
    int matriz[FILAS][COLUMNAS]={{0,0,0},
                                 {0,0,0},
                                 {0,0,0}};
    cargar(matriz);
    imprimir(matriz);
    getch();
    return 0;
}