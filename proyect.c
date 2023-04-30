#include<conio.h>
#include<stdio.h>
#include<math.h>

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

    /*int numero1, numero2, numero3;
    printf("Ingrese el primer numero");
    scanf("%i", &numero1);
    printf("Ingrese el segundo numero");
    scanf("%i", &numero2);
    printf("Ingrese el tercer numero");
    scanf("%i", &numero3);

    if(numero1 > numero2 && numero1 > numero3){
        printf("El numero mayor es el %i", numero1);
    }else if(numero2 > numero3 && numero2 > numero1){
        printf("El numero mayor es el numero %i", numero2);
    }else{
        printf("El numero mayor es el numero %i", numero3);
    }*/

//---------------------------------------------------------------------

    /*int numero;
    printf("Ingrese un numero");
    scanf("%i", &numero);
    if(numero > 0){
        printf("El numero es positivo");
    }else if(numero < 0){
        printf("El numero es negativo");
    }else{
        printf("El numero es nulo");
    }*/

//------------------------------------------------------------------


    /*int numero;
    int contador;
    printf("Ingrese un numero");
    scanf("%i", &numero);
    while(numero != 0){
        numero = numero / 10;
        contador++;
    }
    if(contador == 1){
        printf("El numero tiene %i", contador);
    }else if(contador == 2){
        printf("El numero tiene %i", contador);
    }else if(contador == 3){
        printf("El numero tiene %i", contador);
    }else{
        printf("Error, Longitud demaciado larga");
    }*/
    //----------------------------------------------------------------

    /*int totalPreguntas, totalPreguntasCorrectas;
    int porcentaje;
    printf("Ingrese el total de preguntas que realizo en el examen");
    scanf("%i", &totalPreguntas);
    printf("Ingrese el total de preguntas correctas");
    scanf("%i", &totalPreguntasCorrectas);
    porcentaje = ((totalPreguntasCorrectas * 100) / totalPreguntas);
    if(porcentaje >= 90){
        printf("Nivel máximo, porque su porcentaje es de:  %i", porcentaje);
    }else if(porcentaje >= 75 && porcentaje < 90){
        printf("Nivel medio porque su porcentaje es de %i", porcentaje);
    }else if(porcentaje >= 50 && porcentaje < 75){
        printf("Nivel regular porque su porcentaje es de %i", porcentaje);
    }else{
        printf("Fuerza, estudia mas!!!");
    }*/

    //----------------------------------------------------------------

    /*int dia, mes, anio;
    printf("Ingrese el dia");
    scanf("%i", &dia);
    printf("Ingrese el mes");
    scanf("%i", &mes);
    printf("Ingrese el año");
    scanf("%i", &anio);
    if (mes == 1 || mes == 2 || mes == 3){
        printf("Hace parte al primer trimestre del año");
    }else{
        printf("No hace parte al primer trimestre del año");
    }*/

    //---------------------------------------------------------------

    /*int dia, mes, anio;
    printf("Ingrese el dia");
    scanf("%i", &dia);
    printf("Ingrese el mes");
    scanf("%i", &mes);
    printf("Ingrese el año");
    scanf("%i", &anio);
    if (dia == 25 || dia == 24){
        if(mes == 12){
            printf("En hora buena es navidad!!!");
        }
    }
    printf("Sorry, faltan %i meses para que sea navidad", (12-mes));*/

    //-----------------------------------------------------------

    /*int numero1, numero2, numero3, suma;
    printf("Ingrese el primer valor");
    scanf("%i", &numero1);
    printf("Ingrese el segundo valor");
    scanf("%i", &numero2);
    printf("Ingrese el tercer valor");
    scanf("%i", &numero3);
    if(numero1 == numero2){
        suma = numero1 + numero2;
        suma = suma * numero3;
        printf("EL resultado es: %i", suma);
    }else{
        printf("Sigue intentando!!!");
    }*/


    //---------------------------------------------------------------

   /* int numero1, numero2, numero3;
    printf("Ingrese el primer valor");
    scanf("%i", &numero1);
    printf("Ingrese el segundo valor");
    scanf("%i", &numero2);
    printf("Ingrese el tercer valor");
    scanf("%i", &numero3);
    if(numero1 < 10 && numero2 < 10 && numero3 < 10){
        printf("Todos los numeros ingresados son menores a Diez");
    }else{
        printf("Algunos numeros son mayores a Diez");
    }*/
    
    /*int numero1, numero2, numero3;
    printf("Ingrese el primer valor");
    scanf("%i", &numero1);
    printf("Ingrese el segundo valor");
    scanf("%i", &numero2);
    printf("Ingrese el tercer valor");
    scanf("%i", &numero3);
    if(numero1 < 10 || numero2 < 10 || numero3 < 10){
        printf("Alguno de los numero es menor a 10");
    }else{
        printf("Todos los numeros son mayores a 10");
    }*/

    /*int valorX, valorY;
    printf("Ingrese el valor en X");
    scanf("%i", &valorX);
    printf("Ingrese el valor en Y");
    scanf("%i", &valorY);
    if(valorX > 0 && valorY > 0){
        printf("Estas ubicado en el Primer cuadrante");
    }else if(valorX < 0 && valorY > 0){
        printf("Estas ubicado en el segundo cuadrante");
    }else if(valorX < 0 && valorY < 0){
        printf("Estas ubicado en el tercer cuadrante");
    }else{
        printf("Estas ubicado en el Cuarto cuadrante");
    }*/


    /*int antiguedad;
    float sueldo;
    int sueldoTotal;
    printf("Ingrese los años trabajados en la empresa");
    scanf("%i", &antiguedad);
    printf("Ingrese el sueldo que gana actualmente");
    scanf("%f", &sueldo);
    if(sueldo < 500 && antiguedad >= 10){
        sueldoTotal = round(sueldo + (sueldo*0.20)); 
        printf("Su nuevo sueldo es de %d", sueldoTotal);
    }else if(sueldo < 500 && antiguedad < 10){
        sueldoTotal = sueldo + (sueldo * 0.05);
        printf("Su nuevo sueldo es de %d", sueldoTotal);
    }else{
        printf("Su sueldo es de %f", sueldo);
    }*/

    /*int numero1, numero2, numero3;
    printf("Ingrese el primer valor");
    scanf("%i", &numero1);
    printf("Ingrese el segundo valor");
    scanf("%i", &numero2);
    printf("Ingrese el tercer valor");
    scanf("%i", &numero3);
    if(numero1 < numero2 && numero1 < numero3){
        printf("El numero menor es %i", numero1);
    }else{
        if(numero2 < numero3){
            printf("EL numero menor el es numero %i", numero2);
    }else{
        printf("El numero menor es el numero %i", numero3) ;
    }

    }

    if(numero1 > numero2 && numero1 > numero3){
        printf("El numero mayor es el %i", numero1);
    }else{
        if(numero2 > numero3){
            printf("El numero mayor es el %i", numero2);
    }else{
        printf("El numero mayor es el %i", numero3);
    }
    }*/
     
    
    /*int numero = 2;
     while (numero <= 100){
        printf("\n%i",numero);
       numero+=2;
     }
   */

    /*int numero, contador;
    printf("Ingrese un numero");
    scanf("%i", &numero);
    while (contador <= numero)
    {
        printf("\n%i", contador);
        contador++;
    }*/

    /*int value;
    int suma, contador = 1;
    while(contador <= 10){
        printf("Ingrese el %i numero", contador);
        scanf("%i", &value);
        suma = suma + value; 
        contador++;
    }
    printf("La suma de los valores es de %i ", suma);
    printf("El promedio de los numeros ingresados es de %i", (suma/10));*/

    //perfiles de hierro
    //lote de N piesas

    /*int contador = 1, cantidad, piezasComprendidas = 0;
    float piezas;

    printf("Ingrese la cantidad de piezas ");
    scanf("%i", &cantidad);

    while(contador <= cantidad){
        printf("Ingrese la pieza numero %i \n", contador);
        scanf("%f", &piezas);
        if(piezas >= 1.20 && piezas <= 1.30){
            piezasComprendidas++;
        }
        contador++;
    }
    printf("La cantidad de piezas que cumplen con la medidad es de %i", piezasComprendidas);*/


    /*int notas = 10, contador = 1, notasMayores = 0, notasMenos = 0;
    while(contador <= 10){
        printf("Ingrese la nota %i\n", contador);
        scanf("%i", &notas);
        if(notas >= 7){
            notasMayores++;
        }else{
            notasMenos++;
        }
        contador+=1;
    }
    printf("La cantidad de notas mayores o iguales a 7 es de %i\n", notasMayores);
    printf("La cantidad de notas menores a 7 es de %i", notasMenos);*/

    
    /*int contador = 1, cantidadPersonas;
    float altura, suma;
    printf("Ingrese la cantidad de personas");
    scanf("%i", &cantidadPersonas);
    while(contador <= cantidadPersonas){
        printf("Ingrese la altura de la persona numero %i\n", contador);
        scanf("%f", &altura);
        suma+=altura;
        contador++;
    }

    printf("El promedio de personas acorde a su altura es de %f", (suma/cantidadPersonas));*/

   /* int empleados, sueldoMayorA300 = 0, sueldoEntre100Y300 = 0, contador = 1, gatosTotalEmpleados = 0, sueldo;
    printf("Ingrese la cantidad de empleados");
    scanf("%i", &empleados);
    while(contador <= empleados){
        printf("Ingrese el sueldo del empleado %i ", contador);
        scanf("%i", &sueldo);
        if(sueldo <= 300){
            sueldoEntre100Y300++;
        }else{
            sueldoMayorA300++;
        }
        gatosTotalEmpleados +=sueldo;
        contador++;
    }  
    printf("El numero de empleados que tienen un sueldo que de 100 y 300 es de %i personas \n ", sueldoEntre100Y300);
    printf("El numero de empleados que tienen un sueldo mayor a 300 es de %i personas\n ", sueldoMayorA300);
    printf("El importe que gasta la empresa en sueldos de empleados es de %i ", gatosTotalEmpleados);*/


   /*int contador = 1, value = 11;
    while(contador <= 25){
        printf("%i", value);
        printf("\n");
        value += 11;
        contador++;
    }*/

