#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

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

    /*int cantidad, coorX, coorY, primerCuadrante = 0, segundoCuadrante = 0, tercerCuadrante = 0, cuartoCuadrante = 0;
    printf("Ingrese la cantidad de puntos");
    scanf("%i", &cantidad);
    for (int i = 0; i < cantidad; i++){
        printf("\n");
        printf("Ingrese el valor en X de la %i coordenada", i+1);
        scanf("%i", &coorX);
        printf("\n");
        printf("Ingrese el valor en Y de la %i coordenada", i+1);
        scanf("%i", &coorY);
        printf("\n");
        if(coorX > 0 && coorY > 0){
            primerCuadrante++;
        }else if(coorX < 0 && coorY > 0){
            segundoCuadrante++;
        }else if(coorX < 0 && coorY < 0){
            tercerCuadrante++;
        }else{
            cuartoCuadrante++;
        }
    }
    printf("La cantidad de puntos en el primer cuadrante es de: %i", primerCuadrante);
    printf("\n");
    printf("La cantidad de puntos en el segundo cuadrante es de: %i", segundoCuadrante);
    printf("\n");
    printf("La cantidad de puntos en el tercer cuadrante es de: %i", tercerCuadrante);
    printf("\n");
    printf("La cantidad de puntos en el cuarto cuadrante es de: %i", cuartoCuadrante);*/
    
    /*int valores, numNegativos = 0, numPositivos = 0, multiplosDeQuince = 0, sumaPares = 0;
    for (int i = 0; i < 10; i++){
        printf("Ingrese el %i numero \t", i+1);
        scanf("%i", &valores);
        if(valores < 0){
            numNegativos++;
        }
        if (valores > 0){
            numPositivos++;
        }
        if(valores%15 == 0){
            multiplosDeQuince++;
        }
        if (valores%2 == 0){
            sumaPares += valores;
        }
    }
    printf("La cantidad de numeros negativos es de: %i", numNegativos);
    printf("\n");
    printf("La cantidad de numeros positivos es de: %i", numPositivos);
    printf("\n");
    printf("La cantidad de multiplos de 15 es de: %i", multiplosDeQuince);
    printf("\n");
    printf("La suma de numeros pares es de: %i", sumaPares);*/
    


   /*int edadesDeLaManana, edadesDeLaTarde, edadesDeLaNoche, inicio = 5, reguladorDatos = 0;
    int promedio1 = 0, promedio2 = 0, promedio3 = 0, i;
    for ( i = 1; i <= inicio; i++){
        if(reguladorDatos == 0){
            printf("\n");
            printf("Ingrese la edad para el estudiante del turno de la manana \t");
            scanf("%i", &edadesDeLaManana);
            promedio1 += edadesDeLaManana;
        }else if (reguladorDatos == 1){
            printf("\n");
            printf("Ingrese la edad para el estudiante del turno de la tarde \t");
            scanf("%i", &edadesDeLaTarde);
            promedio2 += edadesDeLaTarde;
        }else{
            printf("\n");
            printf("Ingrese la edad  para el estudiante del turno de la noche \t");
            scanf("%i", &edadesDeLaNoche);
            promedio3 += edadesDeLaNoche;
        }
        if(i == 5){
            inicio = 11;
            reguladorDatos++;
        }else if(i  == 11){
            inicio = 22;
            reguladorDatos++;
        }
    }
    promedio1 /= 5;
    promedio2 /= 6;
    promedio3 /= 11;
    printf("El promedio de edades de estudiantes de la manana es de: %i", promedio1);
    printf("\n");
    printf("El promedio de edades de estudiantes de la tarde es de: %i", promedio2);
    printf("\n");
    printf("El promedio de edades de estudiantes de la noche es de: %i", promedio3);
    printf("\n");
    if(promedio1 < promedio2 && promedio1 < promedio3){
        printf("El menor promedio es de los estudiantes de la manana con %i", promedio1);
    }else if(promedio2 < promedio3){
            printf("El menor promedio es de los estudiantes de la tarde con %i", promedio2);
        }else{
            printf("El menor promedio es de los estudiantes de la noche con %i", promedio3);
    }*/

    /*int valor,contador = 0;
    printf("Ingrese un valor");
    scanf("%i", &valor);
    do
    {
        valor /= 10;
        contador++;
    } while (valor != 0);
    printf("La cantidad de dijitos que tiene el numero es de: %i", contador);*/

   /*int valores, suma = 0, contador = 0;
    do
    {
        printf("Ingrese un valor");
        scanf("%i", &valores);
        suma+= valores;
        contador++;
        if(valores == 0){
            contador--;
            suma /= contador;
        }
    } while (valores != 0);
    printf("El promedio de los  %i numeros ingresados es de %i",contador, suma);*/
    
    
    /*float piezas;
    int contadorPiezas = 0, piezasEntreNueveYDiez = 0, piezasMayoresADiez = 0, piezasMenoresANueve = 0;
    do
    {
        printf("Ingrese el peso de la Pieza");
        scanf("%f", &piezas);
        contadorPiezas++;
        if(piezas >= 9.8 && piezas <= 10.2){
            piezasEntreNueveYDiez++;
        }else if(piezas > 10.2){
            piezasMayoresADiez++;
        }else{
            piezasMenoresANueve++;
        }
    } while (piezas != 0);
    printf("\n");
    printf("Las piezas que tienen un peso entre 9.8 Kg. y 10.2 Kg son %i",piezasEntreNueveYDiez);
    printf("\n");
    printf("Las piezas que tienen un peso mayor a 10.2 Kg son %i",piezasMayoresADiez);
    printf("\n");
    printf("Las piezas que tienen un peso menor 9.8 Kg son %i",piezasMenoresANueve-1);
    printf("\n");
    printf("La cantidad de piezas procesadas es de %i", contadorPiezas-1);*/


    /*int suma = 0, valores;
    do
    {
        printf("Ingrese un valor");
        scanf("%i", &valores);
        if(valores != 9999){
            suma += valores;
        }else{
            printf("Ha finalizado la carga de los numeros");
            printf("\n");
        }
    } while (valores != 9999);
    printf("La suma de los valores ingresados es de %i", suma);
    printf("\n");
    if(suma == 0){
        printf("El valor total es 0");
    }else if(suma > 0){
        printf("El valore ingresado es mayor a 0");
    }else{
        printf("El valor ingresado es menor a 0");
    }*/


   /* float suma = 0, saldoDeLaCuenta;
    int numeroCuenta;
    do{
        printf("Ingrese el numero de la cuenta (Menor a 0 para salir)");
        scanf("%i", &numeroCuenta);
        printf("\n");
        if(numeroCuenta >= 0){
     printf("Ingrese el saldo de la cuenta");
        scanf("%f", &saldoDeLaCuenta);
        printf("\n");
        if(saldoDeLaCuenta > 0){
            printf("Acreedor");
            suma += saldoDeLaCuenta;
            printf("\n");
        }else if(saldoDeLaCuenta < 0){
            printf("Deudor");
            printf("\n");
        }else{
            printf("Nulo");
             printf("\n");
        }
        }
    } while (numeroCuenta >= 0 );
    printf("\n");
    printf("La suma total de los saldos de los acreedores es de %0.2f", suma);*/

    /*int sueldos[5];
    for (int i = 0; i < 5; i++){
        printf("Ingrese el %i sueldo del empleado", i+1);
        scanf("%i", &sueldos[i]);
    }
    printf("Listado de sueldos");
    printf("\n");
    for (int j = 0; j < 5; j++){
        printf("%i", sueldos[j]);
        printf("\n");
    }*/
    
    
    /*float alturas[5], suma = 0;
    int  mayorAlPromedio = 0, menorAlPromedio = 0;
    for (int i = 0; i < 5; i++){
        printf("Ingrese la altura de la %i persona", i+1);
        scanf("%f", &alturas[i]);
        suma += alturas[i];
        printf("\n");
    }
    suma /= 5;
    for (int j = 0; j < 5; j++){
        if(alturas[j] > suma){
            mayorAlPromedio++;
        }else{
            menorAlPromedio++;
        }
    }
    printf("El promedio total de las cinco personas es de %0.1f ", suma);
    printf("\n");
    printf("La cantidad de personas con altura mayor al promedio es de %i ", mayorAlPromedio);
    printf("\n");
    printf("La cantidad de personas con altura menor al promedio es de %i ", menorAlPromedio);*/
    
    /*float sueldoManana[4], sueldoTarde[4], totalManana = 0, totalTarde = 0;
    for (int i = 0; i < 4; i++){
        printf("Ingrese el sueldo del %i empleado del turno de la Manana", i+1);
        scanf("%f", &sueldoManana[i]);
        printf("\n");
        printf("Ingrese el sueldo del %i empleado del turno de la Tarde", i+1);
        scanf("%f", &sueldoTarde[i]);
        printf("\n");
        totalManana += sueldoManana[i];
        totalTarde += sueldoTarde[i];
    }
    printf("\n");
    printf("El total de gatos de turno de la manana es de %0.2f", totalManana);
    printf("\n");
    printf("El total de gatos de turno de la tarde es de %0.2f", totalTarde);*/


    /*int valores[8], suma = 0, acumuladoMayorA36 = 0, cantidadDeValoresMayor50 = 0;
    for (int i = 0; i < 8; i++){
        printf("Ingrese el %i valor de la lista", i+1);
        scanf("%i", &valores[i]);
        suma += valores[i];
        if(valores[i] > 36){
            acumuladoMayorA36 += valores[i];
        }
        if (valores[i] > 50){
            cantidadDeValoresMayor50++;
        }
    }
    printf("\n");
    printf("La suma total de los valores ingresados es de %i", suma);
    printf("\n");
    printf("El acumulado de los valores mayores a 36 es de %i", acumuladoMayorA36);
    printf("\n");
    printf("La cantidad de valores mayores a 50 son de %i", cantidadDeValoresMayor50);*/
    
    /*int oneVector[4], twoVector[4], threeVector[4], limite = 4, decrementador = 0;
    for (int i = 0; i < limite; i++){
        if(i < 4){
        printf("Ingrese el valor %i para la primera lista", i+1);
        scanf("%i", &oneVector[i]);
        printf("\n");
        }
        if(i == 3 || i > 3){
            limite = 7;
        printf("Ingrese el valor %i para la segunda lista", decrementador+1);
        scanf("%i", &twoVector[decrementador]);
        decrementador++;
        printf("\n");
        }
    }
    for (int j = 0; j < 4; j++){
        threeVector[j] = oneVector[j] + twoVector[j];
    }
    printf("\n");
    printf("El vector resultante es: ");
    printf("\n");
    for (int r = 0; r < 4; r++){
        printf("%i",threeVector[r]);
        printf("\n");
    }*/
    
    
    /*float cursoA[5], cursoB[5], promedioCursoA = 0, promedioCursoB = 0;
    int  limite = 5, decrementador = 0;
    for (int i = 0; i < limite; i++){
        if(i < 5){
        printf("Ingrese la nota %i del estudiante del grupo A \t", i+1);
        scanf("%f", &cursoA[i]);
        printf("\n");
        promedioCursoA += cursoA[i];
        }
        if(i == 4 || i > 4){
            limite = 9;
        printf("Ingrese la nota %i del estudiante del grupo B \t", decrementador+1);
        scanf("%f", &cursoB[decrementador]);
        promedioCursoB += cursoB[decrementador];
        decrementador++;
        printf("\n");
        }
    }
    promedioCursoA /= 5;
    promedioCursoB /= 5;
    printf("\n");
    if(promedioCursoA > promedioCursoB){
        printf("El mayor promedio lo obtuvo el curso A con %0.1f", promedioCursoA);
    }else{
        printf("El mayor promedio lo obtuvo el curso B con %0.1f", promedioCursoB);
    }*/


    /*int array[10], acumulador = 0;
    for (int i = 0; i < 10; i++){
        printf("Ingrese el %i valor de el vector", i);
        scanf("%i", &array[i]);
        printf("\n");
    }
    //Metodo de la burbuja
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            if(array[j+1]< array[j]){
                acumulador = array[j+1];
                array[j+1] = array[j];
                array[j] = acumulador;
            }
        }
    }

    for (int i = 0; i < 10; i++){
        printf("%i", array[i]);
        printf("\n");
    }*/
    
    /*char valor1 = 45;  
    char valor2 = 'H';
    char valor3;
    printf("Ingrese el valor para la variable Char");
    scanf(" %c", &valor3);
    printf("Los valores ingresados son: ");
    printf("\n");
    printf("%c", valor1);
    printf("\n");
    printf("%c", valor2);
    printf("\n");
    printf("%c", valor3);*/

    /*int valores, suma = 0;
    char eleccion = 's';
    do
    {
        printf("Ingrese un valor");
        scanf("%i", &valores);
        suma += valores;
        printf("Quiere seguir ingresando datos (s/n)");
        scanf(" %c", &eleccion);
    } while (eleccion == 's'|| eleccion == 'S');
    printf("\n");
    printf("La suma de los valores es %i", suma);*/



    /*char abecedario ;
    for ( abecedario = 65; abecedario <= 'z'; abecedario++){
        printf(" %c-", abecedario);
    }
    printf("\n");
    for ( abecedario = 'A'; abecedario <= 'Z'; abecedario++){
        printf(" %c-", abecedario);
    }*/

    /*int valorOne, valorTwo;
    char caracteresArigmeticos;
    printf("Ingrese el primer valor \t");
    scanf("%i", &valorOne);
    printf("Ingrese el segundo valor \t");
    scanf("%i", &valorTwo);
    printf("\n");
    printf("Que operacion quiere realizar con estos dos numeros (+)(-)(*)(/)");
    scanf(" %c", &caracteresArigmeticos);
    printf("\n");
    if(caracteresArigmeticos == '+'){
        printf("La suma es: %i", (valorOne+valorTwo));
    }else if(caracteresArigmeticos == '-'){
        printf("La resta es: %i", (valorOne-valorTwo));
    }else if(caracteresArigmeticos == '*'){
        printf("La multiplicacion es: %i", (valorOne*valorTwo));
    }else{
        printf("La division es: %i", (valorOne/valorTwo));
    }*/

    /*int edadPersonaOne, edadPersonaTwo;
    char sexoOne, sexoTwo;
    printf("Ingrese la edad de la primera persona \t");
    scanf("%i", &edadPersonaOne);
    printf("Ingrese el genero de la primera persona (f/m)\t");
    scanf(" %c", &sexoOne);
    printf("\n");
    printf("Ingrese la edad de la segunda persona \t");
    scanf("%i", &edadPersonaTwo);
    printf("Ingrese el genero de la segunda persona (f/m)\t");
    scanf(" %c", &sexoTwo);
    printf("\n");
    if(edadPersonaOne > edadPersonaTwo){
        printf("La primera persona es mayor con %i anios y genero %c ", edadPersonaOne, sexoOne);
    }else{
        printf("La segunda persona es mayor con %i anios y genero %c ", edadPersonaTwo, sexoTwo);
    }*/


    /*char nombreProgrammer[15] = "Maicol Cubides";
    printf("%s", nombreProgrammer);*/

    /*char nombrePrimeraPersona[21];
    char nombreSegundaPersona[21];
    int primeraEdad, segundaEdad;
    printf("Ingrese el Nombre de la primera persona \t");
    gets(nombrePrimeraPersona);
     printf("Ingrese al edad de la primera persona \t");
    scanf("%i", &primeraEdad);
    printf("\n");
    fflush(stdin); 
    printf("Ingrese el Nombre de la segunda persona \t");
    gets(nombreSegundaPersona);
    printf("Ingrese al edad de la segunda persona \t");
    scanf("%i", &segundaEdad);
    printf("\n");
    if(primeraEdad > segundaEdad){
        printf("La persona %s tiene mas edad con %i anios", nombrePrimeraPersona, primeraEdad);
    }else{
        printf("La persona %s tiene mas edad con %i anios", nombreSegundaPersona, segundaEdad);
    }*/


    /*char palabra[30];
    int contadorVocales = 0, x = 0;
    printf("Ingrese una palabra \t");
    gets(palabra);
   
    while (palabra[x]!='\0'){
        if(palabra[x] == 'a' || palabra[x] == 'e' || palabra[x] == 'i' || palabra[x] == 'o' || palabra[x] == 'u'){
            contadorVocales++;
        }
        x++;
    }
    printf("La cantidad de vocales que tiene la palabra %s es de %i", palabra, contadorVocales);*/

    /*char palabra[30];
    int contador = 0, x = 0;
    printf("Ingrese una palabra"); 
    gets(palabra);
    printf("\n");
    while (palabra[x]!='\0'){
        contador++;
        x++;
    }
    printf("La cantidad de caracteres que conforman la palabra %s es de %i", palabra, contador);*/



    /*char oracion[200];
    int contadorPalabras = 1, x = 0;
    printf("Ingrese la oracion");
    gets(oracion);
    printf("\n");
    while (oracion[x] != '\0'){
        if(oracion[x] != ' ' && oracion[x+1] == ' '){
            contadorPalabras++;
        }
        x++;
    }
    if(oracion[0] == '\0'){
        contadorPalabras = 0;
    }
    printf("La oracion %s tiene %i palabras", oracion, contadorPalabras);*/
    
    /*char palabra[20];
    printf("Ingrese una palabra \t");
    gets(palabra);
    printf("\n");
    if(palabra[0] == 'a'){
        printf("La palabra %s comienza con la vocal a", palabra);
    }else if(palabra[0] == 'A'){
        printf("La palabra %s comienza con la vocal A", palabra);
    }else{
        printf("La palabra %s comienza con la vocal %c", palabra, palabra[0]);
    }*/

    /*char palabra[30];
    int x = 0;
    printf("Ingrese una palabra");
    gets(palabra);
    printf("\n");
    while (palabra[x] != '\0'){
        if(palabra[x] == 'a' || palabra[x] == 'e' || palabra[x] == 'i' || palabra[x] == 'o' || palabra[x] == 'u'){
            palabra[x] = '-';
        }
        x++;
    }
    printf("%s", palabra);*/

    /*char palabra[30];
    printf("Ingrese una palabra");
    gets(palabra);
    printf("\n");
    int longitud = strlen(palabra);
    printf("La longitud de la palabra es de %i", longitud);*/

    /*char primerNombre[31];
    char segundoNombre[31];
    printf("Ingrese el primer nombre");
    gets(primerNombre);
    printf("\n");

    printf("Ingrese el segundo nombre");
    gets(segundoNombre);
    printf("\n");

    if(strcmp(primerNombre, segundoNombre) == 0){
        printf("Los nombres tienen la misma longitud de caracteres");
    }else if(strcmp(primerNombre, segundoNombre) > 0){
        printf("%s tiene mas caracteres", primerNombre);
    }else{
        printf("%s tiene mas caracteres", segundoNombre);
    }*/

    /*char personaOne[31];
    char personaTwo[31];
    char personaResultante[31];
    printf("Ingrese el nombre de la primera persona \t");
    gets(personaOne);
    printf("Ingrese el nombre de la segudnda persona \t");
    gets(personaTwo);
    if(strlen(personaOne) > strlen(personaTwo)){
        strcpy(personaResultante, personaOne);
    }else{
        strcpy(personaResultante, personaTwo);
    }
    printf("%s", personaResultante);*/



    //para dejar un espacio poder utilizar la funcion strcpy(cadena, "")

    /*char nombre[31];
    char apellido[31];
    char concatenacion[31];
    printf("Ingrese el nombre de la persona \t");
    gets(nombre);
    printf("Ingrese el apellido de la persona \t");
    gets(apellido);
    strcpy(concatenacion,nombre);
    strcat(concatenacion," ");
    strcat(concatenacion, apellido);
    printf("\n");
    printf("El nombre concatenado es: %s", concatenacion);*/

    /*char parteClaveOne[31];
    char parteClaveTwo[31];
    char concatenarString[62];
    printf("Ingrese la primera parte de la clave");
    gets(parteClaveOne);
    printf("\n");
    printf("Ingrese la segunda parte de la clave");
    gets(parteClaveTwo);
    printf("\n");
    strcpy(concatenarString,parteClaveOne);
    strcat(concatenarString,parteClaveTwo);
    if(strcmp(concatenarString,"abc123") == 0){
        printf("Correcto");
    }else{
        printf("Clave Incorrecta");
    }*/

    /*char nombreOne[31];
    char nombreTwo[31];
    printf("Ingrese el primer nombre");
    gets(nombreOne);
    printf("\n");
    printf("Ingrese el segundo nombre");
    gets(nombreTwo);
    printf("\n");
    if(strcmp(nombreOne,nombreTwo) == 0){
        printf("Los nombres son iguales");
    }else if(strcmp(nombreOne, nombreTwo) > 0){
    printf("%s", nombreTwo);
    printf("\n");
    printf("%s", nombreOne);
    }else{
        printf("%s", nombreTwo);
        printf("\n");
        printf("%s", nombreOne);
    }*/

    /*char primerNombre[31];
    char segundoNombre[31];
    printf("Ingrese el primer nombre");
    gets(primerNombre);
    printf("\n");
    printf("Ingrese el segundo nombre");
    gets(segundoNombre);
    if(strlen(primerNombre) > strlen(segundoNombre)){
    printf("%s\n%s", primerNombre,segundoNombre);
    }else if(strlen(segundoNombre) > strlen(primerNombre)){
    printf("%s\n%s", segundoNombre,primerNombre);
    }*/

    /*char primerNombre[31], segundoNombre[31], tercerNombre[31];
    char concatenacionNombres[93];
    printf("Ingrese el primer nombre");
    gets(primerNombre);
    printf("\n");
    printf("Ingrese el segundo nombre");
    gets(segundoNombre);
    printf("\n");
    printf("Ingrese el tercer nombre");
    gets(tercerNombre);
    printf("\n");
    if(strcmp(primerNombre, segundoNombre) > 0 && strcmp(primerNombre, tercerNombre) > 0 && strcmp(segundoNombre, tercerNombre) > 0){
        strcpy(concatenacionNombres, tercerNombre);
        strcat(concatenacionNombres, ",");
        strcat(concatenacionNombres,segundoNombre);
        strcat(concatenacionNombres, ",");
        strcat(concatenacionNombres, primerNombre);
    }else{
        if(strcmp(primerNombre, segundoNombre) > 0 && strcmp(primerNombre, tercerNombre) > 0 && strcmp(tercerNombre,segundoNombre ) > 0){
        strcpy(concatenacionNombres, segundoNombre);
        strcat(concatenacionNombres, ",");
        strcat(concatenacionNombres,tercerNombre);
        strcat(concatenacionNombres, ",");
        strcat(concatenacionNombres, primerNombre);
        }else{
            if(strcmp(segundoNombre, primerNombre) > 0 && strcmp(segundoNombre, tercerNombre) > 0 && strcmp(primerNombre,tercerNombre ) > 0){
            strcpy(concatenacionNombres, tercerNombre);
            strcat(concatenacionNombres, ",");
            strcat(concatenacionNombres,primerNombre);
            strcat(concatenacionNombres, ",");
            strcat(concatenacionNombres, segundoNombre);  
            }else{
                if(strcmp(segundoNombre, primerNombre) > 0 && strcmp(segundoNombre, tercerNombre) > 0 && strcmp(tercerNombre,primerNombre ) > 0){
                    strcpy(concatenacionNombres, primerNombre);
                    strcat(concatenacionNombres, ",");
                    strcat(concatenacionNombres,tercerNombre);
                    strcat(concatenacionNombres, ",");
                    strcat(concatenacionNombres, segundoNombre);
                }else{
                    if(strcmp(tercerNombre, primerNombre) > 0 && strcmp(tercerNombre, segundoNombre) > 0 && strcmp(primerNombre,segundoNombre ) > 0){
                    strcpy(concatenacionNombres, segundoNombre);
                    strcat(concatenacionNombres, ",");
                    strcat(concatenacionNombres,primerNombre);
                    strcat(concatenacionNombres, ",");
                    strcat(concatenacionNombres, tercerNombre);
                    }else{
                        strcpy(concatenacionNombres, primerNombre);
                        strcat(concatenacionNombres, ",");
                        strcat(concatenacionNombres,segundoNombre);
                        strcat(concatenacionNombres, ",");
                        strcat(concatenacionNombres, tercerNombre);
                    }
                }
            }
        }
    }
    printf("La cadena quedaria de siguiente forma %s", concatenacionNombres);*/



    getchar();
    return 0;

}
