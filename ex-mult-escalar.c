#include <stdio.h>

int main(){
    int vetor[4] = {2, 4, 6, 8};
    int escalar = 2;

    for (int i = 0; i < 4; i++) {
        vetor[i] = vetor[i] * escalar;
    }

    for (int i = 0; i < 4; i++) {
        printf("%d\n",vetor[i]);
    }

    return 0;
}

