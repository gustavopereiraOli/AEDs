#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Informe um numero: ");
    scanf("%d", &a);

    while(a <= 0){
            printf("O numero deve ser maior do que 0!\n");
            printf("Informe o numero novamente: ");
            scanf("%d", &a);
    }

    if(a%2 == 0){
        printf("Par");
    } else {
        printf("Impar");
    }

    return 0;
}
