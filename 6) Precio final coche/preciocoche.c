#include <stdio.h>
#include <stdlib.h>

int main () {
    int precio_base, kilometros;
    float consumo, precio_final;

    printf("Introduzca el precio del vehiculo\n");
    scanf("%d", &precio_base);
    printf("Introduzca los kilometros\n");
    scanf("%d", &kilometros);
    printf("Introduzca el consumo\n");
    scanf("%f", &consumo);

    if(kilometros<20000 && consumo <=5){
        precio_final= precio_base*1.2;
    }else if(kilometros>20000 && consumo <=5){
        precio_final=precio_base*1.1;
    }else if(consumo>5){
        precio_final=precio_base*1.05;
    }
    printf("El precio final del vehiculo es: %2.f",precio_final);
    return 0;
}