#include <stdio.h>

int main(){

    int n, cont = 0, numerador = 1, denominador = 1;
    float soma, divisao;

    printf("Informe um numero: ");
    scanf("%d", &n);

    while(cont < n){
        divisao = (float) numerador / denominador;
        soma += divisao;

        numerador += 2;
        denominador++;

        cont++;
    }

    printf("A resultado da soma eh %.2f", soma);

    return 0;
}