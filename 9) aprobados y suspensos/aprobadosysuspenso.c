#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, contador_aprobados=0, contador_suspenso=0;
    float nota;
    printf("Introduzca el numero de alumnos\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Introduzca la nota del alumno %d\n", i);
        scanf("%f", &nota);

        if(nota>=5){
            contador_aprobados++;
        }else{
            contador_suspenso++;
        }
    }

    printf("El numero de alumnos aprobados es: %d. El numero de alumnos suspensos es: %d", contador_aprobados, contador_suspenso);
    
    return 0;
}