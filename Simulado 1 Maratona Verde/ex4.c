#include <stdio.h>

void lerVetor(int vetor[], int tam){
  for(int i = 0; i < tam; i++){
    scanf("%d", &vetor[i]);
  }
}

void imprimirEspelhado(int vetor[], int tam){
  int contador = tam - 1;
  for(int i = 0; i < tam; i++){
    printf("%d\n", vetor[contador]);
    contador--;
  }
}

int main(){

  int vetor[15];
  lerVetor(vetor, 15);
  imprimirEspelhado(vetor, 15);

  return 0;
}