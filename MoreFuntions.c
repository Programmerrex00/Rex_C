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

/*void llenarDatosPersonas(char personas[5][30]){
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
}*/

//---------------------------------------------------------------------------------------------

/*void llenarDatosPersonas(char personas[5][30]){
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


void ordenarAlfabeticamenteLosDatos(char personas[5][30]){
    char aux[30];
    for (int j = 0; j < 5; j++){
        for (int i = 0; i < 5-1; i++){
            if(strcmp(personas[i+1],personas[i]) < 0){
                strcpy(aux, personas[i]);
                strcpy(personas[i], personas[i+1]);
                strcpy(personas[i+1], aux);
            }
        }
    }
    printf("\n");
}*/

//---------------------------------------------------------------------

/*void llenarDatosDeLasPersonas(char personas[5][30]){
    for (int i = 0; i < 5; i++){
        printf("Ingrese la %i persona", i+1);
        gets(personas[i]);
        printf("\n");
    }
}

void mostrarDatos(char personas[5][30]){
    for (int i = 0; i < 5; i++){
        printf("Persona %i: %s\n", i+1, personas[i]);
    }
}

void buscarDatoMenorAlfabeticamente(char personas[5][30]){
    char datoMenor[30];
    strcpy(datoMenor, personas[0]);
    for (int i = 0; i < 5; i++){
        if(strcmp(personas[i], datoMenor) < 0){
            strcpy(datoMenor, personas[i]);
        }
    }
    printf("\n El dato menor alfabeticamente es: %s", datoMenor);
    
}*/
//-----------------------------------------------------------
/*void cargarDatosDeEdadesYPersonas(char personas[5][30], int edades[5]){
    for (int i = 0; i < 5; i++){
        printf("Ingrese el nombre de la %i persona: ", i+1);
        gets(personas[i]);
        printf("\n");
        printf("cual es la edad de %s ", personas[i]);
        scanf("%i", &edades[i]);
        printf("\n");
        fflush(stdin); //Colocamos esto en la linea 196 para que limpie el buffe y puede seguir pidiendo datos, mas no se salte de linea
    }
}

void mostrarNombreMayoresDeEdad(char personas[5][30], int edades[5]){
    printf("Estas son las personas meyores de edad: \n");
    for (int i = 0; i < 5; i++){
        if(edades[i] >= 18){
            printf(" - %s \n", personas[i]);
        }
    }
}*/

//--------------------------------------------------------------------------------

/*void cargarNombreDeProductosYPrecios(char productos[5][30], float precios[5]){
    for (int i = 0; i < 5; i++){
        printf("Ingrese el nombre del %i producto: ", i+1);
        gets(productos[i]);
        printf("\n");
        printf("cual es el precio del producto %s ", productos[i]);
        scanf("%f", &precios[i]);
        printf("\n");
        fflush(stdin); //Colocamos esto en la linea 196 para que limpie el buffe y puede seguir pidiendo datos, mas no se salte de linea
    }
}

void mostrarProductosConUnPrecioMayorAlPrimero(float precios[5]){
    int cantidadProductosMayores = 0;
    printf("Estos son los productos con un presio mayor al primer Producto \n");
    for (int i = 1; i < 5; i++){
        if (precios[0] < precios[i]){
            cantidadProductosMayores++;
        }
    }
    printf("\n La cantidad de productos con un precio mayor al primero: %i", cantidadProductosMayores);
    
}*/

//---------------------------------------------------------------------------------

/*void perdirNombreYNotas(char estudiantes[4][30],char condicion[4][20], int notas[4]){
    for (int i = 0; i < 4; i++){
        printf("Ingrese el nombre del %i alumno: ", i+1);
        gets(estudiantes[i]);
        printf("\n");
        printf("Ingrese la nota del alumno %s:", estudiantes[i]);
        scanf("%i", &notas[i]);
        printf("\n");
        fflush(stdin);
        if(notas[i] >= 8){
            strcpy(condicion[i], "Muy Bueno");
        }else if(notas[i] >= 4 && notas[i] <= 7){
            strcpy(condicion[i], "Bueno");
        }else{
            strcpy(condicion[i], "Insuficiente");
        }
    }
}

void mostrarAlumnoYnotas(char estudiantes[4][30],char condicion[4][20], int notas[4]){
    int contador = 0;
    for (int i = 0; i < 4; i++){
        printf("Estudiante:  %s | Nota: %i | Estado: %s \n", estudiantes[i], notas[i], condicion[i]);
        if(strcmp(condicion[i],"Muy Bueno") == 0){
            contador++;
        }
    }
    printf("La cantidad de alumnos con un Estado de 'Muy Bueno' es: %i", contador);
}*/

