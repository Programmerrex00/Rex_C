#include <conio.h>
#include <stdlib.h>
#include <stdio.h>


void leer(){
    FILE *arch;
    arch = fopen("datos.txt", "rt");
    if (arch == NULL)
        exit(1);
    char caracter = fgetc(arch); 
    while(!feof(arch)){
        printf("%c", caracter);
        caracter = fgetc(arch);
    }
    fclose(arch);    
}

void leerBloquesDeCaracteres(){
        FILE *arch;
    arch = fopen("datos.txt", "rt");
    if (arch == NULL)
        exit(1);
    char linea[100]; 
    fgets(linea, 100, arch); //Lee caracteres mas eficiente ya que tiene un espacio reservado para 100 caracteres
    while (!feof(arch)){
        printf("%s", linea);
        fgets(linea, 100, arch);
    }
    fclose(arch);  
}

void cantidadVocales(){
    FILE *arch;
    arch = fopen("datos.txt", "rt");
    if(arch == NULL)
        exit(1);
    int cantidadVocaless = 0;
    char caracter = fgetc(arch);
    while(!feof(arch)){
        switch (caracter){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        cantidadVocaless++;
            break;
        }
        caracter = fgetc(arch);
    }
    printf("La cantidad de vocales que hay en el archivo es de: %i", cantidadVocaless);    
    fclose(arch);
}

void cantidadLineas(){
    FILE *arch;
    arch = fopen("datos.txt", "rt");
    if(arch == NULL)
        exit(1);
    int contador = 0;
    char linea[100]; 
    fgets(linea, 100, arch); 
    while (!feof(arch)){
        printf("%s", linea);
        contador++;
        fgets(linea, 100, arch);
    }

    //O tambien ubiera utilizado esto:Ç
    //     while (!feof(arch))
    // {
    //     if (caracter=='\n')
    //         cant++;
    //     caracter = fgetc(arch);
    // }

    printf("La cantidad de vocales que hay en el archivo es de: %i", contador);    
    fclose(arch);  
}

int main(){
    //leer();
    leerBloquesDeCaracteres();
    cantidadVocales();
    cantidadLineas();
    getch();
    return 0;
}