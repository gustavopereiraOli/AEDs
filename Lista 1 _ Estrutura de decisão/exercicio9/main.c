#include <stdio.h>
#include <math.h>

int main(){
    float juros , montante, capital, taxaDeJuros, tempo;

    printf("Informe o valor a ser investido: ");
    scanf("%f", &capital);

    printf("Taxa de juros mensal: ");
    scanf("%f", &taxaDeJuros);

    printf("Numero  de  meses  que  ira  durar  a  aplicação: ");
    scanf("%f", &tempo);

    taxaDeJuros = taxaDeJuros / 100;

    juros = capital * taxaDeJuros * tempo;
    montante = capital + juros;

    printf("Montante = R$%.2f\n", montante);
    printf("Juros = R$%.2f", juros);

    return 0;
}