#include <stdio.h>

int main(){

    printf("Tabuada da adicao...\n");
    for(int i = 1; i < 10; i++){
        for(int j = 1; j < 10; j++){
            printf("%d + %d = %d\n", i, j, i+j);
        }
        printf("\n");
    }

    printf("Tabuada da subtracao...\n");
    for(int i = 1; i < 10; i++){
        for(int j = 1; j < 10; j++){
            printf("%d - %d = %d\n", i+j, i, j);
        }
        printf("\n");
    }

    printf("Tabuada da multiplicacao...\n");
    for(int i = 1; i < 10; i++){
        for(int j = 1; j < 10; j++){
            printf("%d * %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }

    printf("Tabuada da divisao...\n");
    for(int i = 1; i < 10; i++){
        for(int j = 1; j < 10; j++){
            printf("%d / %d = %d\n", i*j, i, j);
        }
        printf("\n");
    }

    return 0;
}