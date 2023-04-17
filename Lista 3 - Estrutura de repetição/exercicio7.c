#include <stdio.h>

int main(){
    
    int qtdNumeros, proximoNumero = 0, primeiroNum = 0, segundoNum = 1;

    printf("Informe a quantidade de numeros desejados: ");
    scanf("%d", &qtdNumeros);

    printf("Sequencia de Fibonacci com %d termos: 1 ", qtdNumeros);
    for(int i = 1; i < qtdNumeros; i++){
        proximoNumero = primeiroNum + segundoNum;
        primeiroNum = segundoNum;
        segundoNum = proximoNumero;

        printf("%d ", proximoNumero);
    }
    

    return 0;
}