/*
    int tabla = 8, contador = 1;
    while(contador <= 500){
        contador++;
        printf("%i",tabla);
        printf("\n");
        tabla = 8 * contador;
    }*/


   /* int contador = 1, valores1, valores2;
    int sumaPrimeraLista, sumaSegundaLista;
    while(contador <= 15){
        printf("Ingrese el %i valor para la Primera lista", contador);
        scanf("%i", &valores1);
        sumaPrimeraLista += valores1;
        contador++;
    }
    contador = 1;
    printf("\n");
    while(contador <= 15){
        printf("Ingrese el %i valore para la segunda lista", contador);
        scanf("%i", &valores2);
        sumaSegundaLista += valores2;
        contador++;
    }
    if(sumaPrimeraLista > sumaSegundaLista){
        printf("Lista 1 mayor");
    }else if(sumaSegundaLista > sumaPrimeraLista){
        printf("Lista 2 mayor");
    }else{
        printf("Listas iguales");
    }*/

    /*int numerosPares, numerosImpares = 0, contador  = 1, numeros, valores;
    printf("Ingrese la cantidad de numeros");
    scanf("%i", &numeros);
    while(contador <= numeros){
        printf("Ingrese el %i numero ", contador );
        scanf("%i", &valores);
        if(valores%2 == 0){
            numerosPares++;
        }else{
            numerosImpares++;
        }
        contador++;
    }
    printf("El total de numeos Pares es de %i y el total de numeros Impares es de %i ", numerosPares, numerosImpares);*/

    /*for (int i = 1; i <= 100; i++){
        printf("%i", i);
        printf("\n");
    }*/

    /*int valores, acumulador = 0;
    for(int i = 0; i < 10;i++){
        printf("Ingrese el %i numero", i+1);
        scanf("%i", &valores);
        acumulador += valores;
    }
    printf("La suma de los valores ingresados es %i y el promedio es de %i", acumulador, acumulador/10);*/


   /*int notas, aprobados = 0, reprobados = 0;
    for(int i = 0; i < 10 ;i++){
        printf("Ingrese la nota del alumno %i", i+1);
        printf("\n");
        scanf("%i", &notas);
        if(notas >= 7){
            aprobados++;
        }else{
            reprobados++;
        }
    }
    printf("El total de alumnos aprobados es de %i y el total de alumos reprobados %i ", aprobados, reprobados);*/

    /*int numeros, multiplosCinco = 0, multiplosTres = 0;
    for(int i = 0; i < 10 ; i++){
        printf("Ingrese el %i numero", i+1);
        scanf("%i", &numeros);
        if(numeros%3 == 0){
            multiplosTres++;
        }
        if(numeros%5 == 0){
            multiplosCinco++;
        }
    }
    printf("Los numeros multiplos de 5 son %i, y los multiplos de 3 son %i", multiplosCinco, multiplosTres);*/

    /*int valores, contador = 0, cantidad;
    printf("Ingrese la cantidad de valores");
    scanf("%i", &cantidad);
    for (int i = 0; i < cantidad; i++){
        printf("Ingrese el valor %i", i+1);
        scanf("%i", &valores);
        if(valores >= 1000){
            contador++;
        }
    }
    printf("La cantidad de valores mayores o iguales a 100 es de %i", contador);*/
    
    /*int cantidad, base, altura, resultadoSuperficie, contador = 0;
    printf("Ingrese la cantidad de triangulos");
    scanf("%i", &cantidad);
    for(int i = 0; i < cantidad ;i++){
        printf("Ingrese la base del %i triangulo ", i+1);
        scanf("%i", &base);
        printf("\n");
        printf("Ingrese la altura del %i triangulo ", i+1);
        scanf("%i", &altura);
        printf("\n");
        resultadoSuperficie = (base * altura )/2;
        if(resultadoSuperficie > 12){
            contador++;
        }
    }
    printf("La cantidad de triangulos con superficie mayor a 12 es de %i ", contador);*/



   /* int numeros, suma = 0;
    for (int i = 0; i < 10; i++){
        printf("Ingrese el %i numero", i+1);
        printf("\n");
        scanf("%i", &numeros);
        if(i > 4){
            suma+=numeros;
        }
    }
    printf("La suma de los 5 ultimos numeros es de %i", suma);*/

    /*int tabla = 5, multiplicacion = 5;
    for(int i = 1; i <= 10 ;i++){
        multiplicacion = tabla * i;
        printf("%i X %i = %i", tabla, i, multiplicacion);
        printf("\n");
        
    }*/

    /*int tabla, multiplicacion = 0;
    printf("Ingrese un numero rango (1-10)");
    scanf("%i", &tabla);
    for(int i = 1; i <= 12 ;i++){
        multiplicacion = tabla * i;
        printf("%i X %i = %i", tabla, i, multiplicacion);
        printf("\n");
    }*/

   /* int contadorEquilatero = 0, contadorIsosceles = 0, contadorEscaleno = 0, cantidad;
    int lado1, lado2, lado3;
    printf("Ingrese la cantidad de triangulos");
    scanf("%i", &cantidad);
    for (int i = 0; i < cantidad; i++){
        printf("\n");
        printf("Ingrese los datos para el %i triangulo", i+1);
        printf("\n");
        printf("Ingrese el primer lado");
        scanf("%i", &lado1);
        printf("\n");
        printf("Ingrese el segundo lado");
        scanf("%i", &lado2);
        printf("\n");
        printf("Ingrese el tercer lado");
        scanf("%i", &lado3);
        printf("\n");
        if(lado1 == lado2 && lado1 == lado3){
            printf("\n");
            printf("El triangulo es Equilatero");
            contadorEquilatero++;
        }else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
            printf("\n");
            printf("El triangulo es Isosceles");
            contadorIsosceles++;
        }else{
            printf("\n");
            printf("El triangulo es Escaleno");
            contadorEscaleno++;
        }
    }

    printf("La cantidad de triangulos Equilateros es de %i \n La cantidad de triangulos Isosceles es de %i \n La cantidad de triangulos Escalenos es de %i ", contadorEquilatero, contadorIsosceles, contadorEscaleno);
      printf("\n");
       if(contadorEquilatero < contadorIsosceles && contadorEquilatero < contadorEscaleno){
        printf("El triangulo con menor cantidad es Equilatero");
    }else if(contadorIsosceles < contadorEscaleno){
        printf("El triangulo con menor cantidad es Isosceles");
    }else{
        printf("El triangulo con menor cantidad es Escaleno");
    }*/

    
    
    




    getchar();
    return 0;


    
}