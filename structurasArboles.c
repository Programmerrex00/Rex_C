#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

    struct nodo {
        int informacion;
        struct nodo *izquierda;
        struct nodo *derecha;
    };

    struct nodo *raiz=NULL;

void insertar(int value){
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->informacion = value;
    nuevo->izquierda = NULL;
    nuevo->derecha = NULL;
    if(raiz == NULL){
        raiz = nuevo;
    }else{
        struct nodo *anterior, *recorrido = raiz;
        anterior = NULL;
        while(recorrido != NULL){
            anterior = recorrido;
            if(value < recorrido->informacion){
                recorrido = recorrido->izquierda;
            }else{
                recorrido = recorrido->derecha;
            }
        }
        if (value < anterior->informacion){
            anterior->izquierda = nuevo;
        }else{
            anterior->derecha = nuevo;
        }      
    }
}

void imprimerPre(struct nodo *recorrido){
    if(recorrido != NULL){
        printf("%i ", recorrido->informacion);
        imprimerPre(recorrido->izquierda);
        imprimerPre(recorrido->derecha);
    }
}

void imprimirIn(struct nodo *recorrido){
    if(recorrido != NULL){
        imprimirIn(recorrido->izquierda);
        printf("%i ", recorrido->informacion);
        imprimirIn(recorrido->derecha);
    }
}

void imprimirPost(struct nodo *recorrido){
    if(recorrido != NULL){
        imprimirPost(recorrido->izquierda);
        imprimirPost(recorrido->derecha);
        printf("%i ", recorrido->informacion);
    }
}

void clearTree(struct nodo *recorrido){
    if(recorrido != NULL){
        clearTree(recorrido->izquierda);
        clearTree(recorrido->derecha);
        free(recorrido);
    }
    
}


int main(){
    insertar(50);
    insertar(100);
    insertar(20);
    insertar(25);
    insertar(10);
    insertar(60);
    insertar(120);
    printf("El arbol Impreso en PreOrden es: \n");
    imprimerPre(raiz);
    printf("\n El arbol Impreso en InOrden es: \n");
    imprimirIn(raiz);
    printf("\n El arbol Impreso en PostOrden es: \n");
    imprimirPost(raiz);
    clearTree(raiz);
    getch();
    return 0;
}

