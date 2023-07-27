#include <stdio.h>
#include <conio.h>
#include <string.h>



int main(){
    char palabra[50];
    int vocales = 0, consonantes = 0;
    printf("Ingrese la palabra");
    gets(palabra);
    for (int i = 0; i < strlen(palabra); i++){
        switch (palabra[i]){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        vocales++;
        break;
        default:
        consonantes++;
        }
    }
    printf("\nLa cantidad de vocales que tiene la palabra %s es %i y consonantes: %i", palabra, vocales, consonantes);
    

    getch();
    return 0;
}