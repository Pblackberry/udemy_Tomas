#include <stdio.h>

int main (int argc, char *argv[]) {
    float peso[5];
    float suma=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese un peso para almacenar\n");
        scanf("%f", &peso[i]);
        suma= suma+peso[i];
    }
    
    float promedio=suma/5;
    int cont_mayor_igual=0;
    int cont_menor=0;

    for (int i = 0; i < 5; i++)
    {
        if(peso[i]>=promedio){
            cont_mayor_igual++;
        }else{
            cont_menor++;
        }
    }
    printf("El promedio de pesos es: %2.f\n", promedio);
    printf("Numero de pesos mayores o iguales al promedio: %d. Numero de pesos menores al promedio: %d", cont_mayor_igual, cont_menor);
    return 0;
}