#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct nodo{
    int informacion;
    struct nodo *siguiente;
};

struct nodo *raiz = NULL;

void liberar(){
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

void insertarPrincipio(int valor) {
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->informacion = valor;
    nuevo->siguiente = raiz;
    raiz = nuevo;
}

void insertarFinal(int valor){
    struct nodo *nuevo;
    struct nodo *recorrido = raiz;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->informacion = valor;
    while (recorrido->siguiente != NULL){
        recorrido = recorrido->siguiente;
    }
    recorrido->siguiente = nuevo;
    nuevo->siguiente = NULL;
}

void insertarSegundaPosicion(int valor){
    struct nodo *nuevo; 
    struct nodo *antes = raiz;
    struct nodo *despues = raiz->siguiente;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->informacion = valor;
    antes->siguiente = nuevo;
    nuevo->siguiente = despues;
}

int cantidadNodos(){
    int cantidad = 0;
    struct nodo *recorrido = raiz;
    while (recorrido != NULL){
        cantidad++;
        recorrido = recorrido->siguiente;
    }
    return cantidad;
}

void insertarNodoAntepenultimo(int valor){
     struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->informacion = valor;
    struct nodo *recorrido = raiz;
    for (int i = 1; i <= (cantidadNodos()) - 2; i++){
        recorrido = recorrido->siguiente;
    }
    struct nodo *despues = recorrido->siguiente;
    recorrido->siguiente = nuevo;
    nuevo->siguiente = despues;
    
}

void imprimir(){
    struct nodo *recorrido = raiz;
    printf("Lista Generica: \n");
    while (recorrido != NULL){
        printf("%i ", recorrido->informacion);
        recorrido = recorrido->siguiente;
    }
    printf("\n");
}


void borrarPrimero(){
    struct nodo *borrar;
    borrar = raiz;
    raiz = raiz->siguiente;
    free(borrar);
}

void borrarSegundo(){
    struct nodo *borrar = raiz->siguiente;
    raiz->siguiente = borrar->siguiente;
    free(borrar);
}




void borrarUltimo(){
    struct nodo *recorrido = raiz;
    for (int i = 1; i <= cantidadNodos() - 2; i++){
        recorrido = recorrido->siguiente;
    }
    struct nodo *nodoAEliminar = recorrido->siguiente;
    recorrido->siguiente = NULL;
    free(nodoAEliminar);
}

void borrarNodoInfoMayor(){
    struct nodo *recorrido = raiz->siguiente;
    int mayor =  raiz->informacion;
    int x = 1;
    int posicion = x;
    while (recorrido != NULL){
        x++;
        if(recorrido->informacion > mayor){
            mayor = recorrido->informacion;
            posicion = x;
        }
        recorrido = recorrido->siguiente;
    }
    //Dependiendo a la pocision del mayor lo eliminaremos
   struct nodo *borrar;
   if(posicion == 1){
        borrar = raiz;
        raiz = raiz->siguiente;
   }else{
        struct nodo *recorrido = raiz;
        for (int i = 1; i <= posicion - 2; i++){
            recorrido = recorrido->siguiente;
        }
        struct nodo *nodoAEliminar = recorrido->siguiente;
        recorrido->siguiente = nodoAEliminar->siguiente;
        borrar = nodoAEliminar;
   }
   free(borrar);
     
}

int main(){
    insertarPrincipio(1);
    insertarPrincipio(2);
    insertarPrincipio(3);
    insertarFinal(9);
    insertarFinal(10);
    insertarNodoAntepenultimo(333);
    insertarSegundaPosicion(200);
    imprimir();
    borrarPrimero();
    imprimir();
    borrarSegundo();
    imprimir();
    borrarUltimo();
    imprimir();
    borrarNodoInfoMayor();
    imprimir();


    liberar();
    getch();
    return 0;
}

