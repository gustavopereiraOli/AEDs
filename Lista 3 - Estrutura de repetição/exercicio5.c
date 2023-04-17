#include <stdio.h>

int main(){

    int numero, positivos = 0, negativos = 0, zeros = 0;
    int totalDeNumeros = 0, totalDePositivos = 0, totalDeNegativos = 0, totalDeZeros = 0;

    printf("Informe uma sequencia de numeros: ");

    do{
        scanf("%d", &numero);

        if(numero != -9999){
            totalDeNumeros++;

            if(numero > 0){
                totalDePositivos++;
                positivos++;
            } else if(numero < 0){
                totalDeNegativos++;
                negativos++;
            } else {
                totalDeZeros++;
                zeros++;
            }
        }       
    }while(numero != -9999);

    printf("\nPositivos: %d\nNegativos: %d\nZeros: %d\n", 
    (totalDePositivos * 100) / totalDeNumeros, 
    (totalDeNegativos * 100) / totalDeNumeros, 
    (totalDeZeros * 100) / totalDeNumeros);
    return 0;
}