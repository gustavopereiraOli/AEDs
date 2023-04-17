#include <stdio.h>

int main(){

    char caracter;

    printf("Informe um caracter: ");
    scanf("%c", &caracter);

    if((int) caracter > 64 && (int) caracter < 91){
        printf("O caracter eh maiusculo!");
    } else if((int) caracter > 96 && (int) caracter < 123){
        printf("O caracter eh minusculo!");
    } else if((int) caracter > 47 && (int) caracter < 58){
        printf("O caracter eh numerico!");
    }

    return 0;
}