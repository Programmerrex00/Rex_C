#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

struct nodo{
    int informacion;
    struct nodo *siguiete;
};

struct nodo *raiz = NULL;
struct nodo *cola = NULL;

int vacia(){
    if(raiz == NULL){
        return 1;
    }else{
        return 0;
    }
}

void insertar(int valor){
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->informacion = valor;
    nuevo->siguiete = NULL;

    if(vacia()){
        raiz = nuevo;
        cola = nuevo;
    }else{
        cola->siguiete = nuevo;
        cola = nuevo;
    }
}

int extraer(){
    if(!vacia()){
        int valor = raiz->informacion;
        struct nodo *borrar = raiz;
        if(raiz == cola){
            raiz = NULL;
            cola = NULL;
        }else{
            raiz = raiz->siguiete;
        }
        free(borrar);
        return valor;
    }else{
        return -1;
    }
}

void clearCola(){
    struct nodo *recorrido = raiz;
    struct nodo *borrar;
    while (recorrido != NULL){
        borrar = recorrido;
        recorrido = recorrido->siguiete;
        free(borrar);
    }
}

int cantidad(){
    struct nodo *recorrido = raiz;
    int cantidad = 0;
    while (recorrido != NULL){
        cantidad++;
        recorrido = recorrido->siguiete;
    }
    return cantidad;
}



int pedirHoras(){
    int horas, minutos;
    printf("Ingrese las horas que quiere calcular de actividad en el cajero\n");
    scanf("%i", &horas);
    minutos = horas * 60;
    return minutos;
}



void cajero(){
    srand(time(NULL));
    int minutos = pedirHoras();
    int estado = 0;
    int llegada = rand() % 2 + 2;
    int salida = -1;
    int cantidadAtendidas = 0;

    for (int minuto = 0; minuto < minutos; minuto++){

        if(llegada == minuto){

            if(estado == 0){
                estado = 1;
                salida = minuto + 2 + rand() % 3;
            }else{
                insertar(minuto);
            }
            llegada = minuto + 2 + rand() % 2;
        }
        if(salida == minuto){
            estado = 0;
            cantidadAtendidas++;

            if(!vacia()){
                extraer();
                estado = 1;
                salida = minuto + 2 + rand() % 3;
            }
        }
    }
    printf("Atendidos:%i\n", cantidadAtendidas);
    printf("En cola:%i\n", cantidad());
    printf("primera persona en la cola, cumplidos los %i minutos. Cantidad de minutos: %i",minutos, extraer());
}



int main(){
    //para generar numero ramdom usamos la sintaxis de la linea 125 y 126, generamos numeros ramdos con un rango
    srand(time(NULL));
    int ran = rand()%8;

    printf("%i",ran);
    cajero();
    clearCola();
    getch();
    return 0;
}