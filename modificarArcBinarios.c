// "rb" Sólo lectura. El archivo debe existir previamente. Si no existe, fopen retorna NULL.
// "wb" Sólo escritura. Si el archivo no existía, lo crea. Si existía, destruye su contenido y lo abre vacío.
// "ab" Sólo escritura, pero en modo append (o sea: añadir): Los datos que se graban, lo hacen al final. Crea el archivo si no existía, y no destruye su contenido si ya existía.
// "r+b" Permite lectura y escritura. El archivo debe existir previamente.
// "w+b" Permite escritura y lectura. Crea el archivo si no existía, pero destruye su contenido si ya existía, y lo abre vacío.
// "a+b" Permite añadir al final, en modo lectura – escritura. Crea el archivo si no existía. No destruye su contenido si ya existía.


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void crear(){
    FILE *arch;
    arch = fopen("archivo4.dat", "wb");
    if(arch == NULL)
        exit(1);
    int int1 = 10;
    fwrite(&int1, sizeof(int), 1, arch);
    int int2 = 20;
    fwrite(&int2, sizeof(int), 1, arch);
    int int3 = 30;
    fwrite(&int3, sizeof(int), 1, arch);
    fclose(arch);
}


void modificarSegundoValor(){
    FILE *arch;
    arch = fopen("archivo4.dat", "r+b");
    if(arch == NULL)
        exit(1);
    int NewValue = 200;    
    fseek(arch, 4, SEEK_SET);
    fwrite(&NewValue, sizeof(int), 1, arch);
    fclose(arch);
}

void mostrar(){
    FILE *arch;
    arch = fopen("archivo4.dat", "r+b"); // o rb
    if(arch == NULL)
        exit(1);
    int int1, int3, int2;
    fread(&int1, sizeof(int), 1, arch);
    printf("Entero: %i\n", int1);
    fread(&int2, sizeof(int), 1, arch);
    printf("Entero: %i\n", int2);
    fread(&int3, sizeof(int), 1, arch);
    printf("Entero: %i\n", int3);    
}


int main(){
    crear();
    modificarSegundoValor();
    mostrar();
    getch();
    return 0;
}