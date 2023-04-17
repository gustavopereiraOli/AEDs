#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float altura, peso, imc;

    printf("Informe sua altura: ");
    scanf("%f", &altura);
    printf("Infome seu peso: ");
    scanf("%f", &peso);

    imc = peso / pow(altura, 2);

    printf("O seu IMC e de %.2f", imc);

    return 0;
}
