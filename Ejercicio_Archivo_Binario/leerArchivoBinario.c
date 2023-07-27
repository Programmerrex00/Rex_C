#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    FILE *arch;
    arch = fopen("archivo2.dat", "rb");
    if(arch == NULL)
        exit(1);
    int valInt1, valInt2;
    fread(&valInt1, sizeof(int), 1, arch);
    printf("value entero 1: %i\n", valInt1);
    fread(&valInt2, sizeof(int), 1, arch);
    printf("value entero 2: %i\n", valInt2);
    float valFlo1, valFlo2;
    fread(&valFlo1, sizeof(float), 1, arch);
    printf("value float: %0.2f\n", valFlo1);
    fread(&valFlo2, sizeof(float), 1, arch);
    printf("value float: %0.2f\n", valFlo2);
    fclose(arch);
    getch();
    return 0;
}