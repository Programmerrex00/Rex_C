#include <stdio.h>
#include <conio.h>


int main(){
    /*int valor1, valor2;
    int mayor = 0;
    printf("Ingrese el primer valor: ");
    scanf("%i", &valor1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &valor2);
    mayor = (valor1>valor2)? valor1:valor2;
    printf("El valor mayor es %i ", (valor1>valor2)? valor1:valor2);*/

    int valor1, valor2;
    int Operacion = 0;
    printf("Ingrese el primer valor: ");
    scanf("%i", &valor1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &valor2);
    Operacion = (valor1 == valor2)? valor1 + valor2: valor1 * valor2;
    printf("El resultado de la operacion es: %i", Operacion);

    getch();
    return 0;
}