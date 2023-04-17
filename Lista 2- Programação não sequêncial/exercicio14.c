#include <stdio.h>

int main(){

        int quantidadeDeParafusos;
        float custoFinal, valor;

        printf("Informe a quantidade de parafusos desejada: ");
        scanf("%d", &quantidadeDeParafusos);

        valor = 0.5 * quantidadeDeParafusos;

        if(quantidadeDeParafusos > 0 && quantidadeDeParafusos < 101){
            custoFinal = valor;
        } else if(quantidadeDeParafusos >= 101 && quantidadeDeParafusos <= 200){
            custoFinal = valor - (valor * 0.1);
        } else if(quantidadeDeParafusos >= 201 && quantidadeDeParafusos <= 300){
            custoFinal = valor - (valor * 0.2);
        } else if(quantidadeDeParafusos >= 301 && quantidadeDeParafusos <= 400){
            custoFinal = valor - (valor * 0.3);
        } else if(quantidadeDeParafusos > 400){
            custoFinal = valor - (valor * 0.4);
        } else {
            printf("A quatidade escolhida eh invalida!!!\n");
        }

        if(quantidadeDeParafusos > 0){
        printf("Quantidade = %d \nValor = R$%.2f\n", quantidadeDeParafusos, custoFinal);
        }

    return 0;
}