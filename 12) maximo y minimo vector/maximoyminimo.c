#include <stdio.h>

int main (int argc, char *argv[]) {
    int vector[10]={4,7,9,75,-5,6,12,-18,0,1};
    int maximo=vector[0];
    int minimo=vector[0];
    for (int i = 0; i < 10; i++)
    {
        if(vector[i]>maximo){
            maximo=vector[i];
        }
        if(vector[i]<minimo){
            minimo=vector[i];
        }
    }
    printf("Valor maximo: %d. Valor minimo: %d", maximo, minimo);
    return 0;
}