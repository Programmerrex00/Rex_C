#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    FILE *arch;
    arch = fopen("archivo2.dat", "rb");
    if(arch == NULL)
        exit(1);
    float valFlo1, valFlo2;
    fseek(arch, 8, SEEK_SET);
    fread(&valFlo1, sizeof(float), 1, arch);
    printf("Float: %0.2f\n", valFlo1);
   // fseek(arch, 12, SEEK_SET);
    //fseek(arch, 0, SEEK_CUR);
    //Puedo utilizar cualquiera de los de arriba, o sino lo puedo dejar sin fseek
    fread(&valFlo2, sizeof(float), 1, arch);
    printf("float: %0.2f\n", valFlo2); 
    fclose(arch);
    getch();
    return 0;
}
