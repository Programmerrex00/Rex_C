// SEEK_SET Reposicionar comenzando desde el principio del archivo (es lo mismo poner un 0), Siempre hay que estar en la primera posicion del dato primitivo
// SEEK_CUR Reposicionar comenzando desde la posición actual del puntero de archivo (es lo mismo poner un 1)
// SEEK_END Reposicionar comenzando desde el final del archivo (es lo mismo poner un 2)

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
     FILE *arch;

    //USANDO SEEK_SET
    // arch = fopen("archivo1.dat", "rb");
    // if(arch == NULL)
    //     exit(1);
    // fseek(arch, 5, SEEK_SET);
    // float v2;
    // fread(&v2, sizeof(float), 1, arch);
    // printf("Float: %0.2f\n", v2);    

    //USANDO SEEK_CUR 
    arch = fopen("archivo1.dat", "rb");
    if(arch == NULL)
        exit(1);
    char c;
    fread(&c, sizeof(char), 1, arch);
    printf("caracter: %c\n", c);
    fseek(arch, 4, SEEK_CUR);
    float v2;
    fread(&v2, sizeof(float), 1, arch);
    printf("float: %0.2f\n", v2);

    fclose(arch);
    getch();
    return 0;
}
