#include <stdio.h>
#include <stdlib.h>

void multiplicaVector(int *vector, int nElem, int valor);

int main (int argc, char *argv[]) {
    int vector[10]={1,2,3,4,5,6,7,8,9,10};
    int numero;
    printf("Igrese un valor para la multiplicacion\n");
    scanf("%d", &numero);
    multiplicaVector(&vector[0],10,numero);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vector[i]);

    }
    
    return 0;
}

void multiplicaVector(int *vector, int nElem, int valor){
    for (int i = 0; i < nElem; i++)
    {
        *(vector+i)= *(vector+i)*valor;
    }
    
}