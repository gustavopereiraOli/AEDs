#include <stdio.h>

int main()
{
    int x, y;

    printf("Informe um ponto cartesiano(X,Y): ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0){
        printf("Primeiro quadrante.");
    } else if (x < 0 && y > 0) {
        printf("Segundo quadrande.");
    } else if (x < 0 && y < 0){
        printf("Terceiro quadrante.");
    } else if (x > 0 && y < 0){
        printf("Quarto quadrante.");
    }

        return 0;
}