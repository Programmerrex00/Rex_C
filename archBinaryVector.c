#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define TAMANO 10

void cargar(){
    FILE *arch;
    arch = fopen("archivo8.dat", "wb");
    if(arch == NULL)
        exit(1);
    int vector[TAMANO] = {1,2,3,4,5,6,7,8,9,10};
    fwrite(vector, sizeof(int), TAMANO, arch);    
    fclose(arch);
}

void imprimir(){
    FILE *arch;
    arch = fopen("archivo8.dat", "rb");
    if(arch == NULL)
        exit(1);
    int vector[TAMANO];
    fread(vector, sizeof(int), TAMANO, arch);
    for (int i = 0; i < TAMANO; i++){
        printf("%i ", vector[i]);
    }
    fclose(arch);    
}

int main(){
    cargar();
    imprimir();
    getch();
    return 0;
}