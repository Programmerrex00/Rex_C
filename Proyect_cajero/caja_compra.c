#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "caja_compra.h"


//Metodo crear producto con su respectiva validacion para no agregar productos con nombre iguales
void crearProducto(){
    // Declaracion de objetos tipo producto, uno para guardar el nuevo producto
    // y el otro para guardar el producto que buscaremos en el archivo para asi mismo comparar su nombre
    //y moderar que no este repetido
    tProducto producto, proBinary;
    int idAcumulado, repetido = 0;
    char nombreRepetido[50];
    FILE *arch;
    FILE *archivoAutoincremento;

    // En este bloque de codigo hago uso de un archivo Binario para guardar 
    // los numeros y la esencia aca es que a medida que asignamos numeros
    // los vamos incrementando y guardando en la misma posicion de byte del archivo
    archivoAutoincremento = fopen("autoincrementoProduct.dat", "r+b");
    if(archivoAutoincremento == NULL){
        idAcumulado = 1;
        archivoAutoincremento = fopen("autoincrementoProduct.dat", "wb");
        fwrite(&idAcumulado, sizeof(int), 1, archivoAutoincremento);
    }else{
        fread(&idAcumulado, sizeof(int), 1, archivoAutoincremento); 
    }
    producto.id_producto = idAcumulado;
    idAcumulado+=1;
    fseek(archivoAutoincremento, 0, SEEK_SET);
    fwrite(&idAcumulado, sizeof(int), 1, archivoAutoincremento);
    fclose(archivoAutoincremento);


    //Este bloque de codigo lo uso para leer los datos del archivo producto 
    //e ir comparandolo con el nombre del producto
    FILE *archRead;
    archRead = fopen("productoB.dat", "rb");
    fflush(stdin);     
    printf("Ingrese el nombre del producto: ");
    gets(producto.nombre_producto);   
    //Avanzamos puntero del archivo
    size_t elementos_leidos = fread(&proBinary, sizeof(tProducto), 1, archRead);
    //retrocedemos el puntero del archivo
    fseek(archRead, 0, SEEK_SET);
    //Esta estructura while la usare para recorrer todo el archivo producto y 
    // determinar que el nombre no este en el archivo
    while(elementos_leidos > 0){
        if(strcmp(proBinary.nombre_producto, producto.nombre_producto) == 0){
            printf("Este nombre ya se encuentra en la lista, Ingrese otro: ");
            gets(producto.nombre_producto);
            fseek(archRead, 0, SEEK_SET);
            elementos_leidos =  fread(&proBinary, sizeof(tProducto), 1, archRead);
        }else{
           elementos_leidos =  fread(&proBinary, sizeof(tProducto), 1, archRead);
        }
    }
    // abrimos el archivo producto despues de validar que su nombre no este repedio y 
    // mediante la funcion ab(append Binary), concatenamos el nuevo registro
    fclose(archRead);
    arch = fopen("productoB.dat", "ab");
    if(arch == NULL)
        exit(1);
    printf("Ingrese el precio unitario del producto: ");
    scanf("%f", &producto.precio);
    printf("Ingrese la cantidad en Stock del producto: ");
    scanf("%i", &producto.cantidad_stock);
    fwrite(&producto, sizeof(tProducto), 1, arch);
    fclose(arch);    
}

//Metodo para Listar todos los productos 
// simplemente hacemos uso de rb(read Binary) para leer datos del archivo producto
void listarProductos(){
    FILE *arch;
    arch = fopen("productoB.dat", "rb");
    if(arch == NULL)
        exit(1);
    tProducto producto;
    fread(&producto, sizeof(tProducto), 1, arch);
    while(!feof(arch)){
        printf("\n_____________________________________________________________________\n");
        printf("ID: %i  Nombre del Producto: %s  Precio: %0.3f  Cantidad en Stock: %i\n", producto.id_producto, producto.nombre_producto, producto.precio, producto.cantidad_stock);
        printf("_____________________________________________________________________\n");
        fread(&producto, sizeof(tProducto), 1, arch);
    }
    fclose(arch);
}


