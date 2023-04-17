#include <stdio.h>

int main(){

    int n, m;

    printf("Informe um numero positivo maior que 1: ");
    scanf("%d", &n);

    printf("Informe o numero de repeticoes desejada: ");
    scanf("%d", &m);

    for(int i = 0; i < (m/2); i++){
        for(int j = 0; j <= n; j++){
            printf("%d", j);
        }
        printf("\n");

        for(int j = n; j >= 0; j--){
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}