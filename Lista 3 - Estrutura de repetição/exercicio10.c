#include <stdio.h>

int main(){
    float saldo, valor, pixRecebido = 0, pixEnviado = 0, saques = 0, depositos = 0;
    int opcao;

    printf("Informe o saldo da conta: ");
    scanf("%f", &saldo);

    do{

        printf("\n1. Deposito em dinheiro\n2. Retirada em dinheiro\n3. Recebimento em PIX\n4. Transferencia em PIX\n5. Fim\n\n");
        printf("Escolha uma das opcoes: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("1. Deposito em dinheiro\n\n");
            printf("Agora informe o valor: ");
            scanf("%f", &valor);
            saldo += valor;
            depositos+=valor;
            break;
        case 2: 
            printf("2. Retirada em dinheiro\n\n");
            printf("Agora informe o valor: ");
            scanf("%f", &valor);
            saldo -= valor;
            saques+=valor;
            break;
        case 3:
            printf("3. Recebimento em PIX\n\n");
            printf("Agora informe o valor: ");
            scanf("%f", &valor);
            saldo += valor;
            pixRecebido+=valor;
            break;
        case 4:
            printf("4. Transferencia em PIX\n\n");
            printf("Agora informe o valor: ");
            scanf("%f", &valor);
            saldo -= valor;
            pixEnviado+=valor;
            break;
        case 5:
            printf("5. Fim\n\n");
            printf("Saldo da conta = %.2fRS -> ", saldo);

                if(saldo == 0){
                    printf("CONTA ZERADA\n");
                } else if(saldo < 0){
                    printf("CONTA ESTOURADA\n");
                } else {
                    printf("CONTA PREFERENCIAL\n");
                }

            printf("PIX recebidos = %.2fRS\n", pixRecebido);
            printf("PIX enviado = %.2fRS\n", pixEnviado);
            printf("Saques em dinheiro = %.2fRS\n", saques);
            printf("Depositos em dinheiro = %.2fRS\n", depositos);

            break;
        default:
            printf("Opcao invalida!!!\n");
            printf("Informe novamente: ");
            scanf("%d", &opcao);
                if(opcao == 5){
                    printf("5. Fim\n\n");
                    printf("Saldo da conta = %.2fRS -> ", saldo);

                    if(saldo == 0){
                    printf("CONTA ZERADA\n");
                    } else if(saldo < 0){
                    printf("CONTA ESTOURADA\n");
                    } else {
                    printf("CONTA PREFERENCIAL\n");
                    }

                    printf("PIX recebidos = %.2fRS\n", pixRecebido);
                    printf("PIX enviado = %.2fRS\n", pixEnviado);
                    printf("Saques em dinheiro = %.2fRS\n", saques);
                    printf("Depositos em dinheiro = %.2fRS\n", depositos);
                }
            break;
        }
    }while (opcao != 5);
    

    return 0;
}