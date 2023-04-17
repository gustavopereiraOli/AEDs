#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int SENHA = 1234;
    int senhaInformada;

    printf("Digite a sua senha: ");
    scanf("%d", &senhaInformada);

    if(senhaInformada == SENHA){
        printf("ACESSO PERMITIDO");
    } else {
        printf("ACESSO NEGADO");
    }


    // forma usando while ;)

    int outraSenhaInformada;

    printf("\nDigite a sua senha: ");
    scanf("%d", &outraSenhaInformada);

    if(outraSenhaInformada == SENHA){
        printf("ACESSO PERMITIDO\n");
    } else {
        while(outraSenhaInformada != SENHA){
        printf("ACESSO NEGADO\n");
        printf("Informe uma senha correta: ");
        scanf("%d", &outraSenhaInformada);
        if(outraSenhaInformada == SENHA){
            printf("ACESSO PERMITIDO");
        }
        }
    }

    return 0;
}
