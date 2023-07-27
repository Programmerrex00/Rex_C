#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void cargar(){
    FILE *arch;
    arch = fopen("archivo6.dat", "wb");
    if(arch == NULL)
        exit(1);
    int value, contador = 0;    
    printf("Ingrese un valor: ");
    scanf("%i", &value);   
    do{
        contador++;
        fwrite(&contador, sizeof(int), 1, arch);
    } while (contador != value);
    fclose(arch);
}

void imprimir(){
    FILE *arch;
    arch = fopen("archivo6.dat", "rb");
    if(arch == NULL)
        exit(1);
    int value;
    printf("Los valores del archivo Binario son: ");
    fread(&value, sizeof(int), 1, arch);  
    while(!feof(arch)){
        printf("%i ", value);
        fread(&value, sizeof(int), 1, arch);
    }
    fclose(arch);
}



int main(){
    cargar();
    imprimir();
    getch();
    return 0;
}