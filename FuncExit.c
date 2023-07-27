#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void ingresoClave(){
    char clave[50];
    int contador = 0;
    do{
        if(contador == 3){
            exit(1);
        }
        printf("Ingrese la %i oportunidad", contador+1);
        gets(clave);
        contador++;
    }while(strcmp(clave,"123456789") != 0);
}

int main(){
    ingresoClave();
    printf("BRO, BIENVENIDO!!!");
    getch();
    return 0;
}