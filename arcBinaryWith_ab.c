#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void crear(){
    FILE *arch;
    arch = fopen("archivo3.dat", "wb");
    if(arch == NULL)
        exit(1);
    int valor1 = 10;
    fwrite(&valor1, sizeof(int), 1, arch);
    int valor2 = 20;
    fwrite(&valor2, sizeof(int), 1, arch);
    int valor3 = 10;
    fwrite(&valor3, sizeof(int), 1, arch);
    fclose(arch);    
}

void agregar(){
    FILE *arch;
    arch = fopen("archivo3.dat", "ab");
    if(arch == NULL)    
        exit(1);
    float f1 = 5.45;
    fwrite(&f1, sizeof(float), 1, arch);
    fclose(arch);    
}

void imprimir(){
    FILE *arch;
    arch = fopen("archivo3.dat", "rb");
    if(arch == NULL)
        exit(1);
    int v1, v2, v3;
    fread(&v1, sizeof(int), 1, arch);
    printf("entero: %i\n", v1);
    fread(&v2, sizeof(int), 1, arch);
    printf("entero: %i\n", v2);
    fread(&v3, sizeof(int), 1, arch);
    printf("entero: %i\n", v3);
    float f1;
    fread(&f1, sizeof(float), 1, arch);
    printf("float: %0.2f\n", f1);
    fclose(arch);
}


int main(){
    crear();
    agregar();
    imprimir();
    getch();
    return 0;
}