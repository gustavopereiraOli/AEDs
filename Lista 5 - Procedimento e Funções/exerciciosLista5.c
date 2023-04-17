#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/* exercicio 1 */
/*
Descrição: recebe um numero e eleva ao cubo.
Parâmetros (entradas): int n.
Retorno (saída): float.
*/
float cubo(int n) { return pow(n, 3); }

/* exercicio 2 */
/*
Descrição: recebe 5 numeros e e retorna a media.
Parâmetros (entradas): float n1, float n2, float n3, float n4, float n5.
Retorno (saída): float.
*/
float media(float n1, float n2, float n3, float n4, float n5) {
  float soma = n1 + n2 + n3 + n4 + n5;
  return soma / 5;
}

/* exercicio 3 */
/*
Descrição: recebe um numero e imprime todos os números
primos entre 1 e n.
Parâmetros (entradas): int n.
Retorno (saída): void.
*/
void numerosPrimos(int n) {
  int qtdDivisores = 0;

  for (int i = 2; i < n; i++) {
    for (int j = 1; j < n; j++) {
      if (i % j == 0) {
        qtdDivisores++;
      }
    }

    if (qtdDivisores == 2) {
      printf("%d ", i);
    }
    qtdDivisores = 0;
  }
}

/* exercicio 4 */
/*
Descrição: le dois ou mais números do usuário e imprime o máximo e o
mínimo dos números fornecidos.
Parâmetros (entradas): int quantidadeDeNumeros.
Retorno (saída): void.
*/
void menorOuMaior(int quantidadeDeNumeros) {
  int numero, maior = -9999, menor = 9999;

  while (quantidadeDeNumeros < 2) {
    printf("Quantidade invalida!\n");
    printf("Informe uma quantidade valida: ");
    scanf("%d", &quantidadeDeNumeros);
  }

  for (int i = 1; i <= quantidadeDeNumeros; i++) {
    printf("Informe o %d° numero: ", i);
    scanf("%d", &numero);

    if (numero > maior) {
      maior = numero;
    }

    if (numero < menor) {
      menor = numero;
    }
  }

  printf("Maior numero: %d\n", maior);
  printf("Menor numero: %d", menor);
}

/* exercicio 5 */
/*
Descrição: tres funçoes que recebem o raio de um circulo e calculam o diametro,
circunferencia e a area . Parâmetros (entradas): int raio. Retorno (saída):
float.
*/
float diametro(float raio) { return 2 * raio; }

float circunferencia(float raio) {
  const float PI = 3.1415;
  return 2 * PI * raio;
}

float area(float raio) {
  const float PI = 3.1415;
  return PI * pow(raio, 2);
}

/* exercicio 6 */
/*
Descrição: retorna o valor booleano da operação logica.
Parâmetros (entradas): int a, int b, int c.
Retorno (saída): bool.
*/
bool valorVerdade(int a, int b, int c) { return ((~a || b) && c); }

/* exercicio 7 */
/*
Descrição: calcula e retornar o k-ésimo
dígito da direita para a esquerda de um número n.
Parâmetros (entradas): int n, int k.
Retorno (saída): int.
*/
int algarismoDesejedo(int n, int k) {
  int algarismo = n / pow(10, k);
  algarismo = algarismo * 10;
  algarismo = (n / pow(10, k - 1)) - algarismo;
  return algarismo;
}

/* exercicio 8 */
/*
Descrição:  imprime na tela os números entre os limites fornecidos
incrementados pelo último parâmetro fornecido.
Parâmetros (entradas): int limiteInferio, int limiteSuperior, int incremento.
Retorno (saída): void.
*/
void numerosEntreLimites(int limiteInferio, int limiteSuperior,
                         int incremento) {
  for (int i = limiteInferio + incremento; i < limiteSuperior;
       i += incremento) {
    printf("%d ", i);
  }
}

/* exercicio 9 */
/*
Descrição:  imprime na tela o resultado da soma de fraçoes.
Parâmetros (entradas): nenhuma.
Retorno (saída): float.
*/
float somatorioDeFracoes() {
  float numerador = 1;
  float denominador = 225;
  int decrementoDenominador = 29;
  float somatorio = 0;

  while (denominador != 1) {
    somatorio += (numerador / denominador);
    numerador += numerador;
    denominador -= decrementoDenominador;
    decrementoDenominador -= 2;
  }

  return somatorio;
}

/* exercicio 10 */
/*
Descrição: calcula e retornar a soma das distâncias do ponto P para outros n
pontos a serem gerados aleatoriamente. Parâmetros (entradas): int x1, int y1,
int n. Retorno (saída): int.
*/
int manhattan(int x1, int y1, int n) {
  int somaDasDistancias = 0;
  int resultado1 = 0;
  int resultado2 = 0;
  int x2;
  int y2;

  for (int i = 0; i < n; i++) {
    x2 = rand() % 10;
    y2 = rand() % 10;

    resultado1 = (x1 - x2) < 0 ? (x1 - x2) * -1 : x1 - x2;
    resultado2 = (y1 - y2) < 0 ? (y1 - y2) * -1 : y1 - y2;
    somaDasDistancias += resultado1 + resultado2;
  }

  return somaDasDistancias;
}

