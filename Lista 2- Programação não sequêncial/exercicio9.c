#include <math.h>

int main(){

        float peso, altura, imc;

        printf("Informe o sua altura: ");
        scanf("%f", &altura);

        printf("Informe o seu peso: ");
        scanf("%f", &peso);

        imc = peso / (pow(altura, 2));

        if(imc < 18.5){
            printf("seu imc eh de %.2f e voce esta abaixo do peso.", imc);
        } else if(imc > 18.5 && imc < 25){
            printf("seu imc eh de %.2f e voce esta com o peso ideal.", imc);
        } else if(imc >= 25 && imc < 30){
            printf("seu imc eh de %.2f e voce esta levemente acima do peso.", imc);
        } else if (imc >= 30 && imc < 35){
            printf("seu imc eh de %.2f e voce esta com obesidade grau 1.", imc);
        } else if (imc >= 35 && imc < 40){
            printf("seu imc eh de %.2f e voce esta com obesidade severa.", imc);
        } else if(imc >= 40){
            printf("seu imc eh de %.2f e voce esta com obesidade morbida.", imc);
        }
        
    return 0;
}