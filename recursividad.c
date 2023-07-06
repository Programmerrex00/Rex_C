#include <stdio.h>
#include <conio.h>



/*void repetir(){
    repetir();
}*/

/*void imprimir(int x){
    printf("%i ", x);
    imprimir(x - 1);
}*/


/*void imprimirUnoACinco(int x){
    if(x >= 1){
        printf("%i ", x);
        imprimirUnoACinco(x - 1);
    }
}*/

/*void imprimirCincoAUno(int x){
    if(x <= 5){
        printf("%i", x);
        imprimirCincoAUno(x + 1);
    }
}*/

//Factorial de un numero usando recursividad
int factorial_numero(int x){

    if(x > 1){
        int valor = x * factorial_numero(x - 1);
        return valor;
    }
  
}


int main(){
   printf("%i", factorial_numero(4)); 
    getch();
    return 0;
}
