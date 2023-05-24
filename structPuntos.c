#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

struct punto{
    int x;
    int y;
};

struct punto cargarDatos(){
    struct punto puntito;
    printf("Ingrese el valor en X: ");
    scanf("%i", &puntito.x);
    printf("Ingrese el valor en Y: ");
    scanf("%i", &puntito.y);
    printf("\n");
    return puntito;
}

void impresionDeCuadrantes(struct punto puntito){
    if(puntito.x > 0 && puntito.y > 0){
        printf("El punto [%i , %i] se encuentra ubicado en el primer cuadrante\n", puntito.x, puntito.y);
    }else if(puntito.x < 0 && puntito.y > 0){
        printf("El punto [%i , %i] se encuentra ubicado en el segundo cuadrante\n", puntito.x, puntito.y);
    }else if(puntito.x < 0 && puntito.y < 0){
        printf("El punto [%i , %i] se encuentra ubicado en el tercer cuadrante\n", puntito.x, puntito.y);
    }else{
        printf("El punto [%i , %i] se encuentra ubicado en el cuarto cuadrante\n", puntito.x, puntito.y);
    }
}



int main(){
    struct punto punto1, punto2, punto3;
    punto1 = cargarDatos();
    punto2 = cargarDatos();
    punto3 = cargarDatos();
    impresionDeCuadrantes(punto1);
    impresionDeCuadrantes(punto2);
    impresionDeCuadrantes(punto3);

}