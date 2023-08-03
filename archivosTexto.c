#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

void crear(){
    FILE *arch;
    arch = fopen("datos.txt", "wt");
    if (arch == NULL)
        exit(1);
    fputs("Primera linea\n", arch);
    fputs("Segunda linea\n", arch);
    fputs("Tercera linea\n", arch);
    fputs("a\n", arch);
    fclose(arch);
    printf("Se creo el archivo de texto exitosamente!!\n");
}

void leer(){
    FILE *arch;
    arch = fopen("datos.txt", "rt");
    if (arch == NULL)
        exit(1);
    char caracter = fgetc(arch); // o fgets
    while(!feof(arch)){
        printf("%c", caracter);
        caracter = fgetc(arch);
    }
    fclose(arch);    
}

int main(){
    crear();
    leer();

    getch();
    return 0;
}




// #include <stdio.h>
// int main ( ){
//     FILE *fin, *fout;
// char c, x;
// if (((fin = fopen("DATOSIN.DAT", "rt")) == NULL) ||
//  ((fout = fopen("DATOSOUT.DAT" , "wt")) == NULL)){ 
//     if (fout != NULL) 
//     fclose (fout) ;
// if (fin != NULL) 
// fclose (fin) ;
// printf ("Error en la apertura de ficheros de salida \n" );
// return 1;
//  }


// c = fgetc(fin);
// while (c != EOF){
//      x = fputc (c, fout);
// if (x != c) 
// printf ("Error de escritura");
// c = fgetc(fin);
// }


// fclose (fin);
// fclose (fout);
// return 0;
// }