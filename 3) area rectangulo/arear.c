#include <stdio.h>

int main (int argc, char *argv[]) {
    float area, base, altura;
    printf("Ingrese la longitud de la base\n");
    scanf("%f", &base);
    printf("Ingrese la altura del rectángulo\n");
    scanf("%f", &altura);
    area=base*altura;
    printf("El area del rectagulo es: %.2f", area);
    return 0;
}