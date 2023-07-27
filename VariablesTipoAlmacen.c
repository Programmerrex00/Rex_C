#include <stdio.h>
#include <conio.h>


int main(){
    printf("Bytes requeridos para tipo char: %i\n", sizeof(char));
    printf("Bytes requeridos para tipo short: %i\n", sizeof(short int));
    printf("Bytes requeridos para tipo int: %i\n", sizeof(int));
    printf("Bytes requeridos para tipo long int: %i\n", sizeof(long int));
    printf("Bytes requeridos para tipo long long int: %i\n\n", sizeof(long long int));

    //Datos decimales
    printf("Bytes requeridos para tipo float: %i\n", sizeof(float));
    printf("Bytes requeridos para tipo double: %i\n", sizeof(double));
    printf("Bytes requeridos para tipo long double: %i\n", sizeof(long double));
    getch();
    return 0;
}