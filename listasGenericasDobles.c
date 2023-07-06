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

void insertar(int posicion, int value){
    if(posicion <= cantidad() + 1){
        struct nodo *nuevo;
        nuevo = malloc(sizeof(struct nodo));
        nuevo->informacion = value;
        nuevo->siguiente = NULL;
        nuevo->anterior  = NULL;
        if(posicion == 1){
            nuevo->siguiente = raiz;
            if(raiz != NULL){
                raiz->anterior = nuevo;
            }
            raiz = nuevo;
        }else if(posicion == cantidad() + 1){
            struct nodo *recorrido = raiz;
            while(recorrido->siguiente != NULL){
                recorrido = recorrido->siguiente;
            }
            recorrido->siguiente = nuevo;
            nuevo->anterior = recorrido;
        }else{
            struct nodo *recorrido = raiz;
            for (int i = 1; i <= posicion - 2; i++){
                recorrido = recorrido->siguiente;
            }
            struct nodo *siguiente = recorrido->siguiente;
            recorrido->siguiente = nuevo;
            nuevo->anterior = recorrido;
            nuevo->siguiente = siguiente;
            siguiente->anterior = nuevo;
        }
    }
}

int extraer(int posicion){
    if(posicion <= cantidad()){
        int informacion;
        struct nodo *borrar;
        if(posicion == 1){
            informacion = raiz->informacion;
            borrar = raiz;
            raiz = raiz->siguiente;
            if(raiz != NULL){
                raiz->anterior = NULL;
            }
        }else{
            struct nodo *recorrido = raiz;
            for (int i = 1; i <= posicion - 2; i++){
                recorrido = recorrido->siguiente;
            }
            struct nodo *nodoEliminar = recorrido->siguiente;
            borrar = nodoEliminar;
            recorrido->siguiente = nodoEliminar->siguiente;
            struct nodo *siguiente = nodoEliminar->siguiente;
            if(siguiente != NULL){
                siguiente->anterior = recorrido;
            }
            informacion = nodoEliminar->informacion;
        }

        free(borrar);
        return informacion;
    }else{
        return -1;
    }
}


void borrar(int posicion){
    if(posicion <= cantidad()){
        struct nodo *borrar;
        if(posicion == 1){
            borrar = raiz;
            raiz = raiz->siguiente;
            if(raiz != NULL){
                raiz->anterior = NULL;
            }
        }else{
            struct nodo *recorrido = raiz;
            for (int i = 1; i <= posicion - 2; i++){
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
}

void intercambiar(int posicion1, int posicion2){
    if(posicion1 <= cantidad() && posicion2 <= cantidad()){
        struct nodo *pos1 = raiz;
        for (int i = 1; i < posicion1; i++){
            pos1 = pos1->siguiente;
        }
        struct nodo *pos2 = raiz;
        for (int j = 1; j < posicion2; j++){
            pos2 = pos2->siguiente;
        }
        int aux = pos1->informacion;
        pos1->informacion = pos2->informacion;
        pos2->informacion = aux;
        
    }
}

int mayor(){
    if(!vacia()){
        int mayor = raiz->informacion;
        struct nodo *recorrido = raiz->siguiente;
        while(recorrido != NULL){
            if(recorrido->informacion > mayor){
                mayor = recorrido->informacion;
            }
            recorrido = recorrido->siguiente;
        }
        return mayor;
    }else{
        return -1;
    }
}

int posicionMayor(){
    if(!vacia()){
        int mayor = raiz->informacion;
        int x = 1;
        int posicion = x;
        struct nodo *recorrido = raiz->siguiente;
        while(recorrido != NULL){
            if(recorrido->informacion > mayor){
                mayor = recorrido->informacion;
                posicion = x;
            }
            recorrido = recorrido->siguiente;
            x++;
        }
        return posicion;
    }else{
        return -1;
    }
}


int ordenada(){
    if (cantidad() > 1){
        struct nodo *recorrido1 = raiz;
        struct nodo *recorrido2 = raiz->siguiente;
        while(recorrido2 != NULL){
            if(recorrido2->informacion < recorrido1->informacion){
                return 0;
            }
            recorrido1 = recorrido1->siguiente;
            recorrido2 = recorrido2->siguiente;
        }
    }
    return 1;
}

int existe(int value){
    struct nodo *recorrido = raiz;
    while(recorrido != NULL){
        if(recorrido->informacion == value){
            return 1;
        }
        recorrido = recorrido->siguiente;
    }
    return 0;
    
}


int main(){
    insertar(1, 10);
    insertar(2, 20);
    insertar(3, 30);
    insertar(4, 40);
    insertar(2, 50);
    imprimir();
    imprecionInversa();
    extraer(2);
    borrar(1);
    intercambiar(1,3);
    imprimir();
    printf("El dato mayor de la lista Doblemente enlazada es: %i\n", mayor());
    printf("La posicion del dato mayor de la lista es: %i\n", posicionMayor());
    if(ordenada()){
        printf("La lista se encuentra ordenada de mayor a menor\n");
    }else{
        printf("La lista No se encuentra ordenada!!!\n");
    }
    if(existe(40)){
        printf("El nodo se encuentra en la lista\n");
    }else{
        printf("El nodo No se encuentra en la Lista!!\n");
    }

    ClearLista();
    getch();
    return 0;
}