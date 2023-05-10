#include <conio.h>
#include <stdio.h>
#include<math.h>
#include<string.h>

/*void presentacion(){
    printf("Hola esto es un programa que suma dos numeros \n");
    printf("Espero que te guste!! \n");
}
void sumaDosNumeros(){
    int numero1, numero2, suma;
    printf("Ingrese el primer numero");
    scanf("%i", &numero1);
    printf("\n");
    printf("Ingrese el segundo numero");
    scanf("%i", &numero2);
    suma = numero1 + numero2;
    printf("\n");
    printf("La suma de los dos numeros es: %i", suma);
}

void despedida(){
    printf("\n La despedida del programa es: \n ADIOS!!!!");
}*/

//-----------------------------------------------------------------

/*void operacion(){
    int valor1, valor2, suma;
    printf("Ingrese el primer numero");
    scanf("%i", &valor1);
    printf("\n");
    printf("Ingrese el segundo numero");
    scanf("%i", &valor2);
    suma = valor1 + valor2;
    printf("\n");
    printf("El resultado de la suma es de %i",suma);

}

void linea(){
    printf("\n-----------------------------------\n");
}*/

//---------------------------------------------------------------------

/*void numeroAlCuadrado(){
    int numero, cuadrado;
    printf("Ingrese un numero");
    scanf("%i", &numero);
    cuadrado = pow(numero,2);
    printf("\n El numero %i elevado al cuadrado es %i", numero, cuadrado);
}

void productTwoNumbers(){
    int numero1, numero2, producto;
    printf("\nIngrese el primer numero");
    scanf("%i",&numero1);
    printf("\n");
    printf("Ingrese el segundo numero");
    scanf("%i",&numero2);
    printf("\n");
    producto = numero1 * numero2;
    printf("El producto es: %i",producto);
}*/

//---------------------------------------------------------------

/*void verMenor(){
    int value1, value2, value3;
    printf("\nIngrese el primer valor");
    scanf("%i", &value1);
    printf("\n");
    printf("Ingrese el segundo valor");
    scanf("%i", &value2);
    printf("\n");
    printf("Ingrese el tercer valor");
    scanf("%i", &value3);
    printf("\n");
    if(value1 > value2 && value1 > value3){
        printf("El numero mayor es %i", value1);
    }else{
        if(value2 > value3){
            printf("El numero mayor es %i", value2);
        }else{
            printf("El numero mayor es %i", value3);
        }
    }
    printf("\n---------------------------------------\n");
}*/

//------------------------------------------------------------
/*void cargarParametros(int paramOne, int paramTwo){
    if(paramOne > paramTwo){
        printf("\nEl parametro mayor es %i", paramOne);
    }else{
        printf("\nEl parametro mayor es %i", paramTwo);
    }
}*/

//----------------------------------------------------------

/*void calcularSueldo(int horas, float sueldo){
    float total = horas * sueldo;
    printf("El sueldo a pagarle al empleado es de: %0.4f", total);
}*/


//------------------------------------------------------------
/*void calcularArea(int lado){
    int area = lado * lado;
    printf("El area del cuadadrado es de: %i\n", area);
}

void calcularPerimetro(int lado){
    int perimetro = lado * 4;
    printf("El perimetro del cuadrado es de: %i\n", perimetro);
}*/

//-----------------------------------------------------------

/*void determinarGenero(char genero){
    if(genero == 'm' || genero == 'M'){
        printf("Es un hombre");
    }else if(genero == 'f' || genero == 'F'){
        printf("Es una mujer");
    }else{
        printf("Especimen desconocido!!!");
    }
}*/

//-----------------------------------------------------------------

/*void verMayor(int value1, int value2, int value3){
    if(value1 > value2 && value1 > value3){
        printf("El numero mayor es %i", value1);
    }else{
        if(value2 > value3){
            printf("El numero mayor es %i", value2);
        }else{
            printf("El numero mayor es %i", value3);
        }
    }
    printf("\n---------------------------------------\n");

}*/

//------------------------------------------------------------------


/*void rangoDeNumeros(int valor){
    for(int i = 0;i <= valor;i++){
        printf("%i\n", i);
    }
}*/

//-------------------------------------------------------------
/*void racorridoDeCarcteres(char caracter){
    if(caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O'
    || caracter == 'U' || caracter == 'a' || caracter == 'e' || caracter == 'i'
    || caracter == 'o' || caracter == 'u'){
        printf("El caracter %c es una vocal\n", caracter);
    }else{
        printf("El caracter %c es una letra\n", caracter);
    }
}*/

//--------------------------------------------------------------------

/*float superficieDeUnTrianguloRetornando(float superficie){
    return superficie * superficie;
}*/

//------------------------------------------------------------------

/*int functionNumeroMayor(int numero1, int numero2){
    if(numero1 > numero2){
        return numero1;
    }else{
        return numero2;
    }
}*/


int main(){
   /*char eleccion;
    float sueldo;
    int horas;
    do
    {
        printf("Ingrese las horas trabajadas");
        scanf("%i", &horas);
        printf("\n");
        printf("Ingrese el sueldo que gana por hora");
        scanf("%f", &sueldo);
        printf("\n");
        calcularSueldo(horas, sueldo);
        printf("\n");
        printf("¿Desea seguir calculando sueldos? (s/n)");
        scanf(" %c", &eleccion);
    } while (eleccion == 's' || eleccion == 'S');*/

   /*int valor;
   do
   {
    printf("Ingrese un valor\n");
    scanf("%i", &valor);
    if(valor < 10 || valor > 20){
        printf("Ingrese un numero en el rango de 10-20\n");
    }else{
        calcularArea(valor);
        calcularPerimetro(valor);
    }
   } while (valor < 10 || valor > 20);*/

    /*int value1, value2, value3;
    printf("\nIngrese el primer valor");
    scanf("%i", &value1);
    printf("\n");
    printf("Ingrese el segundo valor");
    scanf("%i", &value2);
    printf("\n");
    printf("Ingrese el tercer valor");
    scanf("%i", &value3);
    printf("\n");
    verMayor(value1, value2, value3);*/

    /*float superficie;
    printf("Ingrese la superficie del cuadrado");
    scanf("%f", &superficie);
    printf("\n La superficie del cuadrado es de: %0.2f", superficieDeUnTrianguloRetornando(superficie));*/

    /*int value1, value2;
    printf("Ingrese el segundo numero");
    scanf("%i", &value1);
    printf("\n");
    printf("Ingrese el primer numero");
    scanf("%i", &value2);
    printf("El numero mayor es: %i", functionNumeroMayor(value1, value2));*/


    getch();
    return 0;
}