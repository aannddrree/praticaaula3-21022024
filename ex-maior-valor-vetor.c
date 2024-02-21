#include <stdio.h>

int main(){

    int vetor[10] = {0,1,9,3,4};
    int  maior = 0;

    for (int i = 0; i<=10; i++){
        if (maior < vetor[i]){
            maior = vetor[i];
        }
    }
    printf("O maior valor do vetor é: %d ", maior);
    return 0;
}