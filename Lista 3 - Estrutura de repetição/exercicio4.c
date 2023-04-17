#include <stdio.h>

int main(){

    int numero, positivos = 0, negativos = 0, zeros = 0;

    printf("Informe uma sequencia de numeros: ");

    do{
        scanf("%d", &numero);

        if(numero != -9999){
            if(numero > 0){
            positivos++;
            } else if(numero < 0){
            negativos++;
            } else {
            zeros++;
            }
        }       
    }while(numero != -9999);

    printf("\nPositivos: %d\nNegativos: %d\nZeros: %d\n", positivos, negativos, zeros);

    return 0;
}