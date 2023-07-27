#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

extern tnodo raiz;

//No es obligatorio extern, pero para mejores practicas se lo incluimos. para tener una variable global para todos los archivos
// Es decir que compartann el mismo espacio en memoria para esa variable
void insertar(int x){
    tnodo nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->info = x;
    if(raiz == NULL){
        raiz = nuevo;
        nuevo->siguiente = NULL;
    }else{
        nuevo->siguiente = raiz;
        raiz = nuevo;
    }
}

void imprimir(){
    tnodo recorrido = raiz;
    printf("Lista completa\n");
    while(recorrido != NULL){
        printf("%i ", recorrido->info);
        recorrido = recorrido->siguiente;
    }
    printf("\n");
}


int extraer(){
    if(raiz != NULL){
        int informacion = raiz->info;
        tnodo bor = raiz;
        raiz = raiz->siguiente;
        free(bor);
        return informacion;
    }else{
        return -1;
    }
}


void liberar(){
    tnodo reco = raiz;
    tnodo bor;
    while(reco != NULL){
        bor = reco;
        reco = reco->siguiente;
        free(bor);
    }
}