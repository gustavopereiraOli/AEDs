#include <stdio.h>

int main(){

        int a, b, c;

        printf("Informe os lados do triangulo:\n");
        printf("Lado 1: ");
        scanf("%d", &a);
        printf("Lado 2: ");
        scanf("%d", &b);
        printf("Lado 3: ");
        scanf("%d", &c);

        if((a + b) > c){
            if(a == b && a == c){
                printf("Equilatero e Isoscele.");
            } else if((a == b && a != c) || (c == a && c != b)){
                printf("Isoscele.");
            } else if(a != b && a != c){
                printf("Escaleno.");
            }
        } else {
            printf("Nao eh um triangulo valido!!!");
        }

    return 0;
}