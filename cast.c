#include <stdio.h>
#include <conio.h>


int main(){
    int notas, total = 0;
    for (int i = 0; i < 3; i++){
        printf("Ingrese la %i nota", i+1);
        scanf("%i", &notas);
        total += notas;
    }
    float promedio = (float) (total) / 3;
    printf("\nLa nota total es: %0.2f", promedio);
    

    getch();
    return 0;
}