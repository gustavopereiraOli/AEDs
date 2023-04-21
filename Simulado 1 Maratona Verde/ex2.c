#include <stdio.h>

float somaDosValores(float vetor[], int tam){
  float soma = 0;
  for(int i = 0; i < tam; i++){
    soma += vetor[i];
  }
  return soma;
}

void lerValorDoVetor(float vetor[], int tam){
  for(int i = 0; i < tam; i++){
    scanf("%f", &vetor[i]);
  }
}

void imprimirSoma(float vetor[], int tam){
  printf("%.2f", somaDosValores(vetor, tam));
}

int main(){

  float vetor[20];

  lerValorDoVetor(vetor, 20);
  imprimirSoma(vetor, 20);

  return 0;
}