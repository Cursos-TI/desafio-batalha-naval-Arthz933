
#include <stdio.h>

int funcaobatalhanaval() {

    int matriznavios[10][10] = {0};  // Inicializa todos com 0
    
    int matrizhabilidades[10][10] = {0};
    /*int matriz cone[3][5];
    int matriz cruz[5][5];
    int matriz octaedro[5][5];*/

        for(int c = 0; c < 5; c++) { // monta a cruz
            matrizhabilidades[1][c] = 5;
        }
        for(int l = 0; l < 5; l++) {
            matrizhabilidades[l][2] = 5;

            }

        for (int l = 0; l < 5; l++) {
            for (int c = 0; c < 5; c++) {
                matriznavios[l][c] = matrizhabilidades[l][c];
        }
    }




    /* matriznavios[4][2] = 3; //
    matriznavios[3][2] = 3; // coordenadas navio vertical
    matriznavios[2][2] = 3; // 
    matriznavios[7][6] = 3; //
    matriznavios[7][7] = 3; // coordenadas navio horizontal
    matriznavios[7][8] = 3; //  
    matriznavios[3][8] = 3; // 
    matriznavios[4][7] = 3; // coordenadas navio diagonal direita
    matriznavios[5][6] = 3; // 
    matriznavios[6][1] = 3; //
    matriznavios[7][2] = 3; // coordenadas navio diagonal esquerda
    matriznavios[8][3] = 3; // */

    
    


    for(int c = 0; c <= 10; c++) { // mostra as coluna de identificação com números 
        printf("%d ", c);
    }

    printf("\n");


    for (int l = 0; l < 10; l++) { // mostra as linha de identificação com números
        printf("%d ", l);

        for (int c = 0; c < 10; c++) {
            printf("%d ", matriznavios[l][c]); // Mostra a matriz
        }
        printf("\n");
    }


    printf("dica: matrizes sempre começam do 0\n");

};



int main() {
    funcaobatalhanaval();
    return 0;
}