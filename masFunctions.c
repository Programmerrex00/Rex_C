#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

/*int promedioRetorno(int value1, int value2, int value3){
    int promedio = (value1+value2+value3) / 3;
    return promedio;
}*/

//-------------------------------------------------------------

/*float perimetroCuadrado(float perimetro){
    return perimetro * 4;
    }*/
    //------------------------------------------------------------------

/*float superficieRectangulo(float largo, float ancho){
    return largo * ancho;
}
void determinarMayor(float valor1, float valor2){
    if(valor1 > valor2){
        printf("El primer rectangulo tiene la superficie mayor con: %0.1f", valor1);
    }else{
        printf("El primer rectangulo tiene la superficie mayor con: %0.1f", valor2);
    }
}*/
//------------------------------------------------------------------------

/*void pedirDatos(int vector[5]){
    for (int i = 0; i < 5; i++){
        printf("Ingrese el valor en la posicion %i: ", i+1);
        scanf("%i", &vector[i]);
        printf("\n");
    }   
}

void mostrarDatos(int vector[5]){
    for (int i = 0; i < 5; i++){
        printf("\n%i", vector[i]);
        printf("\n");
    }
}*/

//-------------------------------------------------------------------

/*void cargarSueldos(float sueldos[6]){
    for (int i = 0; i < 6; i++){
        printf("Ingrese el %i sueldo: ",i+1 );
        scanf("%f", &sueldos[i]);
        printf("\n");
    }
}

void imprimirSueldos(float sueldos[6]){
    for (int i = 0; i < 6; i++){
        printf("%0.2f - ", sueldos[i]);
    }
}

float gatosTotales(float sueldos[6]){
    float total;
    for (int i = 0; i < 6; i++){
        total += sueldos[i];
    }
    return total;
}*/

//-------------------------------------------------------

/*void llenarVectores(int vector[7]){
    for (int i = 0; i < 7; i++){
        printf("Ingrese el %i elemento: ", i+1);
        scanf("%i", &vector[i]);
        printf("\n");
    }
}

void sumarVectores(int primerVector[7], int segundoVector[7], int tercerVector[7]){
    for (int i = 0; i < 7; i++){
        tercerVector[i] = primerVector[i] + segundoVector[i];
    }
}

void impresion(int vector[7]){
    for (int i = 0; i < 7; i++){
        printf("%i - ", vector[i]);
    }
    printf("\n");
}*/

//-----------------------------------------------------------------

void recopilarPalabra(char palabra[40]){
    printf("Ingrese la palabra");
    gets(palabra);
    printf("\n");
}

int recopilarVocales(char palabra[40]){
    int x = 0, contador = 0;
    while (palabra[x] != '\0'){
        if(){
            
        }
        x++;
    }
    return contador;
}


int main(){
    /*float largo, ancho;
    float retornoRectanguloOne, retornoRectanguloTwo;

    for (int i = 0; i < 2; i++){
    printf("Ingrese el largo del %i rectangulo: ",i+1);
    scanf("%f", &largo);
    printf("\n");
    printf("Ingrese el ancho del %i rectangulo: ",i+1);
    scanf("%f", &ancho);
    printf("\n");
    if(i == 0){
        retornoRectanguloOne = superficieRectangulo(largo,ancho);
    }
    if(i == 1){
        retornoRectanguloTwo = superficieRectangulo(largo, ancho);
    }
    }
    printf("\n");
    printf("La superficie del primer rectangulo es de: %0.1f", retornoRectanguloOne);           
    printf("\n");
    printf("La superficie del segundo rectangulo es de: %0.1f", retornoRectanguloTwo);
    printf("\n");
    determinarMayor(retornoRectanguloOne, retornoRectanguloTwo);*/

    //-----------------------------------------------------------------------
    /*float sueldos[6];
    cargarSueldos(sueldos);
    printf("\n");
    imprimirSueldos(sueldos);
    printf("\n");
    printf("Los gatos totales entre los sueldos es de: %0.2f ", gatosTotales(sueldos));*/

    char palabra[40];
    recopilarPalabra(palabra);
    


    


    
}