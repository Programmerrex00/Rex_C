#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

#define FILAS 4
#define COLUMNAS 30
#define SALTOlINEA printf("\n");
#define SUELDOS 3

void pedirDatosYSueldos(char empleados[FILAS][COLUMNAS], float recogerSueldos[FILAS][SUELDOS]){
   
    for (int  i = 0; i < FILAS; i++){
        printf("Ingrese el nombre del %i Empleado: ", i+1);
        gets(empleados[i]);
        printf("Ingrese el sueldo de %s en el Primer mes: ", empleados[i]);
        scanf("%f", &recogerSueldos[i][0]);
        SALTOlINEA;
        printf("Ingrese el sueldo de %s en el Segundo mes: ", empleados[i]);
        scanf("%f", &recogerSueldos[i][1]);
        SALTOlINEA;
        printf("Ingrese el sueldo de %s en el Tercer mes: ", empleados[i]);
        scanf("%f", &recogerSueldos[i][2]);
        SALTOlINEA;
        fflush(stdin);
    }
}
void calcularSueldos(float recogerSueldos[FILAS][3], float sueldosFinales[FILAS]){
    for (int i = 0; i < FILAS; i++){
        for (int j = 0; j < SUELDOS; j++){
            sueldosFinales[i] += recogerSueldos[i][j];
        }
    }
}
void mostrarDatos(char empleados[FILAS][COLUMNAS], float sueldosFinales[FILAS],float recogerSueldos[FILAS][SUELDOS]){
    printf("Empleados\t\t\tSueldos\t\t\tSueldo Total\n");
    printf("\t\t\t1 Mes \t2 Mes \t3 Mes \n");

    for (int i = 0; i < FILAS; i++){
       printf("%s\t\t\t%0.3f \t%0.3f \t%0.3f \t\t\t%0.3f\n", empleados[i], recogerSueldos[i][0], recogerSueldos[i][1], recogerSueldos[i][2], sueldosFinales[i]);
    }
}

void mayorSueldoAcumulado(float sueldosFinales[FILAS], char empleados[FILAS][COLUMNAS]){
    char empleadoConSueldMayor[30];
    strcpy(empleadoConSueldMayor, empleados[0]);
    float sueldoMayor = sueldosFinales[0];
    for (int i = 1; i < FILAS; i++){
        if(sueldosFinales[i] > sueldoMayor){
            sueldoMayor = sueldosFinales[i];
            strcpy(empleadoConSueldMayor, empleados[i]);
        }
    }
    printf("El empleado %s obtuvo el mayor sueldo acumulado con un sueldo total de: %0.3f", empleadoConSueldMayor, sueldoMayor);
    
}




int main(){
    char empleados[FILAS][COLUMNAS];
    float sueldosFinales[FILAS];
    float recogerSueldos[FILAS][SUELDOS];
    pedirDatosYSueldos(empleados, recogerSueldos);
    calcularSueldos(recogerSueldos, sueldosFinales);
    mostrarDatos(empleados, sueldosFinales, recogerSueldos);
    mayorSueldoAcumulado(sueldosFinales, empleados);
    getch();
    return 0;
}