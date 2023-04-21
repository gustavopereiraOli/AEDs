#include <stdio.h>

void lerVetor(int vetor[], int tam){
  for(int i = 0; i < tam; i++){
    scanf("%d", &vetor[i]);
  }
}

void negativos(int vetor[], int tam){
  for(int i = 0; i < tam; i++){
    if(vetor[i] < 0){
      printf("%d\n", vetor[i]);
    }
  }
}

// int negativos(int vetor[], int tam){
//   int tamanhoSubVetor = 0;
//   for(int i = 0; i < tam; i++){
//     if(vetor[i] < 0){
//       tamanhoSubVetor++;
//     }
//   }
//   int subVetor[tamanhoSubVetor];
//   for(int i = 0; i < tam; i++){
//     if(vetor[i] < 0){
//       subVetor[i] = vetor[i];
//     }
//   }
//   return subVetor;
// }

int main(){
  int vetor[20];
  lerVetor(vetor, 20);
  negativos(vetor, 20);

  return 0;
}