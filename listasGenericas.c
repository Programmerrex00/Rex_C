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


int cantidad(){
    struct nodo *recorrido = raiz;
    int cantidad = 0;
    while (recorrido != NULL){
        cantidad++;
        recorrido = recorrido->siguiente;
    }
    return cantidad;
}



void insertar(int posicion, int valor){
    if(posicion <= cantidad() + 1){
        struct nodo *nuevo;
        nuevo = malloc(sizeof(struct nodo));
        nuevo->informacion = valor;
        if(posicion == 1){
            nuevo->siguiente = raiz;
            raiz = nuevo;
        }else if(posicion == cantidad() + 1){
            struct nodo *recorrido = raiz;
            while(recorrido->siguiente  != NULL){
                recorrido = recorrido->siguiente;
            }
            recorrido->siguiente = nuevo;
            nuevo->siguiente = NULL;
        }else{
            struct nodo *recorrido = raiz;
            for (int  i = 1; i <= posicion - 2; i++){
                recorrido = recorrido->siguiente;
            }
            struct nodo *siguiente = recorrido->siguiente;
            recorrido->siguiente = nuevo;
            nuevo->siguiente = siguiente;
        }
    }
}

void imprimir(){
    struct nodo *recorrido = raiz;
    printf("La lista completa es: \n");
    while (recorrido != NULL){
        printf("%i ", recorrido->informacion);
        recorrido = recorrido->siguiente;
    }
    printf("\n");
}


int extraer(int posicio){
    if(posicio <= cantidad()){
        int informacion;
        struct nodo *borrar;
        if(posicio == 1){
            informacion  = raiz->informacion;
            borrar = raiz;
            raiz = raiz->siguiente;
        }else{
            struct nodo *recorrido;
            recorrido = raiz;
            for (int i = 1; i <= posicio - 2; i++){
                recorrido = recorrido->siguiente;
            }
            struct nodo *nodoAEliminar = recorrido->siguiente;
            recorrido->siguiente = nodoAEliminar->siguiente;
            informacion = nodoAEliminar->informacion;
            borrar = nodoAEliminar;
        }
        free(borrar);
        return informacion;
    }else{
        return -1; 
    }
}



void borrar(int posicio){
    if(posicio <= cantidad()){
        struct nodo *borrar;
        if(posicio == 1){
            borrar = raiz;
            raiz = raiz->siguiente;
        }else{
            struct nodo *recorrido = raiz;
            for (int i = 1; i <= posicio - 2; i++){
                recorrido = recorrido->siguiente;
            }
            struct nodo *nodoAEliminar = recorrido->siguiente;
            recorrido->siguiente = nodoAEliminar->siguiente;
            borrar = nodoAEliminar;
        }
        free(borrar);
    }
}


void intercambiar(int pocisio1, int pocision2){
    if(pocisio1 <= cantidad() && pocision2 <= cantidad()){
        struct nodo *recorrido1 = raiz;
        for (int i = 1; i < pocisio1; i++){
            recorrido1 = recorrido1->siguiente;
        }
        struct nodo *recorrido2 = raiz;
        for (int j = 1; j < pocision2; j++){
            recorrido2 = recorrido2->siguiente;
        }
        int auxiliar = recorrido1->informacion;
        recorrido1->informacion = recorrido2->informacion;
        recorrido2->informacion = auxiliar;
    }
}


int nodoMayor(){
    if(!vacia()){
        int nodoMayor = raiz->informacion;
        struct nodo *recorrido = raiz->siguiente;
        while (recorrido != NULL){
            if(recorrido->informacion > nodoMayor){
                nodoMayor = recorrido->informacion;
            }
            recorrido = recorrido->siguiente;
        }
        return nodoMayor;
    }else{
        return -1;
    }
}

int posMayor(){
    if(!vacia()){
        int nodoMayor = raiz->informacion;
        int x = 1;
        int posicion = x;
        struct nodo *recorrido = raiz->siguiente;
        while (recorrido != NULL){
            x++;
            if(recorrido->informacion > nodoMayor){
                nodoMayor = recorrido->informacion;
                posicion = x;
            }
            recorrido = recorrido->siguiente;
        }
        return posicion;
    }else{
        return -1;
    }
}

int ordenada(){
    if(cantidad() > 1){
        struct nodo *recorrido1 = raiz;
        struct nodo *recorrido2 = raiz->siguiente;
        while (recorrido2 != NULL){
            if(recorrido2->informacion < recorrido1->informacion){
                return 0;
            }
            recorrido1 = recorrido1->siguiente;
            recorrido2 = recorrido2->siguiente;
        }
        
    }
    return 1;
}


int existe(int x){
    struct nodo *recorrido = raiz;
    while (recorrido != NULL){
        if (recorrido->informacion == x){
            return 1;
        }
        recorrido = recorrido->siguiente;
    }
    return 0;
}


int main(){
    insertar(1, 1);
    insertar(2, 2);
    insertar(3, 3);
    insertar(4, 4);
    insertar(2, 999);
    insertar(6, 111);
    imprimir();
    printf("Borramos el ultimo \n");
    borrar(6);
    imprimir();
    printf("Extraemos el nodo: %i\n", extraer(5));
    imprimir();
    printf("Intercambiamos el primero con el tercero\n");
    intercambiar(1,3);
    imprimir();
    if(existe(999)){
        printf("El nodo 999 si se encuentra en la lista!!\n");
    }else{
        printf("El nodo 999 no se encuentra en la lista!!\n");
    }
    if(ordenada()){
        printf("La lista esta ordenada!!\n");
    }else{
        printf("La lista no se encuentra ordenada!!!\n");
    }
    printf("La posicion del nodo mayor es: %i\n", posMayor());
    printf("El nodo mayor es: %i", nodoMayor());



    liberar();
    getch();
    return 0;
}