//Funcion para registrar una venta, validando que el ID del producto exista, y ademas que
// la cantidad solicitada sea menor al stock del producto
void registrarVenta(){

    //de la misma manera hacemos uso de dos variables de tipo producto y venta
    //una para leer y almacenar poductos que seran almacenados en la venta y la otra para guardar 
    // esa venta con los producto asociados
    tProducto productoObj;
    tVenta venta;
    int idAcumulado;
    char fecha_actual[80];

    //como visualizamos hacemos uso de otro archivo para almacenar 
    // el contador del ID de la venta. Por otro lado esto se puede optimizar
    // usando el mismo archivo de los IDs de producto...
    FILE *archivoAutoincremento;
    archivoAutoincremento = fopen("autoincrementoVenta.dat", "r+b");
    if(archivoAutoincremento == NULL){
        idAcumulado = 1;
        archivoAutoincremento = fopen("autoincrementoVenta.dat", "wb");
        fwrite(&idAcumulado, sizeof(int), 1, archivoAutoincremento);
    }else{
        fread(&idAcumulado, sizeof(int), 1, archivoAutoincremento);
    }
    venta.id_venta = idAcumulado;
    idAcumulado+=1;
    fseek(archivoAutoincremento, 0, SEEK_SET);
    fwrite(&idAcumulado, sizeof(int), 1, archivoAutoincremento);
    fclose(archivoAutoincremento);

    //para Obtener la hora y la fecha actual hacemos uso de la libreria time.h
    time_t tiempo_actual;
    struct tm *info_tiempo;

    //bloque de codigo para obtener la fecha y darle forma. Ademas de guardarla 
    // en el campo fecha de la venta
    time(&tiempo_actual);
    info_tiempo = localtime(&tiempo_actual);
    strftime(fecha_actual, sizeof(fecha_actual), "%Y-%m-%d %H:%M:%S", info_tiempo);
    strcpy(venta.fecha_actual, fecha_actual);
    fflush(stdin);
    printf("Ingrese el nuevo nombre del Comprador: ");
    gets(venta.nombre_comprador);
    listarProductos();

    printf("\n\nIngrese la cantidad de productos que contiene la venta: ");
    scanf("%i", &venta.cantidad_Productos);

    //Reservamos dinamicamente memoria para la cantidad de productos que contendra la venta
    // haciendo uso de la funcion malloc y pasando como parametro la cantidad de productos
    // por el tamaño de bytes del objeto producto, ademas hay que tener en cuenta 
    // que el campo productos de venta es nomas un puntero de productos
    venta.productos = (tProducto*) malloc(venta.cantidad_Productos * sizeof(tProducto));
    
    int can = venta.cantidad_Productos;
    int idPro, bandera = 0, cantidadProducto;
    float valorUnitarioProducto[can], valorTotal = 0;

    //Abrimos el archivo productos para leerlos y verificar que el Id exista
    FILE *productos;
    productos = fopen("productoB.dat", "r+b");
    size_t elementos_leidos = fread(&productoObj, sizeof(tProducto), 1, productos);

    //Reacomodamos el puntero de producto para comenzar a leer desde el principio
    fseek(productos, 0, SEEK_SET);

    //Este for nos ayudara a validar que el Id del Producto exista y hacer cumplir 
    //el filtro del stock del producto
    for (int i = 0; i < venta.cantidad_Productos; i++){
        //Despues de leer un producto reacomodamos el puntero del archivo Producto
        // y voveremos a leer
        fseek(productos, 0, SEEK_SET);
        elementos_leidos = fread(&productoObj, sizeof(tProducto), 1, productos);

        printf("Ingrese el ID del %i producto de la venta: ", i+1);
        scanf("%i", &idPro);

        //Este while nos ayudara a verificar que el ID del producto ingresado exista
        while(elementos_leidos > 0){
            if(idPro == productoObj.id_producto){
                bandera = 1;
                venta.productos[i] = productoObj;
                valorUnitarioProducto[i] = productoObj.precio;
                //Cuando hayamos encontrado el producto y gravado su objeto
                //necesitaremos retroceder unos bytes atras al puntero del archivo producto
                //ya que quedara una posicion adelantado, si no hacemos esto
                //podremos tener errores y problemas con los datos del archivo producto
                fseek(productos, -sizeof(tProducto), SEEK_CUR);
                break;
            }else{
                //Avanzamos el puntero del archivo producto cuando el ID no se encuentre
                elementos_leidos = fread(&productoObj, sizeof(tProducto), 1, productos);
                if(elementos_leidos == 0){
                    printf("Lo sentimos el id %i no se encontro. Porfavor ingrese otro", idPro);
                    scanf("%i", &idPro);
                    //Si el ID no existe reacomodamos el puntero del archivo producto y volvemos a
                    // comenzar con la busqueda
                    fseek(productos, 0, SEEK_SET);
                    elementos_leidos = fread(&productoObj, sizeof(tProducto), 1, productos);
                }
            }
        }

        //Despues de verificar de que el ID existe llega la hora de validar que el usuario
        //ingrese correctamente un stock valido para la venta
        if(bandera == 1){
            printf("Ingrese la cantidad de %s que desea: ", productoObj.nombre_producto);
            scanf("%i", &cantidadProducto);
            if(cantidadProducto > productoObj.cantidad_stock){

                while (cantidadProducto > productoObj.cantidad_stock) {
                    printf("La cantidad del producto %s supera el numero de cantidad almacenada en Stock, Porfavor ingrese un valor menor", productoObj.nombre_producto);
                    scanf("%i", &cantidadProducto);
                }
                //Si el valor productos que el usuario requirio es valido 
                // entonces, personalmente me parecio buena idea crear un arreglo para guardar
                // el total de la venta y el valor de productos en cadad posicion del arreglo
                // lo mismo para el else...
                printf("En hora Buena, producto %s Grabado \n", productoObj.nombre_producto);
                valorUnitarioProducto[i] = valorUnitarioProducto[i] * cantidadProducto;
            }else{
                printf("En hora Buena, producto %s Grabado \n", productoObj.nombre_producto);
                valorUnitarioProducto[i] = valorUnitarioProducto[i] * cantidadProducto;
            }
        }

        // Con estas dos lineas de codigo hacemos la respectiva resta al stock del producto
        // y de una ves escribimos en el archivo producto para hacer la actualizacion.
        //esto lo podemos hacer osea leer y escribir el archivo. Ya que estamos haciendo uso
        // del r+b osea leer y escribir en un archivo
        productoObj.cantidad_stock = productoObj.cantidad_stock - cantidadProducto;
        fwrite(&productoObj, sizeof(tProducto), 1, productos);

    }
    fclose(productos);
    for (int i = 0; i < can; i++){
        valorTotal = valorTotal + valorUnitarioProducto[i];
    }
    // append para las ventas
    FILE *archVentas = fopen("ventaB.dat", "ab");
    if(archVentas == NULL)
        exit(1);
    fwrite(&venta, sizeof(tVenta), 1, archVentas);   

    //Este for es de suma importancia ya que con el podremos grabar todos
    // los productos de una venta, si esta linea no se ejecuta, se 
    // tomara el riesgo de perder los productos de esta venta.
    for (int i = 0; i < venta.cantidad_Productos; i++) {
        fwrite(&venta.productos[i], sizeof(tProducto), 1, archVentas);
    }
    fclose(archVentas);


    // Factura
    printf("\n\n");
    printf("\t**************************\n");
    printf("\t\tSTORE BILL\n");
    printf("\t**************************\n");
    printf("\t\tCASH RECEIPT\n");
    printf("CASHIER: RexMax \tDate: %s\n", venta.fecha_actual);
    printf("-----------------------------------------\n");
    for (int i = 0; i < can; i++){
        printf("%s \t\t\t   $%0.3f\n", venta.productos[i].nombre_producto, valorUnitarioProducto[i]);
    }
    printf("-----------------------------------------\n");
    printf("SUBTOTAL \t\t\t $%0.3f\n", valorTotal);
    printf("TOTAL \t\t\t\t $%0.3f\n", valorTotal);
    printf("-----------------------------------------\n");
    printf("\tTHANK YOU FOR SHOPPING!\n");


}

