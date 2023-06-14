#include <stdio.h>
#include <conio.h>

#define SALTO "\n"


struct pais{
    char nombre[40];
    int cantidadHabitantes;
};

void cargarDatosDelPais(struct pais *country){
    printf("Ingrese el nombre del pais: ");
    gets((*country).nombre);
    printf("Ingrese la cantidad de los habitantes: ");
    scanf("%i", &country->cantidadHabitantes);
    fflush(stdin);
    printf(SALTO);
}

void mostrarDatos(struct pais country){
    printf("Nombre: %s\n", country.nombre);
    printf("Cantidad de Habitantes: %i\n", country.cantidadHabitantes);
}
 
 
int main(){
    struct pais country1, country2, country3;
    cargarDatosDelPais(&country1);
    mostrarDatos(country1);
    cargarDatosDelPais(&country2);
    mostrarDatos(country2);
    cargarDatosDelPais(&country3);
    mostrarDatos(country3);
}   