#include <stdio.h>

int main()
{

    float x1, y1, x2, y2;
    float diferenca1, diferenca2;
    float distancia;

    printf("Informe o primeiro ponto: ");
    scanf("%f %f", &x1, &y1);

    printf("Informe o segundo ponto: ");
    scanf("%f %f", &x2, &y2);

    diferenca1 = x1 - x2;
    diferenca2 = y1 - y2;
    distancia = (diferenca1) + (diferenca2);

    if(diferenca1 < 0){
        diferenca1 = diferenca1 * (-1);
    } else if(diferenca2 < 0){
        diferenca2 = diferenca2 * (-1);
    }

    if ((x1 == x2) && (y1 == y2)){
        printf("Os pontos sao iguais!!!!");
    } else{
        printf("A distancia eh = %.2f", distancia);
    }

    return 0;
}