//metodo listar Ventas
void listarVentas() {
    //Abrimos el archivo ventas en modo lectura
    FILE* archiVenta = fopen("ventaB.dat", "rb");
    if (archiVenta == NULL) 
        exit(1);
    
    //Hacemos uso de dos variables de tipo venta y producto
    //Esto con el fin de usarlas de almacenamiento temporal
    tVenta venta;
    tProducto producto;
    printf("\n");
    //En esta parte llegamos al while que nos ayudara a recorrer la venta
    // la exprecion que contiene el while nos ayudara a leer todas la ventas
    // esto teniendo en cuenta que si hay ventas disponibles fread nos retornara 1 de lo 
    // contrario si ha llegado al final del archivo retornara 0
    while (fread(&venta, sizeof(tVenta), 1, archiVenta) == 1) {
        printf("Id: %i\nFecha: %s\nNombre del comprador: %s\nCantidad Productos: %i\n", 
            venta.id_venta, venta.fecha_actual, venta.nombre_comprador, venta.cantidad_Productos);

        printf("Productos asociados a la venta:\n");

        //Este for nos ayudara a obtener los productos asociados a la venta 
        // de forma que ira hasta la cantidad de productos de la venta
        // entonces leeremos el archivo venta y extraeremos datos de tipo producto
        // que asi mismo lo guardaremos en la variable temporar 'producto' anteriormente mencionada
        for (int i = 0; i < venta.cantidad_Productos; i++) {
            fread(&producto, sizeof(tProducto), 1, archiVenta);
            printf("%i %s %0.3f\n", producto.id_producto, producto.nombre_producto, producto.precio);
        }

        printf("\n");
    }

    fclose(archiVenta);
}
