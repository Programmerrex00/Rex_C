#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>


struct punto{
    int y;
    int x;
};

struct triangulo{
    struct punto punto1;
    struct punto punto2;
    struct punto punto3;
};

struct triangulo retornoTriangulo(){
    struct triangulo Triangulo;
    Triangulo.punto1.x = 34;
    Triangulo.punto1.y = 7;
    Triangulo.punto2.x = 88;
    Triangulo.punto2.y = 11;
    Triangulo.punto3.x = 70;
    Triangulo.punto3.y = 40;
    return Triangulo;
}

void impresionDatos(struct triangulo tria){
    printf("Visualizacion de los vertices de los triangulos\n");
    printf("Primer Triangulo: [X: %i, Y: %i]\n", tria.punto1.x, tria.punto1.y);
    printf("Segundo Triangulo: [X: %i, Y: %i]\n", tria.punto2.x, tria.punto2.y);
    printf("Tercer Triangulo: [X: %i, Y: %i]", tria.punto3.x, tria.punto3.y);
}


int main(){
    struct triangulo triangulito;
    triangulito = retornoTriangulo();
    impresionDatos(triangulito);
    getch();
    return 0;
}