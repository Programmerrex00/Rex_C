#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Para poder probar este programa ya debimos compilar el programa programa199.c y haber generado el exe.

// Los archivos programa200.exe y programa199.exe se deben encontrar en la misma carpeta ya que a la función system le pasamos solamente el nombre del archivo a ejecutar y no el path donde se encuentra:

//     codigo=system("programa199.exe");
// Si indicamos el path el código quedaría:

//     codigo=system("c:\\programasc\\programa199.exe");


//system nos siver para resivir el codigo de respuesta del programa 'FuncExit'
int main(){
    int codigo = system("FuncExit.exe");
    printf("El programa finalizo retornando el codigo: %i", codigo);

    getch();
    return 0;
}