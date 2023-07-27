#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
// para que su valor pueda modificarse y seguir la secuencia depues de cada llamado
// lo haremos antecediendole la palabra static, a diferencia de const, esta se podra modificar despues de cada llamada
void imprimir(){
   static int x = 0;
    x++;
    printf("%i ", x);
}

//Ejercicio usando variables statics,  por mi 
void adivinarNumero(){
    srand(time(NULL));
    const int numeroAdivinar = rand() % 100 + 1;
    static int valorIngresado;
    int contador = 0;
    do{
        printf("Ingrese un numero");
        scanf("%i", &valorIngresado);
        if (valorIngresado > numeroAdivinar){
            printf("Ingrese un valor menor\n");
        }else if(valorIngresado < numeroAdivinar){
            printf("Ingrese un valor mayor\n");
        }else{
            printf("Has Ganado!!");
            exit(1);
        }
        contador++;
    }while(contador != 3);
    printf("\nHas perdido :'(  el valor era %i", numeroAdivinar);
}


int verificarIntentos(){
    static int intentos = 3;
    intentos--;
    if(intentos == 0){
        printf("Has perdido, solo tenias 3 intentos!!");
        return 1;
    }
    return 0;
}

void juego(){
    srand(time(NULL));
    int valueRan = rand() % 100 + 1;
    int numero;
    do{
        printf("Ingrese un valor");
        scanf("%i", &numero);
        if(numero == valueRan){
            printf("Has ganado!!!");
            break;
        }
        if(numero > valueRan){
            printf("Ingrese un valor menor\n");
        }else{
            printf("Ingrese un valor mayor\n");
        }
        
        
    }while(verificarIntentos() == 0);
    
}


int proximoMulTwo(){
    static int tabla = 2;
    static int incremento = 1;

    return tabla * incremento++;
}


int main(){
    // imprimir();
    // imprimir();
    // imprimir();
    //adivinarNumero();
    for (int i = 0; i < 10; i++){
        printf("%i ", proximoMulTwo());
    }
    

    //juego();
    getch();
    return 0;
}