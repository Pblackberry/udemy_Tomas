#include <stdio.h>
#include <stdlib.h>

struct producto{
    int codigo;
    char descripcion[50];
    float precio;
};

int main (int argc, char *argv[]) {
    struct producto *prod;
    prod=malloc(sizeof(struct producto));
    printf("Introduzca el codigo\n");
    scanf("%d", &prod->codigo);
    printf("Introduzca la descripcion\n");
    scanf("%s", prod->descripcion);
    printf("Introduzca el precio\n");
    scanf("%f", &prod->precio);

    printf("Codigo del articulo: %d\n", prod->codigo);
    printf("Descripcion del articulo: %s\n", prod->descripcion);
    printf("Precio del articulo: %.2f\n", prod->precio);

    free(prod);
    prod = NULL;
    return 0;
}