#include <stdio.h>
#include <conio.h>

#define TAMANO 5    

/*void pedirDatos(float *puntero){
    for (int i = 0; i < TAMANO; i++){
        printf("Ingrese el %i elemento: ", i+1);
        scanf("%f", &puntero[i]);
        printf("\n");
    }
}

void imprimirVector(float *puntero){
    for (int i = 0; i < TAMANO; i++){
        printf("%0.3f\n", puntero[i]);  
        
    }
    
}*/


//-----------------------------------------------------------

//cuando queremos volver un puntero un array de string, lo que vamos hacer es en los parametros de la funcion
//poner la sintaxis de la siguiente manera: char (*puntero)[40], y para capturar los datos lo que vamos hacer es 
// poner scanf, no lo haremos con gets, lo haremos con scanf("%s", puntero[i])
//para imprimir la funcion, si lo haremos normal con su respectivo printf("%s", puntero[i]) 

void llenarVector(char (*puntero)[40]){
    for (int i = 0; i < TAMANO; i++){
        printf("Ingrese el %i pais", i+1);
        scanf("%s", puntero[i]);
        printf("\n");
    }
}

void imprimirPaises(char (*puntero)[40]){
    for (int i = 0; i < TAMANO; i++){
        printf("%s\n", puntero[i]);
    }
}



int main(){
    /*float vector[TAMANO];
    pedirDatos(vector);
    imprimirVector(vector);*/
    //-------------------------------------------------------
    char vectorPaises[TAMANO][40];
    llenarVector(vectorPaises);
    imprimirPaises(vectorPaises);



    getch();
    return 0;
}