//------------------------------------------------------------------------------------------

/*void perdirNombreYNotas(char estudiantes[5][30], int notas[5]){
    for (int i = 0; i < 5; i++){
        printf("Ingrese el nombre del %i alumno: ", i+1);
        gets(estudiantes[i]);
        printf("\n");
        printf("Ingrese la nota del alumno %s:", estudiantes[i]);
        scanf("%i", &notas[i]);
        printf("\n");
        fflush(stdin);
    }
}



void ordenarDatos(char estudiantes[5][30], int notas[5]){
    char auxEstudent[30];
    int auxNota;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5-i; j++){
            if(notas[j+1] > notas[j]){
                auxNota = notas[j];
                notas[j] = notas[j+1];
                notas[j+1] = auxNota;
                strcpy(auxEstudent, estudiantes[j]);
                strcpy(estudiantes[j], estudiantes[j+1]);
                strcpy(estudiantes[j+1], auxEstudent);
            }

        }
        
    }
    
}

void mostrarAlumnoYnotas(char estudiantes[5][30], int notas[5]){
    for (int i = 0; i < 5; i++){
        printf("Estudiante:  %s | Nota: %i \n", estudiantes[i], notas[i]);
    }
    
}*/

//---------------------------------------------------------------------

void perdirPaisesYHabitantes(char paises[5][30], int habitantes[5]){
    for (int i = 0; i < 5; i++){
        printf("Ingrese el %i pais: ", i+1);
        gets(paises[i]);
        printf("\n");
        printf("Ingrese la cantidad de habitantes que tiene %s:", paises[i]);
        scanf("%i", &habitantes[i]);
        printf("\n");
        fflush(stdin);
    }
}


void ordenasPaisesAlfabeticamente(char paises[5][30], int habitantes[5]){
    char auxpaises[30];
    int habitantess;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if(strcmp(paises[j+1],paises[j]) < 0){
                strcpy(auxpaises, paises[j]);
                strcpy(paises[j], paises[j+1]);
                strcpy(paises[j+1], auxpaises);

                habitantess = habitantes[j];
                habitantes[j] = habitantes[j+1];
                habitantes[j+1] = habitantess;  
            }
        }     
    }
}


void mostrarPaises(char paises[5][30], int habitantes[5]){
    for (int i = 0; i < 5; i++){
       printf("Paises: %s | Habitantes: %i \n", paises[i], habitantes[i]);
    }
}


void ordenarConCantidadDeHabitantes(char paises[5][30], int habitantes[5]){
    char auxpaises[30];
    int habitantess;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if(habitantes[j+1] > habitantes[j]){
                habitantess = habitantes[j];
                habitantes[j] = habitantes[j+1];
                habitantes[j+1] = habitantess;  
                strcpy(auxpaises, paises[j]);
                strcpy(paises[j], paises[j+1]);
                strcpy(paises[j+1], auxpaises);
            }
        }     
    }
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
    /*char personas[5][30];
    llenarDatosPersonas(personas);
    mostrarDatos(personas);
    if(consultarExistencia(personas) == 1){
        printf("La persona ya esta es la lista!!");
    }else{
        printf("La persona no se encuentra en la lista!!");
    }*/

   /*char personas[5][30];
    llenarDatosPersonas(personas);
    mostrarDatos(personas);
    ordenarAlfabeticamenteLosDatos(personas);
    mostrarDatos(personas);
    printf("El nombre alfabeticamente menor a los demas es: %s", personas[0]);*/


    //------------------------------------------------------------------------
    
    /*char estudiantes[4][30], condicion[4][20];
    int notas[4];
    perdirNombreYNotas(estudiantes, condicion, notas);
    mostrarAlumnoYnotas(estudiantes, condicion, notas);*/

    //--------------------------------------------------------------------------
    /*char nombresAlumnos[5][30];
    int notas[5];
    perdirNombreYNotas(nombresAlumnos, notas);
    ordenarDatos(nombresAlumnos, notas);
    mostrarAlumnoYnotas(nombresAlumnos, notas);*/

    //---------------------------------------------------------------------------
    char paises[5][30];
    int habitantes[5];
    perdirPaisesYHabitantes(paises, habitantes);
    printf("Ordenado alfabeticamente por paises: \n");
    ordenasPaisesAlfabeticamente(paises, habitantes);
    mostrarPaises(paises, habitantes);
 /*   printf("Ordenado por cantidad de habitantes: \n");
    ordenarConCantidadDeHabitantes(paises, habitantes);
    mostrarPaises(paises, habitantes);*/
    




}