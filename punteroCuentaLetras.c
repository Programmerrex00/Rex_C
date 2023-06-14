#include <stdio.h>
#include <conio.h>

#define TAMANOCARACTERES 40


int pedirPalabra(char *puntero){
    int tamano = 0;
    while (*puntero++ != '\0'){
        tamano++;
    }
    

    return tamano;
}


int main(){
    int tamano = 0;
    char palabra[TAMANOCARACTERES];
    printf("Ingrese la palabra: ");
    gets(palabra);
    tamano = pedirPalabra(palabra);
    printf("\nLos caracteres que tiene la palabra son de: %i", tamano);


    getch();
    return 0;
}