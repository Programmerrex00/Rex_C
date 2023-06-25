#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct nodo{
    char simbolo;
    struct nodo *siguiente;
};

struct nodo *raiz = NULL;

void insertar(char caracter){
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->simbolo = caracter;
    if(raiz == NULL){
        raiz = nuevo;
        nuevo->siguiente = NULL;
    }else{
        nuevo->siguiente = raiz;
        raiz = nuevo;
    }
}

char extraer(){
    if(raiz != NULL){
        char informacion = raiz->simbolo;
        struct nodo *bor = raiz;
        raiz = raiz->siguiente;
        free(bor);
        return informacion;
    }else{
        return -1;
    }
}

void liberar(){
    struct nodo *recorrido = raiz;
    struct nodo *borrar;
    while(recorrido != NULL){
        borrar = recorrido;
        recorrido = recorrido->siguiente;
        free(borrar);
    }
}

int vacia(){
    if(raiz == NULL){
        return 1;
    }else{
        return 0;
    }
}

void cargarCadena(char *cadena){
    printf("Ingrese la formula");
    gets(cadena);
}


int verificarValance(char *cadena){
    int i;
    for ( i = 0; i <= strlen(cadena); i++){
        if(cadena[i] == '(' || cadena[i] == '[' || cadena[i] == '{'){
            insertar(cadena[i]);
        }else{
            if(cadena[i] == ')'){
                if(extraer() != '('){
                    return 0;
                }
            }else{
                if(cadena[i] == ']'){
                     if(extraer() != '['){
                        return 0;
                    }
                }else{
                   if(cadena[i] == '}'){
                        if(extraer() != '{'){
                        return 0;
                        }
                    } 
                }
            }
        }
    }
    if(vacia()){
        return 1;
    }else{
        return 0;
    }
}

void cargarPila(char *cadena){
    for (int i = strlen(cadena); i >= 0 ; i--){
        insertar(cadena[i]);
    }   
}


void imprimirPila(){
    struct nodo *recorrido = raiz;
    printf("\nFormula:\n");
    while (recorrido != NULL){
        printf("%c", recorrido->simbolo);
        recorrido = recorrido->siguiente;
    }
}





int main(){
    char formula[100];
    cargarCadena(formula);
    if(verificarValance(formula)){
        printf("Esta valanceada!!!");
    }else{
        printf("No esta valanceada!!");
    }
    



    //cargarPila(formula);
    //imprimirPila();

    liberar();
    getch();
    return 0;
}