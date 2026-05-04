#include <stdio.h>

int main(){
    float notas[2]; //indice de 0 a 1

    notas[0] = 10;
    notas[1] = 8;

    float media = (notas[0] + notas[1])/2;

    printf("Sua media e: %.2f", media);
}