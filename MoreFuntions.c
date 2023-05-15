#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

/*void cardaDeDatosPorColumna(int matriz[2][5]){
    for(int c = 0; c < 5 ;c++){
        for (int f = 0; f < 2; f++){
            printf("Ingrese el elemento [%i][%i]", f, c);
            scanf("%i", &matriz[f][c]);
            printf("\n");
        }
    }
}

void imprimirMatriz(int matriz[2][5]){
    for (int f = 0; f < 2; f++){
      for (int c = 0; c < 5; c++){
        printf("[ %i ]", matriz[f][c]);
      }
      printf("\n");
    }
}*/

//--------------------------------------------------------------
/*void CargarElementos(int matriz[3][4]){
   
    for (int f = 0; f < 3; f++){
        for (int c = 0; c < 4; c++){
            printf("Ingrese el elemento [%i][%i]", f, c);
            scanf("%i", &matriz[f][c]);
            printf("\n");
        }
    }
}

int determinarValorMayor(int matriz[3][4]){
    int elementoMayor = matriz[0][0];
    for (int f = 0; f < 3; f++){
        for (int c = 0; c < 4; c++){
            if(matriz[f][c] > elementoMayor){
                elementoMayor = matriz[f][c];
            }
        }
        
    }
    return elementoMayor;
    
}*/

//------------------------------------------------------------------

/*void llenarMatriz(int matriz[2][5]){
    for (int f = 0; f < 2; f++){
        for (int c = 0; c < 5; c++){
            printf("Ingrese el elemento [%i][%i]", f, c);
            scanf("%i", &matriz[f][c]);
            printf("\n");
        }
    }
}

void impresion(int matriz[2][5]){
    for (int f = 0; f < 2; f++){
        for (int c = 0; c < 5; c++){
            printf("[ %i ]", matriz[f][c]);
        }
        printf("\n");
    }
}

void intercambiarFilas(int matriz[2][5]){
    int auxiliar;
    for (int f = 0; f < 5; f++){
            auxiliar = matriz[0][f];
            matriz[0][f] = matriz[1][f];
            matriz[1][f] = auxiliar;
        }
    
}*/

//--------------------------------------------------------------
/*
void cargarMatriz(char articulos[3][40]){
    for (int i = 0; i < 3; i++){
        printf("Ingrese el %i articulo: ", i+1);
        gets(articulos[i]);
        printf("\n");
    }
}

void mostrarMatrizDeCaracteres(char articulos[3][40]){
    for (int i = 0; i < 3; i++){
        printf("Articulo %i : %s\n",i+1, articulos[i]);
    }
    
}*/
//--------------------------------------------------------------------------------------

void llenarDatosPersonas(char personas[5][30]){
    for (int i = 0; i < 5; i++){
        printf("Ingrese la %i persona: ", i+1);
        gets(personas[i]);
        printf("\n");
    }
}

void mostrarDatos(char personas[5][30]){
    for (int i = 0; i < 5; i++){
        printf("Persona %i: %s\n", i+1, personas[i]);
    }
}

int consultarExistencia(char personas[5][30]){
    char nombre[30];
    printf("Ingrese el nombre: \n");
    gets(nombre);
    int existe = 0;
    for (int i = 0; i < 5; i++){
        if(strchr(nombre,personas[i] == 0)){
            existe = 1;
        }
    }
    
    return existe;
}

int main(){
    /*int valores[3][4];
    CargarElementos(valores);
    printf("El elemento mayor de la matriz Bidimencional es: %i", determinarValorMayor(valores));*/
   
   //---------------------------------------------------------------------------------
    /*int data[2][5];
    llenarMatriz(data);
    impresion(data);
    intercambiarFilas(data);
    printf("La matriz resultate depues de intercambiar las filas es:\n ");
    impresion(data);*/

    //-----------------------------------------------------------------------------------------
    /*char articulos [3][40];
    cargarMatriz(articulos);
    mostrarMatrizDeCaracteres(articulos);*/

    //--------------------------------------------------------------------------
    char personas[5][30];
    llenarDatosPersonas(personas);
    mostrarDatos(personas);
    if(consultarExistencia(personas) == 1){
        printf("La persona ya esta es la lista!!");
    }else{
        printf("La persona no se encuentra en la lista!!");
    }
    
}