#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    puts("Informe um numero: ");
    scanf("%d", &n);

    int sucessor=n + 1;

    printf("O sucessor de %d eh %d", n, sucessor);
    return 0;
}
