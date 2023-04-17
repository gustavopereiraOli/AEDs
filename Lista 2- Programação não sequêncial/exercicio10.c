#include <stdio.h>

int main(){

        float a, b;
        char opcao;

        printf("Informe o primeiro numero: ");
        scanf("%f", &a);

        printf("Informe o segundo numero: ");
        scanf("%f", &b);

        printf("Escolha a opcao:\n");
        printf("[+] - adicao\n[-] - subtracao\n[*] - multiplicacao\n[/] - divisao \n");
        fflush(stdin);
        scanf("%c", &opcao);

        if(opcao == '+'){
            printf("%f + %f = %f", a, b, (a+b));
        } else if(opcao == '-'){
            printf("%f - %f = %f", a, b, (a-b));
        } else if(opcao == '*'){
            printf("%f * %f = %f", a, b, (a*b));
        } else if(opcao == '/'){
            printf("%f / %f = %f", a, b, (a/b));
        } else {
            printf("Opcao invalida!!!");
        }

    return 0;
}
