#include <stdio.h>
#include <stdlib.h>

int maior(int vetor[], int tam){
  int maior = -99999;
  for(int i = 0; i < tam; i++){
    if(vetor[i] > maior){
      maior = vetor[i];
    }
  }
  return maior;
}

int menor(int vetor[], int tam){
  int menor = 99999;
  for(int i = 0; i < tam; i++){
    if(vetor[i] < menor){
      menor = vetor[i];
    }
  }
  return menor;
}

void lerVetor(int vetor[], int tam){
  for(int i = 0; i < tam; i++){
    scanf("%d", &vetor[i]);
  }
}

void imprimirMaiorEmenor(int vetor[], int tam){
  printf("%d\n", maior(vetor, tam));
  printf("%d\n", menor(vetor, tam));
}

int main(){
  int vetor[40];
  lerVetor(vetor, 40);
  imprimirMaiorEmenor(vetor, 40);
  return 0;
}