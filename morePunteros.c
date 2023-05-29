#include <stdio.h>
#include <conio.h>

int main(){
    /*char c1 = 'A';
    char c2 = 'B';
    char *pc;
    pc = &c1;
    printf("El valor de c1 es: %c\n", c1);
    *pc = 'a';
    printf("El valor de c1 es: %c\n", c1);
    c1 = 'Z';
    printf("El valor de pc es: %c\n", *pc);
    pc = &c2;
    printf("El valor de pc es: %c\n", *pc);*/
    //------------------------------------------------------------
    /*int f;
    int *puntero;
    puntero = &f;
    for ( *puntero = 1; *puntero <= 10; *puntero += 1){
        printf("%i\n", f);
    }*/

    //-----------------------------------------------------------

    float z1, z2;
    float *puntero;
    puntero = &z1;
    *puntero = 10.2;
    puntero = &z2;
    *puntero = 20.90;
     printf("El valor de la variable z1 es: %0.2f\n", z1);
     printf("El valor de la variable z2 es: %0.2f", z2);

    getch();
    return 0;
}