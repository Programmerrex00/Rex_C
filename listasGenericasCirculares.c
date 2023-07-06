#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct nodo{
    int informacion;
    struct nodo *siguiente;
    struct nodo *anterior;
};

struct nodo *raiz = NULL;

void liberar(){
    if (raiz != NULL){
        struct nodo *recorrido = raiz->siguiente;
        struct nodo *borrar;
        while(recorrido != raiz){
            borrar = recorrido;
            recorrido = recorrido->siguiente;
            free(borrar);
        }
        free(raiz);   
    }
}

int vacia(){
    if(raiz == NULL)
        return 1;
    else    
        return 0;   
}

void insertarPrimero(int value){
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->informacion = value;
    if(raiz == NULL){
        nuevo->siguiente = nuevo;
        nuevo->anterior = nuevo;
        raiz = nuevo;
    }else{
        struct nodo *ultimo = raiz->anterior;
        nuevo->siguiente = raiz;
        nuevo->anterior = ultimo;
        raiz->anterior = nuevo;
        ultimo->siguiente = nuevo;
        raiz = nuevo;
    }
}

void insertarUltimo(int value){
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->informacion = value;
    if(raiz == NULL){
        nuevo->siguiente = nuevo;
        nuevo->anterior = nuevo;
        raiz = nuevo;
    }else{
        struct nodo *ultimo = raiz->anterior;
        nuevo->siguiente = raiz;
        nuevo->anterior = ultimo;
        raiz->anterior = nuevo;
        ultimo->siguiente = nuevo;
    }
}




int cantidad(){
    int cantidad = 0;
    if(!vacia()){
        struct nodo *recorrido = raiz;
        do{
            cantidad++;
            recorrido = recorrido->siguiente;
        } while(recorrido != raiz);
        
    }
    return cantidad;
}

void insertarEnCualquierPosicion(int posicion, int value){
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->informacion = value;
    if(raiz == NULL){
         nuevo->siguiente = nuevo;
        nuevo->anterior = nuevo;
        raiz = nuevo;
    }else if(posicion == 1){
        struct nodo *ultimo = raiz->anterior;
        nuevo->siguiente = raiz;
        nuevo->anterior = ultimo;
        raiz->anterior = nuevo;
        ultimo->siguiente = nuevo;
        raiz = nuevo;
    }else if( posicion == cantidad() + 1){
        struct nodo *ultimo = raiz->anterior;
        nuevo->siguiente = raiz;
        nuevo->anterior = ultimo;
        raiz->anterior = nuevo;
        ultimo->siguiente = nuevo;
    }else{
        struct nodo *anterior = raiz;
        for (int i = 1; i <= posicion - 2; i++){
            anterior = anterior->siguiente;
        }
        struct nodo *despues = anterior->siguiente;
        nuevo->anterior = anterior;
        anterior->siguiente = nuevo;
        nuevo->siguiente = despues;
        despues->anterior = nuevo;
    }
}



void imprimir(){
    if(!vacia()){
        struct nodo *recorrido = raiz;
        do{
            printf("%i ", recorrido->informacion);
            recorrido = recorrido->siguiente;
        }while(recorrido != raiz);
        printf("\n");
    }
}

void imprimirCircular(){
    if(!vacia()){
        struct nodo *recorrido = raiz;
        for (int i = 0; i < cantidad() + 1; i++){
            printf("%i ", recorrido->informacion);
            recorrido = recorrido->siguiente;
        }
        printf("\n");
    }
}

void borrar(int posicion){
    if(posicion <= cantidad()){
        if(posicion == 1){
            if(cantidad() == 1){
                free(raiz);
                raiz = NULL;
            }else{
                struct nodo *borrar = raiz;
                struct nodo *ultimo = raiz->anterior;
                raiz = raiz->siguiente;
                ultimo->siguiente = raiz;
                raiz->anterior = ultimo;
                free(borrar);
            }
        }else{
            struct nodo *recorrido = raiz;
            for (int i = 0; i < posicion - 1; i++){
                recorrido = recorrido->siguiente;
            }
            struct nodo *borrar = recorrido;
            struct nodo *anterior = recorrido->anterior;
            recorrido = recorrido->siguiente;
            anterior->siguiente = recorrido;
            recorrido->anterior = anterior;
            free(borrar);
        }
    }
}




int main(){
    insertarPrimero(1);
    insertarPrimero(2);
    insertarPrimero(3);
    insertarUltimo(22);
    imprimirCircular();
    insertarEnCualquierPosicion(2, 999);
    imprimirCircular();
    liberar();
    getch();
    return 0;
}

