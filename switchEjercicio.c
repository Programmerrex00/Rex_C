#include <stdio.h>
#include <conio.h>
#include <string.h>


int main(){
    int value1, value2;
    char character;
    printf("Ingrese el primer numero: ");
    scanf("%i", &value1);
    printf("Ingrese el segundo numero: ");
    scanf("%i", &value2);
    printf("Ingrese el signo para evaluar los dos numeros: (+,-,*,/)");
    scanf(" %c", &character); //Hay que correr un poco el %c a la derecha para que nos pueda tomar el dato char
    switch (character){
    case '+':
        printf("La suma de %i y %i es: %i", value1,value2, (value1+value2));
        break;
    case '-':
        printf("La resta de %i y %i es: %i", value1,value2, (value1-value2));
        break;
    case '*':
        printf("La multiplicacion de %i y %i es: %i", value1,value2, (value1*value2));
        break;
    case '/':
        printf("La division de %i y %i es: %i", value1,value2, (value1/value2));
        break;            
    default:
    printf("Signo Incorrecto!!!");
        break;
    }

    getch();
    return 0;
}