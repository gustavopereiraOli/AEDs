#include <stdio.h>

int main(){

    float paisA = 5000000, paisB = 7000000;
    int tempo = 0;

    while(paisA < paisB){
        paisA += ((paisA * 3) / 100);
        paisB += ((paisB * 2) / 100);
        tempo++;
    }

    printf("O tempo eh de %d anos.", tempo);
    return 0;
}