#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

#define TAMANO 4
#define SALTO "\n"

struct libro{
    int codigo;
    char titulo[40];
    char autor[40];
};

void cargarVector(struct libro librito[TAMANO])
{
    for (int i = 0; i < TAMANO; i++){
        printf("Ingrese el codigo del %i libro: ", i + 1);
        scanf("%i", &librito[i].codigo);
        printf("Ingrese el titulo del %i libro: ", i + 1);
        fflush(stdin);
        gets(librito[i].titulo);
        fflush(stdin);
        printf("Ingrese el autor del %i libro: ", i + 1);
        gets(librito[i].autor);
        printf(SALTO);
        fflush(stdin);
    }
}

void imprimirVectorDeStructs(struct libro librito[TAMANO]){
    for (int i = 0; i < TAMANO; i++){
        printf("Codigo: %i \t Descripcion: %s \t autor: %s \n", librito[i].codigo, librito[i].titulo, librito[i].autor);
    }
}

void validarTitulosDeAutores(struct libro librito[TAMANO]){
    char nombre[40];
    int contador = 0;
    printf("Ingrese el nombre del autor, para ver los libros que tiene: ");
    gets(nombre);
    for (int i = 0; i < TAMANO; i++){
        if(strcmp(nombre, librito[i].autor) == 0){
            printf("El autor %s ha escrito los titulos: %s \n", nombre, librito[i].titulo);
            contador++;
        }
    }
    if(contador == 0){
        printf("Este autor no tienen ningun libro!!!");
    }
}


int main(){
    struct libro libritos[TAMANO];
    cargarVector(libritos);
    imprimirVectorDeStructs(libritos);
    validarTitulosDeAutores(libritos);
}