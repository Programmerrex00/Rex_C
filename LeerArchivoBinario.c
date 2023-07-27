#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    FILE *arch;
    arch = fopen("archivo1.dat", "rb");
    if (arch == NULL)
        exit(1);
    char c;
    fread(&c, sizeof(char), 1, arch);
    printf("Character: %c\n", c);
    int valor1;
    fread(&valor1, sizeof(int), 1, arch);
    printf("Entero: %i\n",valor1);
    float valor2;
    fread(&valor2, sizeof(float), 1, arch);
    printf("Float: %0.2f\n", valor2);
    fclose(arch);
    getch();
    return 0;
}

