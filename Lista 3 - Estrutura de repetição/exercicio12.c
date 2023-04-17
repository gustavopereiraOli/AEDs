#include <stdio.h>

int main(){

    float notaFinal, media, somaDasNotas,maiorNota = 0, menorNota;
    int aprovados = 0, reprovados = 0;

    for(int i = 0; i < 10; i++){
        printf("Informe a nota %d: ", i+1);
        scanf("%f", &notaFinal);

        somaDasNotas += notaFinal;

        if(notaFinal > maiorNota){
            maiorNota = notaFinal;
        } else if(notaFinal < maiorNota){
            menorNota = notaFinal;
        }

        if(notaFinal >= 60){
            aprovados++;
        } else {
            reprovados++;
        }
    }

    media = somaDasNotas / 10;

    printf("A media das notas: %.1f\n", media);
    printf("O valor da maior nota: %.1f\n", maiorNota);
    printf("O valor da menor nota: %.1f\n", menorNota);
    printf("Numero de alunos aprovados: %d\n", aprovados);
    printf("Numero de alunos reprovados: %d\n", reprovados);

    return 0;
}