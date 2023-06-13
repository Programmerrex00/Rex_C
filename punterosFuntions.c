#include <stdio.h>
#include <conio.h>


/*int cargarDireccionDeVariables(int *puntero1, int *puntero2){
    *puntero1 = 1999;
    *puntero2 = 2000;
    return *puntero1 + *puntero2;
}*/

void cargarDireccionIncremento(int *incremento){
    (*incremento)++;
    //*incremento += 1; cualquier de las dos opciones es valida.
}


int main(){
    /*int variableOne, variableTwo;
    int resultado;
    resultado =  cargarDireccionDeVariables(&variableOne, &variableTwo);
    printf("El valor de Var1 es: %i \n El valor de Var2 es: %i\n Resultado de la suma de las dos variables: %i", variableOne, variableTwo, resultado);*/

    int incremento;
    cargarDireccionIncremento(&incremento);
    printf("Incremento: %i\n", incremento);
    cargarDireccionIncremento(&incremento);
    printf("Incremento: %i\n", incremento);
    cargarDireccionIncremento(&incremento);
    printf("Incremento: %i\n", incremento);
    cargarDireccionIncremento(&incremento);
    printf("Incremento: %i", incremento);
    
    getch();
    return 0;
}