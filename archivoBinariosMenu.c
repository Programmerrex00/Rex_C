#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


typedef struct{
    int codigo;
    char descripcion[40];
    float precio;
}tProducto;

void continuar(){
    printf("\nPrecione una techa para continuar!!\n");
    getch();
}

void crear(){
    FILE *arch;
    arch = fopen("productos.dat", "wb");
    if (arch == NULL)
        exit(1);
    printf("Archivo productos creado exitosamente!!\nn");    
    fclose(arch);
    continuar();
}

void cargar(){
    FILE *arch;
    arch = fopen("productos.dat", "ab");
    if(arch == NULL)
        exit(1);
    tProducto product;
    printf("Ingrese el codigo del producto: ");
    scanf("%i", &product.codigo);
    fflush(stdin);
    printf("Ingrese la descripcion del producto: ");
    gets(product.descripcion);
    printf("Ingrese el precio del producto: ");
    scanf("%f", &product.precio);
    fwrite(&product, sizeof(tProducto), 1, arch);
    fclose(arch);
    continuar();    
}

void listar(){
    FILE *arch;
    arch = fopen("productos.dat", "rb");
    if(arch == NULL)
        exit(1);
    tProducto product;
    fread(&product, sizeof(tProducto), 1, arch);
    while(!feof(arch)){
        printf("codigo: %i descripcion: %s precio: %0.2f\n", product.codigo, product.descripcion, product.precio);
        fread(&product, sizeof(tProducto), 1, arch);
    }
    fclose(arch);
    continuar();
}


void consultar(){
    FILE *arch;
    arch = fopen("productos.dat", "rb");
    if(arch == NULL)
        exit(1);
    int codigo, existe = 0;
    printf("Ingrese el codigo del producto a consultar: ");
    scanf("%i", &codigo);    
    tProducto product;
    fread(&product, sizeof(tProducto), 1, arch);
    while (!feof(arch)){
        if(codigo == product.codigo){
            printf("codigo: %i descripcion: %s precio: %0.2f\n", product.codigo, product.descripcion, product.precio);
            existe = 1;
            break;
        }
        fread(&product, sizeof(tProducto), 1, arch);
    }
    if(existe == 0)
        printf("No existe el producto con dicho codigo!!\n");
    fclose(arch);
    continuar();
}

void modificar(){
    FILE *arch;
    arch = fopen("productos.dat", "r+b");
 if(arch == NULL)
        exit(1);   
    int codigo, existe = 0;
    printf("Ingrese el codigo del producto que quiere actualizar: ");
    scanf("%i", &codigo);
    tProducto product;
    fread(&product, sizeof(tProducto), 1, arch);
    while(!feof(arch)){
        if(codigo == product.codigo){
            printf("Ingrese el nuevo codigo del producto: ");
            scanf("%i", &product.codigo);
            fflush(stdin);
            printf("Ingrese la nueva descripcion del producto: ");
            gets(product.descripcion);
            printf("Ingrese el nuevo precio  del producto: ");
            scanf("%f", &product.precio);
            int pos = ftell(arch) - sizeof(tProducto);
            fseek(arch, pos, SEEK_SET);
            fwrite(&product, sizeof(tProducto), 1, arch);
            printf("Producto actulizados exitosamente!!!");
            existe = 1;
            break;
        }
        fread(&product, sizeof(tProducto), 1, arch);
    }
    if(existe == 0)
        printf("No existe el producto con dicho codigo!!\n");
    fclose(arch);
    continuar();           
}

int main(){
    int opcion;
    do{
        printf("1. Crear un archivo Binario llamado (productos.dat) \n");
        printf("2. Cargar registros de tipo tProducto \n");
        printf("3. Listado completo de productos \n");
        printf("4. Consulta de un producto por su codigo \n");
        printf("5. Modificacion del precio de un producto \n");
        printf("6. Finalizar \n\n");
        printf("Ingrese su opcion!!");
        scanf("%i", &opcion);
        switch (opcion){
        case 1:
            crear();
            break;
        case 2:
            cargar();
            break;
        case 3:
            listar();
            break; 
        case 4:
            consultar();
            break;
        case 5:
            modificar();
            break;               
        }
    } while (opcion != 6);
    return 0;
}