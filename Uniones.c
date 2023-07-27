#include<stdio.h>
#include<conio.h>

union dato {
    int x;
    char letra;
    float z;
};

//La magia de las unicones es que todos los datos que contienen
// estos tipos de estructuras, cada uno de los campos compartes espacio en memoria
//por eso si reemplazamos un valor se reemplaza en general osea para todos los campos de la union
int main(){
    union dato d;
    d.x=10;
    printf("Impresion del entero:%i\n",d.x);
    d.letra='A';
    printf("Impresion del caracter:%c\n",d.letra);
    printf("Impresion del entero:%i\n",d.x); //El dato se ha modificado
    d.z=5.25;
    printf("Impresion del float:%0.2f\n",d.z);
    printf("Impresion del entero:%i\n",d.x); //El dato se ha modificado nuevamente
    getch();
    return 0;
}