#include <stdio.h>

int main()
{

    int dia, mes, ano;
    int dataValida = 0;

    printf("Informe o dia: ");
    scanf("%d", &dia);

    printf("Informe o mes: ");
    scanf("%d", &mes);

    printf("Informe o ano: ");
    scanf("%d", &ano);

    if (dia == 28)
    {
        if (mes == 2)
        {
            if (ano == 2022)
            {
                dataValida = 1;
            }
            else
            {
                dataValida = 0;
            }
        }
        else
        {
            dataValida = 0;
        }
    }
    else if (dia == 29)
    {
        if (mes == 1 || mes == 3 || mes == 4 || mes == 5 || mes == 6 || mes == 7 || mes == 8 || mes == 9 || mes == 10 || mes == 11 || mes == 12)
        {
            if (ano == 2022)
            {
                dataValida = 1;
            }
        }
        else
        {
            dataValida = 0;
        }
    }
    else if (dia == 31)
    {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        {
            if (ano == 2022)
            {
                dataValida = 1;
            }
            else
            {
                dataValida = 0;
            }
        }
        else
        {
            dataValida = 0;
        }
    }
    else if (dia == 30)
    {
        if (mes == 4 || mes == 6 || mes == 5 || mes == 9 || mes == 11)
        {
            if (ano == 2022)
            {
                dataValida = 1;
            }
            else
            {
                dataValida = 0;
            }
        }
        else
        {
            dataValida = 0;
        }
    }

    if (dia < 28)
    {
        if (mes == 1 || mes == 2 || mes == 3 || mes == 4 || mes == 5 || mes == 6 || mes == 7 || mes == 8 || mes == 9 || mes == 10 || mes == 11 || mes == 12)
        {
            if (ano == 2022)
            {
                dataValida = 1;
            }
        }
        else
        {
            dataValida = 0;
        }
    }

    if (dataValida == 1)
    {
        printf("Eh uma data VALIDA!");
    }
    else
    {
        printf("Eh uma data INVALIDA!");
    }
    return 0;
}