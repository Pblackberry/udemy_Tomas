#include <stdio.h>

int main (int argc, char *argv[]) {
    int nota;
    printf("Introduzca la nota del alumno\n");
    scanf("%d", &nota);
    if(nota<5){
        printf("suspenso");
    }else if(nota==6 ){
        printf("Bien");
    }else if(nota==7 || nota==8){
        printf("Notable");
    }else if(nota==9 || nota==10){
        printf("sobresaliente");
    }else{
        printf("Nota introducida no valida");
    }
    return 0;
}