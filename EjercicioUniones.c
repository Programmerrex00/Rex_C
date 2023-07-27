#include <stdio.h>
#include <conio.h>

//En este programa veremos como en una union que esta conformada
// por un struct y un vector, y al tener las dos el mismo bytes de almacenamiento
// cada una compartes ese almacenamiento para sinonimizar sus datos
// osea cada una tiene 8 bytes de almacenamiento por tener dos datos de cada uno 4 bytes

struct coordenadas{
    int x;
    int y;
};

union punto{
    int v[2];
    struct coordenadas co;
};

int main(){
    union punto p;
    p.co.x = 10;
    p.co.y = 20;
    printf("Coordenadas: %i, %i\n", p.co.x, p.co.y);
    printf("Coordenadas: %i, %i", p.v[0], p.v[1]);

    getch();
    return 0;
}
