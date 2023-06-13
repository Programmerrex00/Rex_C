#include <stdio.h>
#include <conio.h>

#define TAMANO 5
//aca lo que estamo haciendo es que resivimos como parametro un puntero 
// y guardamos cada elemento del arrray en el puntero ya que el array y el puntero son dos variables que apuntan a la memoria 
void cargarVector(int *puntero){
    for (int i = 0; i < TAMANO; i++){
        printf("Ingrese el %i elemento", i+1);
        scanf("%i", &*puntero++);
    }
}

void imprimirVector(int *puntero){
    for ( int i = 0; i < TAMANO; i++){
        printf("%i\n", *puntero++);
    }
    
}



int main(){
    int vector[TAMANO];
    cargarVector(vector);
    imprimirVector(vector);

    getch();
    return 0;
}