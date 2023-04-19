#include<conio.h>
#include<stdio.h>

int main(){
    
 /*int horasTrabajadas;
    float costoHora;
    float sueldo;
    printf("Ingrese las horas trabajadas por el empleado: ");
    scanf("%i", &horasTrabajadas);
    printf("Ingrese el pago por hora ");
    scanf("%f", &costoHora);
    sueldo = horasTrabajadas * costoHora;
    printf("El sueldo total de la operacion es");
    printf("%f", sueldo);*/

 //-------------------------------------------------

   /*int lado;
   int superficie;  
   printf("Ingrese el lado del cuadrado");
   scanf("%i", &lado);  
   superficie = lado * lado;
   printf("La superficie del cuadrado es de:\n");
   printf("%i", superficie);*/


//----------------------------------------------------

    /*int numero1;
    int numero2;
    printf("Ingrese el primer numero positivo");
    scanf("%i", &numero1);
    printf("Ingrese el segundo numero segundo");
    scanf("%i", &numero2);
    printf("La suma de los dos numeros es de %i y la multiplicacion de los dos numero es de %i", (numero1+numero2), (numero1*numero2));*/


//-------------------------------------------------------    

    /*int numero1, numero2, numero3, numero4, suma, promedio;  
    printf("Ingrese el primer numero");
    scanf("%i", &numero1);
    printf("Ingrese el segundo numero");
    scanf("%i", &numero2);
    printf("Ingrese el tercer numero");
    scanf("%i", &numero3);
    printf("Ingrese el cuarto numero");
    scanf("%i", &numero4);
    suma = numero1+numero2+numero3+numero4;
    promedio = ((numero1+numero2+numero3+numero4)/4);
    printf("La suma de los numero es de %i y el promedio de los numero es de %i",suma, promedio );*/


//-------------------------------------------------------------------

    /*float valor;
    int cantidad;
    float valorApagar;
    printf("Ingrese la cantidad de articulos que va a llevar");
    scanf("%i", &cantidad);
    printf("Ingrese el precio de cada articulo");
    scanf("%f", &valor);
    valorApagar = cantidad * valor;
    printf("El valor que tiene que pagar la persona es de %f", valorApagar);*/

//----------------------------------------------------------------------

    /*float sueldo;
    printf("Ingrese el sueldo");
    scanf("%f", &sueldo);
    if(sueldo > 3000){
        printf("Esta persona debe de pagar impuesto");
    }*/

//---------------------------------------------------------------------

    /*int numero1;
    int numero2;
    printf("Ingrese el primer numero");
    scanf("%i", &numero1);
    printf("Ingrese el segundo numero");
    scanf("%i", &numero2);
    if(numero1 > numero2){
        printf("El numero mayor es el numero %i", numero1);
    }else{
        printf("El numero mayor es el numero %i", numero2);
    }*/

//-------------------------------------------------------------------

    /*int numero1;
    int numero2;
    int operacion, suma, division;
    printf("Ingrese el primer numero");
    scanf("%i",&numero1);
    printf("Ingrese el segundo numero");
    scanf("%i",&numero2);
    if(numero1 > numero2){
        suma = numero1 + numero2;
        operacion = numero1 - numero2;
        printf("La operacion  de la suma es de %i", suma);
    }else{
        division = numero2 / numero1;
        operacion = numero1 * numero2;
        printf("La operacion de la division es de %i", division);
    }
    printf("La operacion del producto es de %i", operacion);*/

//-----------------------------------------------------------------------

    /*float nota1, nota2, nota3, promedio;
    printf("Ingrese la primera nota");
    scanf("%f", &nota1);
    printf("Ingrese la segunda nota");
    scanf("%f", &nota2);
    printf("Ingrese la tercera nota");
    scanf("%f", &nota3);
    promedio = ((nota1+nota2+nota3)/3);
    if(promedio > 3.0){
        printf("Has aprovado!!");
    }else{
        printf("Has reprovado, estudia mas!!");
    }*/ 

//--------------------------------------------------------------------------

    int numero;
    int longitud;
    printf("Ingrese un numero");
    scanf("%i, &numero");
    longitud = sizeof(numero);

    printf("%i", longitud);

    getchar();
    return 0;



}