//Struct Producto con atricutos asociados
typedef struct{
    int id_producto;
    char nombre_producto[50];
    float precio;
    int cantidad_stock;
}tProducto;


//Struct Venta con atributos asociados
typedef struct{
    int id_venta;
    char fecha_actual[70];
    char nombre_comprador[70];
    tProducto* productos;
    int cantidad_Productos;
}tVenta;

//Metodos 'abstractos'
void registrarVenta();
void crearProducto();
void listarProductos();
void listarVentas();





