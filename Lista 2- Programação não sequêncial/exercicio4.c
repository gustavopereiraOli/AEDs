#include <stdio.h>

int main(){

    int a, b , c, maiorNumero, menorNumero, numeroDoMeio;

    printf("Informe tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c){
        maiorNumero=a;
    } else if(b > a && b > c){
        maiorNumero=b;
    } else if(c > a && c > b){
        maiorNumero=c;
    }

    if(a < b && a < c){
        menorNumero=a;
    } else if(b < a && b < c){
        menorNumero=b;
    } else if(c < a && c < b){
        menorNumero=c;
    }

    if((a < b && a > c) || (a > b && a < c)){
        numeroDoMeio=a;
    } else if((b < a && b > c) || (b > a && b < c)){
        numeroDoMeio=b;
    } else if((c < a && c > b) || (c > a && c < b)){
        numeroDoMeio=c;
    }

    printf("%d %d %d", maiorNumero, numeroDoMeio, menorNumero);

    return 0;
}