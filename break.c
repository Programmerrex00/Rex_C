#include <stdio.h>
#include <conio.h>


int main(){
    int suma = 0;
    int value = 0;
    for (int i = 0; i < 10; i++){
        printf("\n Ingrese el %i valor: ", i+1);
        scanf("%i", &value);
        suma += value;
        if(value == 0){
            break;
        }
        printf("Suma: %i", suma);
    }
    


    getch();
    return 0;
}