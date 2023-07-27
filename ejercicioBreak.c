#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <string.h>

int main(){
    // int values = 1, suma = 0;
    // while (1){
    //     printf("Ingrese un valor: ");
    //     scanf("%i", &values);
    //     suma += values;
    //     printf("\nSuma actual: %i\n", suma);
    //     if(values == 0){
    //         break;
    //     }
        
    // }
    // time_t tiempo_actual;
    // struct tm *info_tiempo;
    // char fecha_actual[80];

    // time(&tiempo_actual);
    // info_tiempo = localtime(&tiempo_actual);

    // strftime(fecha_actual, sizeof(fecha_actual), "%Y-%m-%d %H:%M:%S", info_tiempo);
    // printf("Fecha y hora actual: %s\n", fecha_actual);

    



getch();
return 0;
}

     // FILE *arch;
     // arch=fopen("archivooo.dat","wb");
     // if (arch==NULL)
     //     exit(1);
     // int valor = 1;
     // fwrite(&valor, sizeof(int), 1, arch);




    // int codigo;
    // FILE *arch;
    // arch=fopen("archivooo.dat","r+b");
    // if (arch==NULL)
    //     exit(1);
    // fread(&codigo, sizeof(int), 1, arch);
    // codigo+=1;
    // int pos = ftell(arch) - sizeof(int);
    // fseek(arch, pos, SEEK_SET);
    // fwrite(&codigo, sizeof(int), 1, arch);

    // int codigoNuevo;
    // arch=fopen("archivooo.dat","rb");
    // if (arch==NULL)
    //     exit(1);
    // fread(&codigoNuevo, sizeof(int), 1, arch);
    // printf("%i", codigoNuevo);