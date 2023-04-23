  #include <stdio.h>

void maiorEmenor(int a, int b, int c, int *maior, int *menor) {
  if (a > b && a > c) {
    *maior = a;

    if (b < c) {
      *menor = b;
    } else {
      *menor = c;
    }

  } else if (b > a && b > c) {
    *maior = b;

    if (a < c) {
      *menor = a;
    } else {
      *menor = c;
    }

  } else if (c > b && c > a) {
    *maior = c;

    if (b < a) {
      *menor = b;
    } else {
      *menor = a;
    }
  }
}

void logicaBinaria(int a, int b, int c, int *valorVerdade) {
  *valorVerdade = !(a || ((!b) && c));
}

float media(float a, float b, float c, float *maior) {
  float soma = a + b + c;
  float mediaDosNumero = soma / 3;

  if (a >= b && a >= c) {
    *maior = a;
  } else if (b >= a && b >= c) {
    *maior = b;
  } else if (c >= b && c >= a) {
    *maior = c;
  }

  return mediaDosNumero;
}

void detalhesDasVariaveis() {
  int a, b, c;
  printf("Infore tres numeros inteiros: ");
  scanf("%d %d %d", &a, &b, &c);
  printf("NAME\tADREESS\t\tVALUE\n");
  printf("a\t\t0x%x\t%d\n", &a, a);
  printf("b\t\t0x%x\t%d\n", &b, b);
  printf("c\t\t0x%x\t%d\n", &c, c);
}

void detalhesDoVetor() {
  int vetor[3];
  printf("Informe tres valores inteiros: ");
  for (int i = 0; i < 3; i++) {
    scanf("%d", &vetor[i]);
  }

  printf("NAME\t ADREESS\tVALUE\n");
  for (int i = 0; i < 3; i++) {
    printf(" %d\t\t0x%x\t %d\n", i, &vetor[i], vetor[i]);
  }
}

void detalhesDosTipos() {
  char c;
  int i;
  float f;
  double d;
  int *ponti;
  char *pontc;
  float *pontf;
  double *pontd;

  printf("O Endereco do char c e 0x%x.\t Essa variavel ocupa %d bytes.\n", &c,
         sizeof(c));
  printf("O Endereco do int i e 0x%x.\t Essa variavel ocupa %d bytes.\n", &c,
         sizeof(i));
  printf("O Endereco do float f e 0x%x.\t Essa variavel ocupa %d bytes.\n", &c,
         sizeof(f));
  printf("O Endereco do double d e 0x%x.\t Essa variavel ocupa %d bytes.\n", &c,
         sizeof(d));
  printf("O Endereco do char *pontc e 0x%x.\t Essa variavel ocupa %d bytes.\n",
         &c, sizeof(pontc));
  printf("O Endereco do int *ponti e 0x%x.\t Essa variavel ocupa %d bytes.\n",
         &c, sizeof(ponti));
  printf("O Endereco do float *pontf e 0x%x.\t Essa variavel ocupa %d bytes.\n",
         &c, sizeof(pontf));
  printf(
      "O Endereco do double *pontd e 0x%x.\t Essa variavel ocupa %d bytes.\n",
      &c, sizeof(pontd));
}

int divisores(int n, int *max, int *min){
  int retorno, i, contador = 0;

  for(i = 2; i < n; i++){
    if(n % i == 0){
      *min = (contador == 0) ? i : *min;
      contador++;
      *max = i;
    }
  }

  if(contador == 0){
    retorno = 0;
  } else {
    retorno = 1;
  }

  return retorno;
}