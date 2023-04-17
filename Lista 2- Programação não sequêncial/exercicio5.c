#include <stdio.h>

int main()
{

    int a, result;

    printf("Infomre um numero: ");
    scanf("%d", &a);

    if (a > 0)
    {
        result = 1;
    }
    else if (a < 0)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }

    printf("Valor = %d", result);
    return 0;
}