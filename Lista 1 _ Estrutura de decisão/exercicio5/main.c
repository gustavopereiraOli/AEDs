#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, soma, media, produto;

    printf("Informe a primeira nota: ");
    scanf("%f", &n1);
    printf("Informe a segunda nota: ");
    scanf("%f", &n2);
    printf("Informe a terceia nota: ");
    scanf("%f", &n3);

    soma = n1 + n2 + n3;
    media = soma / 3;
    produto = n1 * n2 * n3;

    printf("Soma das notas e %f\n", soma);
    printf("Media das notas e %f\n", media);
    printf("Produto das notas e %f\n", produto);

    return 0;
}
