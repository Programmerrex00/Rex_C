#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<string.h>

struct nodo{
    int info;
    struct nodo *siguiente;
};

struct nodo *raiz = NULL;

void insertar(int valor){
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->info = valor;
    if(raiz == NULL){
        raiz = nuevo;
        nuevo->siguiente = NULL;
    }else{
        nuevo->siguiente = raiz;
        raiz = nuevo;
    }
}

void imprimir(){
    struct nodo *recorrido = raiz;
    printf("Lista tipo Pila: ");
    while (recorrido != NULL){
        printf("%i ->", recorrido->info);
        recorrido = recorrido->siguiente;
    }

    if(recorrido == NULL){
        printf("LA PILA ESTA VACIA");
    }
}


int extraer(){
    if(raiz != NULL){
        int informacion = raiz->info;
        struct nodo *borrar = raiz;
        raiz = raiz->siguiente;
        free(borrar);
        return informacion;
    }else{
        return -1;
    }
}


void borrarPila(){
    struct nodo *recorrido = raiz;
    struct nodo *borrar;
    while (recorrido != NULL){
        borrar = recorrido;
        recorrido = recorrido->siguiente;
        free(borrar);
    }
    raiz = NULL;
    
}


int cantidadNodos(){
    int cantidad = 0;
    struct nodo *recorrido = raiz;
    while(recorrido != NULL){
        cantidad++;
        recorrido = recorrido->siguiente;
    }
    return cantidad;
}
    
//para retornar un valor char o 'string' en C, lo que debemos hacer es reservar dinamicamente 
// el espacio que va a utilizar este mensaje y luego la liberamos
char* estaVaciaONo(){
    char* determinar = malloc(20 * sizeof(char));
    if(raiz == NULL){
        strcpy(determinar, "esta vacia!!");
    }else{
        strcpy(determinar, "no esta vacia!!");
    }
    
    return determinar;

}


int informacionPrimerNodo(){
    int informacion;
    struct nodo *primero = raiz;
    informacion = primero->info;
    return informacion;

}








int main(){
    insertar(100);
    insertar(130);
    insertar(160);
    imprimir();
    printf("\nExtraemos de la Pila: %i\n", extraer());
    imprimir();
    printf("\nLa cantidad de nodos que tiene la pila es de: %i\n", cantidadNodos());
    printf("La informacion del primer nodo de la pila es de: %i\n", informacionPrimerNodo());


     char* result = estaVaciaONo();
    printf("La Pila: %s\n", result);

    borrarPila();

    result = estaVaciaONo();
    printf("La Pila: %s\n", result);
    imprimir();
    free(result);
    getch();
    return 0;
}