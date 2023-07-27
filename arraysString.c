#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TAMANO 7
#define LONGITUD 50

//Vamos a ver diferentes formas de declarar un string en C
int main(){
   /*char *array[2] = {"Hola","Man"};
    for (int i = 0; i < 2; i++){
        printf("%s ", array[i]);
    }*/
    char array_string[TAMANO][LONGITUD];
    for (int i = 0; i < TAMANO; i++){
        printf("Ingrese el %i dato: ", i+1);
        scanf("%s", array_string[i]);
    }

    for (int i = 0; i < TAMANO; i++){
        printf("%s ", array_string[i]);
    }
    


    getch();
    return 0;
}