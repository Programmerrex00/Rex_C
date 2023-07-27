#include <stdio.h>
#include <conio.h>

struct persona{
    char nombre[50];
    int edad;
};


int main(){
    const short int v1 = 30000;
    const int v2 = 200000000;
    const long int v3 = 2000000000;
    const long long int v4 = 20000000000;
    const float r1 = 10.55;
    const double r2 = 100.99;
    const char l1 = 'A';
    const char titulo[7] = "Inicio";
    const struct persona per1 = {"Maicol",10};


    printf("Una constante short int: %i\n", v1);
    printf("Una constante int: %i\n", v2);
    printf("Una constante long int: %li\n", v3);
    printf("Una constante long long int: %lli\n", v4);
    printf("Una constante float: %0.2f\n", r1);
    printf("Una constante double: %0.2f\n", r2);
    printf("Una constante char Caracter: %c\n", l1);
    printf("Una constante cadena de caracteres: %s\n",titulo);
    printf("Una constante de tipo registro con dos campos: %s, %i",per1.nombre,per1.edad);

    getch();
    return 0;
}