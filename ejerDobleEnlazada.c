#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct nodo {
    int informacion;
    struct nodo *siguiente;
    struct nodo *anterior;
};

struct nodo *raiz = NULL;

void ClearLista(){
    struct nodo *recorrido = raiz;
    struct nodo *borrar;
    while(recorrido != NULL){
        borrar = recorrido;
        recorrido = recorrido->siguiente;
        free(borrar);
    }
}

int vacia(){
    if(raiz == NULL)
        return 1;
    else
        return 0;   
}

int cantidad(){
    struct nodo *recorrido = raiz;
    int cantidad = 0;
    while(recorrido != NULL){
        cantidad++;
        recorrido = recorrido->siguiente;
    }
    return cantidad;
}

void imprimir(){
    struct nodo *recorrido = raiz;
    printf("\n Lista completa: \n");
    while(recorrido != NULL){
        printf("%i ", recorrido->informacion);
        recorrido = recorrido->siguiente;
    }
    printf("\n");
}

void imprecionInversa(){
     struct nodo *recorrido = raiz;
    while(recorrido->siguiente != NULL){
        recorrido = recorrido->siguiente;
    }
    printf("\n Lista completa de forma Inversa: \n");
    while(recorrido != NULL){
        printf("%i ", recorrido->informacion);
        recorrido = recorrido->anterior;
    }
    printf("\n");
}


void insertarPrincipio( int value){
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->informacion = value;
    nuevo->siguiente = NULL;
    nuevo->anterior = NULL;
    nuevo->siguiente = raiz;
    if(raiz != NULL){
        raiz->anterior = nuevo;
    }
    raiz = nuevo;
}

void insertarFinal(int value){
    struct nodo *nuevo;
    struct nodo *recorrido = raiz;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->informacion = value;
    nuevo->siguiente = NULL;
    nuevo->anterior = NULL;
    while(recorrido->siguiente != NULL){
        recorrido = recorrido->siguiente;
    }
    recorrido->siguiente = nuevo;
    nuevo->anterior = recorrido;
}

void insertarEnLaSegundaPosicion(int value){
    if(!vacia() && cantidad() >= 2){
        struct nodo *nuevo;
        struct nodo *siguiente = raiz->siguiente;
        nuevo = malloc(sizeof(struct nodo));
        nuevo->informacion = value;
        raiz->siguiente = nuevo;
        nuevo->anterior = raiz;
        nuevo->siguiente = siguiente;
        siguiente->anterior = nuevo;
    }     
}

void insertarEnLaAntepenultima(int value){
    if(!vacia() && cantidad() >= 2){
        struct nodo *nuevo;
        struct nodo *antes = raiz;
        nuevo = malloc(sizeof(struct nodo));
        nuevo->informacion = value;

        for (int i = 0; i < cantidad() - 2; i++){
            antes = antes->siguiente;
        }
        struct nodo *despues = antes->siguiente;
        antes->siguiente = nuevo;
        nuevo->anterior = antes;
        nuevo->siguiente = despues;
        despues->anterior = nuevo;
    }
}

void eliminarPrimerNodo(){
    struct nodo *borrar;
    borrar = raiz;
    raiz = raiz->siguiente;
    if(raiz != NULL){
        raiz->anterior = NULL;
    }
    free(borrar);
}

void eliminarSegundoNodo(){
    struct nodo *borrar = raiz->siguiente;
    struct nodo *antes = raiz;
    antes->siguiente = borrar->siguiente;
     free(borrar);
}

void eliminarUltimoNodo(){
    struct nodo *borrar;
    struct nodo *recorrido = raiz;
    for (int i = 1; i <= cantidad() - 2; i++){
        recorrido = recorrido->siguiente;
    }
    struct nodo *nodoEliminar = recorrido->siguiente;
    borrar = nodoEliminar;
    recorrido->siguiente = nodoEliminar->siguiente;
    struct nodo *siguiente = nodoEliminar->siguiente;
    if(siguiente != NULL){
        siguiente->anterior = recorrido;
    }

    free(borrar);
}





void eliminarMayorInformacion(){
    int contador = 1, pos = contador, mayor = raiz->informacion;
    struct nodo *recorrido = raiz->siguiente;
    while(recorrido != NULL){
        contador++;
        if(recorrido->informacion > mayor){
            mayor = recorrido->informacion;
            pos = contador;
        }
        
        recorrido = recorrido->siguiente;
    }


    struct nodo *borrar;
    if(pos == 1){
        borrar = raiz;
        raiz = raiz->siguiente;
        if(raiz != NULL){
            raiz->anterior = NULL;
        }
    }else{
        struct nodo *recorrido = raiz;
        for (int i = 1; i <= pos-2; i++){
            recorrido = recorrido->siguiente;
        }
            struct nodo *nodoEliminar = recorrido->siguiente;
            borrar = nodoEliminar;
            recorrido->siguiente = nodoEliminar->siguiente;
            struct nodo *siguiente = nodoEliminar->siguiente;
            if(siguiente != NULL){
                siguiente->anterior = recorrido;
            } 
    }
    free(borrar);
    
}




int main(){
    insertarPrincipio(111);
    insertarPrincipio(2);
    insertarPrincipio(3);
    insertarFinal(99);
    insertarEnLaSegundaPosicion(1);
    insertarEnLaAntepenultima(1);
    imprimir();

    eliminarMayorInformacion();
    imprimir();
    ClearLista();
    getch();
    return 0;
}