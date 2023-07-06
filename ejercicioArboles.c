#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct nodo {
    int informacion;
    struct nodo *izquierda;
    struct nodo *derecha;
};

struct nodo *raiz=NULL;


void clearTree(struct nodo *recorrido){
    if(recorrido != NULL){
        clearTree(recorrido->izquierda);
        clearTree(recorrido->derecha);
        free(recorrido);
    }
    
}

int existe(int value){
    struct nodo *recorrido = raiz;
    while(recorrido != NULL){
        if(value == recorrido->informacion){
            return 1;
        }else{
            if(value < recorrido->informacion){
                recorrido = recorrido->izquierda;
            }else{
                recorrido = recorrido->derecha;
            }
        }
    }
    return 0;
}

void insertar(int value){
    if(!existe(value)){
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

void cantidadNodos(struct nodo *recorrido, int *cantidad){
    if (recorrido != NULL){
        //para poder incrementar un puntero pasado como parametro lo hacemos de esta forma:
        (*cantidad)++;
        cantidadNodos(recorrido->izquierda, cantidad);
        cantidadNodos(recorrido->derecha, cantidad);
    } 
}

void cantidadNodosHoja(struct nodo *recorrido, int *cantidad){
    if(recorrido != NULL){
        if (recorrido->izquierda == NULL && recorrido->derecha == NULL){
            (*cantidad)++;
        }
            cantidadNodosHoja(recorrido->izquierda, cantidad);
            cantidadNodosHoja(recorrido->derecha, cantidad);
    }
}

void imprimirConElNivel(struct nodo *recorrido, int nivel){
    if (recorrido != NULL){
        imprimirConElNivel(recorrido->izquierda, nivel + 1);
        printf("%i(Level: %i) ", recorrido->informacion, nivel);
        imprimirConElNivel(recorrido->derecha, nivel + 1);
    } 
}

void alturaDelArbol(struct nodo *recorrido, int *altura){
    if (recorrido != NULL){
        if (recorrido->izquierda != NULL || recorrido->derecha != NULL){
            (*altura)++;    
        }
        alturaDelArbol(recorrido->izquierda, altura);
        alturaDelArbol(recorrido->derecha, altura);
        
    }
}

//Otro algoritmo para determinar la altura
void retornarAltura(struct nodo *reco, int nivel,int *altura)
{
    if (reco != NULL)
    {
        retornarAltura(reco->izquierda, nivel + 1,altura);
        if (nivel>*altura)
            *altura = nivel;
        retornarAltura(reco->derecha, nivel + 1,altura);
    }
}

int retornarNodoMayor(){
    int mayor = 0;
    struct nodo *recorrido = raiz;
    mayor = raiz->informacion;
    while (recorrido != NULL){
        if(recorrido->derecha == NULL){
            return mayor;
        }
        recorrido = recorrido->derecha;
        mayor = recorrido->informacion;
    }
    return 0;
}

//Otra manera de buscar el mayor
 void mayorValor(){
    if (raiz != NULL){
        struct nodo *reco = raiz;
        while (reco->derecha != NULL)
            reco = reco->derecha;
        printf("Mayor valor del arbol:%i\n", reco->informacion);
    }
}

void borrarNodoMenor(){
    struct nodo *borrar = raiz;
    if(raiz != NULL){
        if(raiz->izquierda == NULL){
            borrar = raiz;
            raiz = raiz->derecha;
            free(borrar);
        }else{
            struct nodo *anterior;
            while(borrar->izquierda != NULL){
                anterior = borrar;
                borrar = borrar->izquierda;
            }
                anterior->izquierda = borrar->derecha;
                free(borrar);
        }
    }
}





int main(){
    int cantidad;
    insertar(50);
    insertar(100);
    insertar(20);
    insertar(25);
    insertar(10);
    insertar(60);
    insertar(120);
    insertar(300);
    printf("El arbol Impreso en PreOrden es: \n");
    imprimerPre(raiz);
    printf("\n El arbol Impreso en InOrden es: \n");
    imprimirIn(raiz);
    printf("\n El arbol Impreso en PostOrden es: \n");
    imprimirPost(raiz);
    cantidadNodos(raiz, &cantidad);
    printf("\nLa cantidad de nodos que tiene el arbol es de: %i\n", cantidad);
    cantidad = 0;  
    cantidadNodosHoja(raiz, &cantidad);
    printf("\nLa cantidad de nodos hoja que tiene el arbol es de: %i\n", cantidad);
    printf("arbol de forma entre Orden y nivel de cada nodo: \n");
    imprimirConElNivel(raiz, 1);
    cantidad = 0;
    alturaDelArbol(raiz, &cantidad);
    printf("\nLa altura del arbol es: %i\n", cantidad);
    borrarNodoMenor();
    printf("El nodo mayor del arbol es: %i\n ", retornarNodoMayor());
      printf("\n El arbol Impreso en InOrden es: \n");
    imprimirIn(raiz);
    clearTree(raiz);
    getch();
    return 0;
}