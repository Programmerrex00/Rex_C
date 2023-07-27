#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void cargar(){
    FILE *arch;
    arch = fopen("archivo5.dat", "wb");
    if(arch == NULL)
        exit(1);
    int valor;
    do{
        printf("Ingrese un valor: ");
        scanf("%i", &valor);
        if(valor != 0)
            fwrite(&valor, sizeof(int), 1, arch);
    }while(valor != 0);
    fclose(arch);
}

void imprimir(){
    FILE *arch;
    arch = fopen("archivo5.dat", "rb");
    if(arch == NULL)
        exit(1);
    int valor;
    printf("Todos los valores del archivo Binario son: \n");
    fread(&valor, sizeof(int), 1, arch);
    while(!feof(arch)){ // La funcion feof devuelve 0 cuando hay mas archivos y 1 cuando se han acabado. Osea lo invertimos. Nos estara devolviendo varios 1s, luego de eso. cuando haya terminado nos devolvera un 1 y si lo invertimos es 0, y hay termina la funcion
        printf("%i ", valor);
        fread(&valor, sizeof(int), 1, arch);
    }
    fclose(arch);
}


int main(){
    cargar();
    imprimir();
    getch();
    return 0;
}