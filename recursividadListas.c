#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct nodo {
    int informacion;
    struct nodo *siguiente;
};

struct nodo *raiz = NULL;


void insertarPrimero(int value){
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->informacion = value;
    nuevo->siguiente = raiz;
    raiz = nuevo;
}

void clearList(){
    struct nodo *recorrido = raiz;
    struct nodo *borrar;
    while(recorrido != NULL){
        borrar = recorrido;
        recorrido = recorrido->siguiente;
        free(borrar);
    }
}

void imprimir(struct nodo *recorrido){
    if(recorrido != NULL){
        imprimir(recorrido->siguiente);
        printf("%i ", recorrido->informacion);
    }
}


int main(){
    insertarPrimero(23);
    insertarPrimero(38);
    insertarPrimero(14);
    imprimir(raiz);

    clearList();
    getch();
    return 0;
}