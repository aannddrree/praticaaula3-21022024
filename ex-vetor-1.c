#include <stdio.h>

int main(){
    int vetor1[3] = {1, 2, 3};
    int vetor2[3] = {4, 5, 6};
    int resultado[3];

    for (int i = 0; i < 3; i++) {
        resultado[i] = vetor1[i] + vetor2[i];
    }

    for (int i = 0; i < 3; i++){
        printf("%d\n", resultado[i]);
    }

    return 0;
}


