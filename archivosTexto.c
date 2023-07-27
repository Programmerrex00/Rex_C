#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

void crear(){
    FILE *arch;
    arch = fopen("datos.txt", "wt");
    if (arch == NULL)
        exit(1);
    fputs("Primera linea\n", arch);
    fputs("Segunda linea\n", arch);
    fputs("Tercera linea\n", arch);
    fputs("a\n", arch);
    fclose(arch);
    printf("Se creo el archivo de texto exitosamente!!\n");
}

void leer(){
    FILE *arch;
    arch = fopen("datos.txt", "rt");
    if (arch == NULL)
        exit(1);
    char caracter = fgetc(arch); // o fgets
    while(!feof(arch)){
        printf("%c", caracter);
        caracter = fgetc(arch);
    }
    fclose(arch);    
}

int main(){
    crear();
    leer();

    getch();
    return 0;
}