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

/*void recopilarPalabra(char palabra[40]){
    printf("Ingrese la palabra");
    gets(palabra);
    printf("\n");
}

int recopilarVocales(char palabra[40]){
    int x = 0, contador = 0;
    while (palabra[x] != '\0'){
        if(palabra[x] == 'a' || palabra[x] == 'e' && palabra[x] == 'i'
        || palabra[x] == 'o' || palabra[x] == 'u' ||
        palabra[x] == 'A' || palabra[x] == 'E' && palabra[x] == 'I'
        || palabra[x] == 'O' || palabra[x] == 'U'){
            contador++;
        }
        x++;
    }
    return contador;
}*/

//---------------------------------------------------------------


/*float calcularPromedio(float alturas[5]){
    float promedio = 0;
    for (int i = 0; i < 5; i++){
        promedio += alturas[i];
    }
    return promedio/5;
}

void alturasBajasYAltas(float alturas[5], float promedio){
    int alturasBajas = 0, alturasAltas = 0;
    for (int i = 0; i < 5; i++){
        if(alturas[i] > promedio){
            alturasAltas++;
        }else{
            alturasBajas++;
        }
    }
    printf("\n La cantidad de alturas mayores al promedio es de: %i", alturasAltas);
    printf("\n La cantidad de alturas menores al promedio es de: %i", alturasBajas);
}*/

//-------------------------------------------------------------------
/*void cargarSueldos(float sueldos[4]){
    for (int i = 0; i < 4; i++){
        printf("Ingrese el sueldo del %i empleado: ", i+1);
        scanf("%f", &sueldos[i]);
        printf("\n");
    }
}

float totalSueldos(float sueldos[4]){
    float totalSueldosEmpleados = 0;
    for (int i = 0; i < 4; i++){
        totalSueldosEmpleados += sueldos[i];
    }
    return totalSueldosEmpleados;
}*/
//--------------------------------------------------------------------------

/*void cargarDatos(int numeros[8]){
    for (int i = 0; i < 8; i++){
        printf("Ingrese el valor del indice %i: ", i+1);
        scanf("%i", &numeros[i]);
        printf("\n");
    }
}

int valorAcumulado(int numeros[8]){
    int valorAcumuladoNumeros = 0;
    for (int i = 0; i < 8; i++){
        valorAcumuladoNumeros += numeros[i];
    }
    return valorAcumuladoNumeros;
}


int valorAcumuladoMayoresA36(int numeros[8]){
    int valorAcumuladoNumeros36 = 0;
    for (int i = 0; i < 8; i++){
        if(numeros[i] > 36){
            valorAcumuladoNumeros36 += numeros[i];
        }
    }
    return valorAcumuladoNumeros36;
}


int componentesMayoresA50(int numeros[8]){
    int cantidad = 0;
    for (int i = 0; i < 8; i++){
        if(numeros[i] > 50){
            cantidad++;
        }
    }
    return cantidad;
}*/


//------------------------------------------------------------------------

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

//-------------------------------------------------------------------------------------

    /*float alturaPersonas[5];
    for (int i = 0; i < 5; i++){
        printf("Ingrese la %i altura: ", i+1);
        scanf("%f", &alturaPersonas[i]);
        printf("\n");
    }
    printf("El promedio de las alturas de las personas es de: %0.2f",calcularPromedio(alturaPersonas));  
    alturasBajasYAltas(alturaPersonas, calcularPromedio(alturaPersonas));*/

    //---------------------------------------------------------------------------------------------------------
    /*float sueldosManana[4];
    float sueldosTarde[4];
    printf("Sueldos de Manana: \n");
    cargarSueldos(sueldosManana);
    printf("Sueldos de Tarde: \n");
    cargarSueldos(sueldosTarde);
    printf("El total de sueldos de la Manana es de: %0.2f\n", totalSueldos(sueldosManana));
    printf("El total de sueldos de la Tarde es de: %0.2f", totalSueldos(sueldosTarde));*/
    //--------------------------------------------------------------------------------------------
    /*int numeros[8];
    cargarDatos(numeros);
    printf("El valor acumulado de la Lista es de: %i\n", valorAcumulado(numeros));
    printf("El valor acumulado de los numeros mayores a 36 es de: %i\n", valorAcumuladoMayoresA36(numeros));
    printf("La cantidad de numeros mayores a 50 es de: %i", componentesMayoresA50(numeros));*/
    
}