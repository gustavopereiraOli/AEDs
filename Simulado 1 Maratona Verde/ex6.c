#include <stdio.h>
#include <math.h>

int main(){

  float pontos[2][2];

  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++){
      scanf("%f", &pontos[i][j]);
    }
  }

  float resultado = sqrt(((pow((pontos[1][0] - pontos[0][0]), 2)) + (pow((pontos[1][1] - pontos[0][1]), 2))));
  
printf("%.2f", resultado);
  return 0;
}
