#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horasTrabalhadas, valorHorasTrabalhadas,
     salarioMinimo, salarioBruto, salarioReceber, imposto;

    printf("Informe as suas horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    printf("Informe o valor do salário mínimo: ");
    scanf("%f", &salarioMinimo);

    valorHorasTrabalhadas = salarioMinimo / 10;
    salarioBruto = horasTrabalhadas * valorHorasTrabalhadas;
    imposto = salarioBruto * 0.05;
    salarioReceber = salarioBruto - imposto;

    printf("O salario a receber e R$%.2f", salarioReceber);

    return 0;
}