/* exercicio 11 */
/*
Descrição: recebe como parâmetro três coeficientes de uma equação de segundo
grau e retorna o valor de delta.
Parâmetros (entradas): int a, int b, int c.
Retorno (saída): float.
*/
float equacaoSegundoGrau(int a, int b, int c) {
  int delta = pow(b, 2) - 4 * a * c;
  return delta;
}

int main() {
  int escolha, a, b, c, x, y, n, k, v1, v2, v3, v4, v5, quantidadeDeNumeros,
      limiteInferio, limiteSuperior, incremento;
  float raio;
  bool sair = 0;

  do {
    printf("\n");
    printf("\nMenu de opcoes:\n");
    printf("1 - valor ao cubo;\n");
    printf("2 - media de 5 valores;\n");
    printf("3 - numeros primos de 1 a n;\n");
    printf("4 - valor maximo e minimo;\n");
    printf("5 - Diametro, circunferencia e area do circulo;\n");
    printf("6 - valor booleano da operação logica;\n");
    printf("7 - k-esimo termo;\n");
    printf("8 - numeros entre os limites;\n");
    printf("9 - soma de fracoes;\n");
    printf("10 - distancia Manhattan;\n");
    printf("11 - equação de segundo grau;\n");
    printf("0 - sair;\n\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &escolha);

    switch (escolha) {
    case 0:
      printf("Fim!!!");
      sair = 1;
      break;
    case 1:
      printf("Informe um numero: ");
      scanf("%d", &n);
      printf("O numero %d elevado a 3 eh %f.2\n\n", n, cubo(n));
      break;
    case 2:
      printf("Informe cinco numeros: ");
      scanf("%d %d %d %d %d", &v1, &v2, &v3, &v4, &v5);
      printf("A media dos cinco numeros eh %.2f.\n\n",
             media(v1, v2, v3, v4, v5));
      break;
    case 3:
      printf("Informe um numero: ");
      scanf("%d", &n);
      printf("Os numeros primos de 1 a %d sao ", n);
      numerosPrimos(n);
      printf("\n\n");
      break;
    case 4:
      printf("Informe a quantidade de numeros: ");
      scanf("%d", &quantidadeDeNumeros);
      menorOuMaior(quantidadeDeNumeros);
      break;
    case 5:
      printf("Informe o raio do circulo: ");
      scanf("%f", &raio);
      printf("Em um circulo de raio %.2f...\n", raio);
      printf("O diametro eh %.2f\n", diametro(raio));
      printf("A circunferencia eh %.2f\n", circunferencia(raio));
      printf("A area eh %.2f\n", area(raio));
      break;
    case 6:
      printf("Informe os valores booleanos: ");
      scanf("%d %d %d", &v1, &v2, &v3);
      if (valorVerdade(v1, v2, v3) == 0) {
        printf("Falso\n");
      } else {
        printf("Verdadeiro\n");
      }
      break;
    case 7:
      printf("Informe um numero: ");
      scanf("%d", &n);
      printf("Informe o termo desejado: ");
      scanf("%d", &k);
      printf("O algarismo eh %d", algarismoDesejedo(n, k));
      break;
    case 8:
      printf("Informe o limite inferior, o limite superior, incremento, "
             "respectivamente: ");
      scanf("%d %d %d", &limiteInferio, &limiteSuperior, &incremento);
      printf("Os numeros entre os limites sao ");
      numerosEntreLimites(limiteInferio, limiteSuperior, incremento);
      break;
    case 9:
      printf("A soma entre as fracoes eh %f", somatorioDeFracoes());
      break;
    case 10:
      printf("Informe um ponto (x, y) e o numero de pontos aleatorios, "
             "respectivamente: ");
      scanf("%d %d %d", &x, &y, &n);
      printf("A soma das ditancias manhattan eh %d", manhattan(x, y, n));
      break;
    case 11:
      printf("Informe os coeficientes da equacao do segundo grau: ");
      printf("a = ");
      scanf("%d", &a);
      printf("b = ");
      scanf("%d", &b);
      printf("c = ");
      scanf("%d", &c);
      printf("O delta da equacao eh %.2f", equacaoSegundoGrau(a, b, c));
      break;
    default:
      while (escolha < 0 || escolha > 11) {
        printf("Opcao invalida!\n");
        printf("Informe a opcao novamente: ");
        scanf("%d", &escolha);
      }
    }
  } while (sair != true);

  return 0;
}