#include <stdio.h>

int main(){

    int quantidade_notas;
    printf("Digite a quantidade de notas");
    scanf("%d", &quantidade_notas);
    float notas[quantidade_notas];
    float soma;

    for(int i = 0; i < quantidade_notas; i++){
        printf("Digite sua nota %d: ", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    printf("Olha tua media ai: %.2f\n", soma/quantidade_notas);

    return 0;
}