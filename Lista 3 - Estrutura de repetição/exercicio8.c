#include <stdio.h>

int main(){
    int num = 0, somaPar = 0, somaImpar = 0;

    printf("Informe alguns numeros: ");
    while (num <= 1000){
        scanf("%d", &num);

        if (num <= 1000){
            if (num % 2 == 0){
                somaPar += num;
            } else {
                somaImpar += num;
            }
        }
    }

    printf("A soma dos numeros pares eh %d.\n", somaPar);
    printf("A soma dos numeros impares eh %d.", somaImpar);

    return 0;
}