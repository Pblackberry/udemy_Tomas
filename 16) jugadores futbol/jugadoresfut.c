#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    struct jugador{
        char nombre[50];
        int edad;
        float altura;
    };

    struct jugador jugadores[5];

    for (int i = 0; i < 5; i++)
    {
        printf("introduce el nombre del jugador %d\n", i+1);
        gets(&jugadores[i].nombre);
        printf("Introduce la edad del jugador %d\n", i+1);
        scanf("%d", &jugadores[i].edad);
        printf("Introduzca la altura del jugador %d\n", i+1);
        scanf("%f", &jugadores[i].altura);

        fflush(stdin);

    }

    int opcion=-1;
    while(opcion!=0){
      printf("Introduzca la opción que desea realizar: \n1)Listar jugador \n2)Buscar jugador \n3)jugador mas alto \n0)Salir\n");
      scanf("%d", &opcion);
      fflush(stdin);

      if(opcion==1){
        for (int i = 0; i < 5; i++)
        {
            printf("Jugador de nombre %s y altura %2.f", jugadores[i].nombre, jugadores[i].altura);
        }
      }
      if(opcion==2){
        char nombre_jugador[50];
        printf("Ingrese el nombre del jugadir que desea buscar\n");
        gets(nombre_jugador);
        int encontrado=0;

        for (int i = 0; i < 5; i++)
        {
            if(strcmp(jugadores[i].nombre,nombre_jugador)==0){
                encontrado=1;
                printf("La edad del jugador es %d y su altura es %2.f\n", jugadores[i].edad, jugadores[i].altura);

            }
            if(encontrado==0){
                printf("Jugador no encontrado\n");
            }
        }
      }
      if(opcion==3){
        float mayor_altura=jugadores[0].altura;
        char nombre_mayor_altura[50];
        int edad_mayor_altura=jugadores[0].nombre;
        strcpy(nombre_mayor_altura,jugadores[0].nombre);
        for (int i = 0; i < 5; i++)
        {
            if(jugadores[i].altura>mayor_altura){
                strcpy(nombre_mayor_altura, jugadores[i].nombre);
                edad_mayor_altura=jugadores[i].edad;
                mayor_altura=jugadores[i].altura;
            }
        }
        printf("El nombre del jugador de mayor altura es %s y su edad es %d\n",nombre_mayor_altura,edad_mayor_altura);
      }
    }
    
    return 0;
}