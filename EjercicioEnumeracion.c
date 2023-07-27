#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//podemos inicializar el primer variable literal y con eso podemos cambiar la secuencia
// osea si colocarmos en sumar = 1, el siguiente sera igual a 2 y si cambiarmos en multiplicar
// a 5 el siguiente sera ingual a 6
enum operacion {SUMAR = 1, RESTAR, MULTIPLICAR = 5, DIVIDIR};

int operar(int v1, int v2, enum operacion op){
    switch (op){
    case SUMAR: return v1 + v2;
    case RESTAR: return v1 - v2;
    case MULTIPLICAR: return v1 * v2;
    case DIVIDIR: return v1 / v2;
    default:
        printf("La opcion no es valida!!");
        exit(1);
    }
}

int main(){
    int valor1 = 43, valor2 = 12;
    printf("La suma de %i y %i es: %i\n", valor1, valor2, operar(valor1, valor2, SUMAR));
    printf("La resta de %i y %i es: %i\n", valor1, valor2, operar(valor1, valor2, RESTAR));
    printf("La multiplicacion de %i y %i es: %i\n", valor1, valor2, operar(valor1, valor2, MULTIPLICAR));
    printf("La division de %i y %i es: %i\n", valor1, valor2, operar(valor1, valor2, DIVIDIR));
    printf("%i  %i  %i  %i", SUMAR, RESTAR, MULTIPLICAR, DIVIDIR);
    getch();
    return 0;
}