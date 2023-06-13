#include <stdio.h>
#include <conio.h>


void intercambiarValores(int *puntero1, int *puntero2){
    int valorAux;
    valorAux = *puntero1;
    *puntero1 = *puntero2;
    *puntero2 = valorAux;
}




int main(){
    int var1 = 50, var2 = 60;
    intercambiarValores(&var1, &var2);   
    printf("El nuevo valor de var1 es de %i\n", var1);
    printf("El nuevo valor de var2 es de %i\n", var2);
}