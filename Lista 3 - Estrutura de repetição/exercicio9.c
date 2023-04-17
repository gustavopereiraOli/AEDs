#include <stdio.h>

int main()
{

    float precoDeCompra, precoDeVenda, valorTotalCompra = 0, valorTotalVenda = 0, totalDeLucro, lucro, margemLucro;
    int numMercadoria = 1, lucroMenorQdez = 0, lucroEntreDezVinte = 0, lucroMaiorVinte = 0;

    do
    {

        printf("Mercadoria %d...\n", numMercadoria);
        printf("Informe o valor de compra: ");
        scanf("%f", &precoDeCompra);
        printf("Informe o valor de venda: ");
        scanf("%f", &precoDeVenda);

        while (precoDeCompra > precoDeVenda)
        {
            printf("Valor de compra maior do que o de venda!\n");
            printf("Informe o valor de compra valido: ");
            scanf("%f", &precoDeCompra);
        }

            lucro = precoDeVenda - precoDeCompra;
            margemLucro = (lucro / precoDeVenda) * 100;

            totalDeLucro += lucro;
            valorTotalCompra += precoDeCompra;
            valorTotalVenda += precoDeVenda;

        if (margemLucro < 10)
        {
            lucroMenorQdez += 1;
        }
        else if (margemLucro >= 10 && margemLucro <= 20)
        {
            lucroEntreDezVinte += 1;
        }
        else if (margemLucro > 20)
        {
            lucroMaiorVinte += 1;
        }

        numMercadoria++;
    } while (precoDeCompra != 0);

    printf("Quantidade de produtos com lucro menor que 10: %d\n", lucroMenorQdez);
    printf("Quantidade de produtos com lucro entre 10 e 20: %d\n", lucroEntreDezVinte);
    printf("Quantidade de produtos com lucro maior que 20: %d\n", lucroMaiorVinte);
    printf("Total de compra: %.2f\n", valorTotalCompra);
    printf("Total de venda: %.2f\n", valorTotalVenda);
    printf("Total de lucro: %.2f\n", totalDeLucro);

    return 0;
}