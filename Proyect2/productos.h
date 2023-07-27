typedef struct{
    int codigo;
    char descripcion[41];
    float precio;
}tProducto;

#define CANT 4

void cargar(tProducto productos[CANT]);
void imprimir(tProducto productos[CANT]);
