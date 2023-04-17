#include <stdio.h>

int main(){

        float numero, decimal;
        int inteira;

        printf("Informe um numero real: ");
        scanf("%f", &numero);

        inteira = (int) numero;
        decimal = numero - inteira;

        printf("%f => Parte inteira = %d e Parte decimal = %f", numero, inteira, decimal);
    return 0;
}