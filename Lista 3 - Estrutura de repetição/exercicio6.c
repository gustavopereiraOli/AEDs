#include <stdio.h>

int main(){

        int n, produto = 1, qtdNumeros = 0;

        do{

            printf("Informe um numero: ");
            scanf("%d", &n);

            if(n != 0){
            produto *= n; 
            qtdNumeros++;
            }

        } while (n != 0);
        
        printf("O produtos dos numeros informados eh %d", produto);

    return 0;
}