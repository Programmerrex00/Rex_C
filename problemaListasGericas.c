#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct nodo {
    char usuario[51];
    struct nodo *siguiente;
};

struct nodo *raiz = NULL;

void clearLista(){
    struct nodo *recorrido = raiz;
    struct nodo *borrar;
    while (recorrido != NULL){
        borrar = recorrido;
        recorrido = recorrido->siguiente;
        free(borrar);
    }
}

int vacia(){
    if (raiz == NULL)
        return 1;
    else
        return 0;   
}

void imprimir(){
    struct nodo *recorrido = raiz;
    printf("\nLa lista es:\n");
    while(recorrido != NULL){
       printf("%s\n", recorrido->usuario);
       recorrido = recorrido->siguiente;
    }
    printf("\n");   
}

void insetar(char value[51]){
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    strcpy(nuevo->usuario, value);
    nuevo->siguiente = NULL;
    if(raiz == NULL){
        raiz = nuevo;
    }else{
        if(strcmp(value, raiz->usuario) < 0){
            nuevo->siguiente = raiz;
            raiz = nuevo;
        }else{
            struct nodo *antes = raiz;
            struct nodo *despues = raiz;
            while(strcmp(value,despues->usuario) >= 0 && despues->siguiente != NULL){
                antes = despues;
                despues = despues->siguiente;
            }
            if(strcmp(value,despues->usuario) >= 0){
                despues->siguiente = nuevo;
            }else{
                antes->siguiente = nuevo;
                nuevo->siguiente = despues;
            }
            
        }
    }
}



int main(){
    insetar("rex");
    insetar("ana");
    insetar("blu");
    insetar("maicol");
    imprimir();

    getch();
    return 0;
}