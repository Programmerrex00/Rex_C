#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void cargar(){
    FILE *arch;
    arch = fopen("archivo7.dat", "wb");
    if(arch == NULL)
        exit(1);
    int int1 = 1, int2 = 2, int3 = 3;
    fwrite(&int1, sizeof(int), 1, arch);
    printf("Posicion del puntero del archivo luego de grabar un entero: %i\n", ftell(arch));
    fwrite(&int2, sizeof(int), 1, arch);    
    printf("Posicion del puntero del archivo luego de grabar un entero: %i\n", ftell(arch));
    fwrite(&int3, sizeof(int), 1, arch);    
    printf("Posicion del puntero del archivo luego de grabar un entero: %i\n", ftell(arch));
    fclose(arch);
}

void imprimir(){
    FILE *arch;
    arch = fopen("archivo7.dat", "rb");
    if(arch == NULL)
        exit(1);
    int int1;
    printf("Todos los datos almacenados: \n");
    fread(&int1, sizeof(int), 1, arch);
    while(!feof(arch)){
        printf("Dato: %i y posicion del puntero del archivo %i\n", int1, ftell(arch));
        fread(&int1, sizeof(int), 1, arch);
    }
    fclose(arch);
}

void tamanoBytes(){
    FILE *arch;
    arch = fopen("archivo7.dat", "rb");
    if(arch == NULL)
        exit(1);
    int tamano;
   fseek(arch, 0, SEEK_END);
   tamano = ftell(arch);
    printf("El tamano del archivo es: %i", tamano);    
    fclose(arch);
}

int main(){
    cargar();
    imprimir();
    tamanoBytes();
    getch();
    return 0;
}