#include <stdio.h>

int funcaobatalhanaval() {

    int matriznavios[10][10] = {0};  // Inicializa todos com 0

    matriznavios[4][2] = 3;
    matriznavios[3][2] = 3;
    matriznavios[2][2] = 3;
    matriznavios[7][6] = 3;
    matriznavios[7][7] = 3;
    matriznavios[7][8] = 3;  

    for(int c = 0; c <= 10; c++) {
        printf("%d ", c);
    }

    printf("\n");


    for (int l = 0; l < 10; l++) {
        printf("%c ", 'A' + l);

        for (int c = 0; c < 10; c++) {
            printf("%d ", matriznavios[l][c]); // Mostra a matriz
        }
        printf("\n");
    }

    
    return 0;
}

int main() {
    funcaobatalhanaval();
    return 0;
}
