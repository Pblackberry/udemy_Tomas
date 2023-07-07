#include <stdio.h>

int main (int argc, char *argv[]) {
    float euros;
    printf("Ingrese la cantidad de euros que desea convertir\n");
    scanf("%f", &euros);
    printf("%.2f euros equivalen a %.2f pecetas\n", euros, euros*166.386);
    return 0;
}