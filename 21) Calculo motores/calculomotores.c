#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char *argv[]) {
    struct clindro{
        float diametro;
        float carrera;
    };
    struct motor{
        int identificador;
        struct clindro cilindro1;
        int num_cilindros;
        float cilindrada;
    };

    struct motor motor1;

    printf("Introduce el identificador\n");
    scanf("%d", &motor1.identificador);
    printf("Introduzca el diametro del cilindor\n");
    scanf("%f", &motor1.cilindro1.diametro);
    printf("Introduzca la carrera del motor\n");
    scanf("%f", &motor1.cilindro1.carrera);
    printf("Introduzca el numero de cilindros\n");
    scanf("%d", &motor1.num_cilindros);

    motor1.cilindrada=(motor1.num_cilindros*(motor1.cilindro1.carrera/10)*3.14*pow((motor1.cilindro1.diametro/10),2))/4;
    printf("Cilindrada del motor: %2.f", motor1.cilindrada);
    return 0;
}