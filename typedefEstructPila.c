#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>


struct nodo{
    int info;
    struct nodo *siguiente;
};
//Primero creamos un typedef que serie un alias para el puntero tipo nodo llamado 'comant'
typedef struct nodo * comant;

comant raiz = NULL;

void insertar(int valor){
    //Despues de definir el alias para el puntero de tipo nodo
    //La manera de declararlo es la siguiente para crear una variable
    //de tipo nodo, lo creamos sin el *
    comant nuevo;
    nuevo = malloc(sizeof(comant));
    nuevo->info = valor;
    if (raiz == NULL){
        raiz = nuevo;
        nuevo->siguiente = NULL;
    }else{
        nuevo->siguiente = raiz;
        raiz = nuevo;
    }
}

void imprimir(){
    comant recorrido = raiz;
    printf("Lista tipo Pila: ");
    while (recorrido != NULL){
        printf("%i ->", recorrido->info);
        recorrido = recorrido->siguiente;
    }
    if (raiz == NULL){
        printf("La pila esta vacia!!");
    }
    printf("\n");
}

int estraer(){
    if (raiz != NULL){
        int informacion = raiz->info;
        comant borrar = raiz;
        raiz = raiz->siguiente;
        free(borrar);
        return informacion;
    }else{
        return -1;
    }
}

void borrarPila(){
    comant recorrido = raiz;
    comant borrar;
    while (recorrido != NULL){
        borrar = recorrido;
        recorrido = recorrido->siguiente;
        free(borrar);    
    }
    raiz = NULL;
}

int cantidadNodos(){
    int cantidad = 0;
    comant recorrido = raiz;
    while (recorrido != NULL){
        cantidad++;
        recorrido = recorrido->siguiente;
    }
    return cantidad;
}

char* estaVaciaONo(){
    char* determinar = malloc(20 * sizeof(char));
    if(raiz == NULL){
        strcpy(determinar, "esta vacia!!!");
    }else{
        strcpy(determinar, "no esta vacia!!");
    }
    return determinar;
}

int main(){
    insertar(2);
    insertar(43);
    insertar(12);
    insertar(244);
    insertar(645);
    insertar(23);
    imprimir();
    estraer();
    imprimir();
    printf("La cantidad de nodos de la pila es: %i\n", cantidadNodos());
    char* result = estaVaciaONo();
    printf("La pila %s", result);
    free(result);
    borrarPila();
    getch();
    return 0;
}