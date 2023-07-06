#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct nodo {
    int informacion;
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
       printf("%i\n", recorrido->informacion);
       recorrido = recorrido->siguiente;
    }
    printf("\n");   
}


void insetar(int value){
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->informacion = value;
    nuevo->siguiente = NULL;
    if(raiz == NULL){
        raiz = nuevo;
    }else{
        if(value < raiz->informacion){
            nuevo->siguiente = raiz;
            raiz = nuevo;
        }else{
            struct nodo *antes = raiz;
            struct nodo *despues = raiz;
            while (value >= despues->informacion && despues->siguiente != NULL){
                antes = despues;
                despues = despues->siguiente;
            }
            if(value >= despues->informacion){
                despues->siguiente = nuevo;
            }else{
                antes->siguiente = nuevo;
                nuevo->siguiente = despues;
            }
            
        }
    }

}




int main(){
    insetar(213);
    insetar(21);
    insetar(1);
    insetar(3);
    insetar(999);
    imprimir();

    clearLista();
    getch();
    return 0;
}