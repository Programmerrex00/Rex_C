#include <stdio.h>
#include <conio.h>


int main(){
    int valor;
    printf("Ingrese un valor");
    scanf("%i", &valor);
    switch (valor){
    case 1:
        printf("The value is One");
        break;
    case 2:
        printf("The value is Two");
        break;
    case 3:
        printf("The value is Three");
        break;        
    case 4:
        printf("The value is Four");
        break;
    case 5:
        printf("The value is Five");
        break;    
    default:
        printf("The value is out of range");
        break;
    }

    getch();
    return 0;
}