#include <stdio.h>
#include <conio.h>


int main(){
    int valor;
    for (int i = 0; i < 5; i++){
        printf("Ingree el %i valor: ", i+1);
        scanf("%i", &valor);
        if(valor > 5 || valor <= 0){
            continue;
        }
        switch(valor){
        case 1:
            printf("\nOne");
            break;
        case 2:
            printf("\nTwo");
            break;
        case 3:
            printf("\nThree");
            break;
        case 4:
            printf("\nFour");
            break;
        case 5:
            printf("\nFive");
            break;                
        }
        printf("\n");
    }
    

    getch();
    return 0;
}