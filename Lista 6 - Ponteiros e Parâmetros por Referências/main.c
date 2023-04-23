#include "funcoes.h"
#include <stdbool.h>

int main() {

  int escolha = 0, a, b, c, maior, menor, valorVerdade;
  float maiorValor;

  do{
    printf("ESCOLHA AS OPCOES SEGUINTES:\n");
  printf("0 - SAIR();\n1 - maiorEmenor();\n2 - logicaBinaria();\n3 - media();\n4 - "
         "detalhesDasVariaveis();\n5 - detalhesDoVetor();\n6 - "
         "detalhesDosTipos();\n7 - divisores();\n\n");

  scanf("%d", &escolha);

  switch(escolha){
    case 0:
      printf("Fim!!!");
    break;
    case 1:
      printf("Funcao escolhida -> maiorEmenor()...\n");
      printf("Informe tres numeros: ");
      scanf("%d %d %d", &a, &b, &c);
      maiorEmenor(a, b, c, &maior, &menor);
      printf("Maior: %d\nMenor: %d\n\n", maior, menor);
    break;
    case 2:
      printf("Funcao escolhida -> logicaBinaria()...\n");
      printf("Informe tres valores booleanos: ");
      scanf("%d %d %d", &a, &b, &c);
      logicaBinaria(a, b, c, &valorVerdade); 
      printf("O valor verdade da expressao ⌐ (A v ⌐ B ^ C): %d\n\n", valorVerdade);
    break;
    case 3:
      printf("Funcao escolhida -> media()...\n");
      printf("Informe tres valores: ");
      scanf("%d %d %d", &a, &b, &c);
      printf("Media: %.2f\n", media(a, b, c, &maiorValor));
      media(a, b, c, &maiorValor);
      printf("Maior valor: %.1f\n\n", maiorValor);
    break;
    case 4:
      printf("Funcao escolhida -> detalhesDasVariaveis()...\n");
      detalhesDasVariaveis();
    break;
    case 5:
      printf("Funcao escolhida -> detalhesDoVetor()...\n");
      detalhesDoVetor();
    break;
    case 6:
      printf("Funcao escolhida -> detalhesDosTipos()...\n");
      detalhesDosTipos();
    break;
    case 7:
      printf("Funcao escolhida -> divisores()...\n");
      printf("Informe um numero: ");
      scanf("%d", &a);
      divisores(a, &maior, &menor);
      
      if(divisores(a, &maior, &menor) == 0){
        printf("O numero %d e primo.\n", a);
      } else {
        printf("O numero %d nao e primo.\n", a);
      }

      printf("Menor divisor: %d\nMaior divisor: %d\n\n", menor, maior);
    break;
    default:
      printf("Opcao invalida!\n");
      printf("Informe uma opcao valida:\n\n");
  }
  }while(escolha != 0);

  return 0;
}
