#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    FILE *arch;
    arch=fopen("archivo2.dat","wb");
    if (arch==NULL)
        exit(1);
    int valInt1, valInt2;
    float valFlo1, valFlo2;
    printf("Ingrese el primer valor entero: ");
    scanf("%i", &valInt1);
    fwrite(&valInt1, sizeof(int), 1, arch);
    printf("Ingrese el segundo valor entero: ");
    scanf("%i", &valInt2);
    fwrite(&valInt2, sizeof(int), 1, arch);
    printf("Ingrese el primer valor Float: ");
    scanf("%f", &valFlo1);
    fwrite(&valFlo1, sizeof(float), 1, arch);
    printf("Ingrese el segundo valor Float: ");
    scanf("%f", &valFlo2);
    fwrite(&valFlo2, sizeof(float), 1, arch);
    fclose(arch);
    printf("Se creo un archivo binario con dos enteros y dos float!!");

    getch();
    return 0;
}