#include <stdio.h>

int main (int argc, char *argv[]) {
    int dia;
    printf("Ingrese un numero del 1 al 7\n");
    scanf("%d", &dia);
    switch(dia){
        case 1:
            printf("lunes");
            break;
        case 2:
            printf("Martes");
            break;
        case 3:
            printf("Miercoles");
            break;
        case 4:
            printf("Jueves");
            break;
        case 5:
            printf("Viernes");
            break;
        case 6:
            printf("Sabado");
            break;
        case 7:
            printf("Domingo");
            break;
        default:
            printf("Error. dia invalido");
            break;
    }
    return 0;
}
