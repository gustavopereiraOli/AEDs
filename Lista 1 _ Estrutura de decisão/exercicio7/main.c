#include <stdio.h>
#include <stdlib.h>

int main()
{
    float farenheit;

    printf("Informe a temperatura em Farenheit: ");
    scanf("%f", &farenheit);

    float celsius = 5.0 / 9.0 * (farenheit-32);

    printf("%.2f Graus Farenheit equivalem a %.2f Graus Celsius", farenheit, celsius);

    return 0;
}
