#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct nodo{
    int informacion;
    struct nodo *siguiente;
};

struct nodo *raiz = NULL;
struct nodo *cola = NULL;


int vacio(){
    if(raiz == NULL){
        return 1;
    }else{
        return 0;
    }
}

void insertar(int value){
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->informacion = value;
    nuevo->siguiente = NULL;
    if(vacio()){
        raiz = nuevo;
        cola = nuevo;
    }else{
        cola->siguiente = nuevo;
        cola = nuevo;
    }
}

int extraer(){
    if(!vacio()){
        int valor = raiz->informacion;
        struct nodo *borrar = raiz;
        if(raiz == cola){
            raiz = NULL;
            cola = NULL;
        }else{
            raiz = raiz->siguiente;
        }
        free(borrar);
        return valor;
    }else{
        return -1;
    }
}


void imprimir(){
    struct nodo *recorrido = raiz;
    printf("\nLa cola es: \n");
    while (recorrido != NULL){
        printf("%i ", recorrido->informacion);
        recorrido = recorrido->siguiente;
    }
    printf("\n");
}

void clearCola(){
    struct nodo *recorrido = raiz;
    struct nodo *borrar;
    while (recorrido != NULL){
        borrar = recorrido;
        recorrido = recorrido->siguiente;
        free(borrar);
    }
    
}

int main(){
    insertar(100);
    insertar(130);
    insertar(190);
    imprimir();
    printf("Dato extraido: %i", extraer());
    imprimir();
    clearCola();

    getch();
    return 0;
}