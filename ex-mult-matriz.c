#include <stdio.h>

int main(){
    int matriz1[2][2] = {{1, 2}, {4, 5}};
    int matriz2[2][2] = {{7, 4}, {9, 10}};
    int resultado[2][2] = {0};

    for (int l = 0; l < 2; l++) {
        for (int c = 0; c < 2; c++) {
                resultado[l][c] += matriz1[l][c] * matriz2[c][l];
                printf(" matrizR[%d][%d] = %d  \n",l, c, resultado[l][c]);    
        }
    }
    return 0;
}