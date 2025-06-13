
#include <stdio.h>

int funcaobatalhanaval() {

    int matriznavios[10][10] = {0};  // Inicializa todos com 0
    

    matriznavios[4][2] = 3; //
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
    matriznavios[8][3] = 3; // 


    for(int c = 0; c <= 10; c++) { // mostra as linha de identificação com números 
        printf("%d ", c);
    }

    printf("\n");


    for (int l = 0; l < 10; l++) { // mostra as coluna de identificação com números
        printf("%d ", l);

        for (int c = 0; c < 10; c++) {
            printf("%d ", matriznavios[l][c]); // Mostra a matriz
        }
        printf("\n");
    }


    printf("dica: sempre considere as coordenadas como um valor a menos, matrizes sempre começam do 0\n");
    
    printf("----------------\n");
    printf("matriz cone\n");
    
    int matrizhabilidadecone[7][4] = {0};
    

    for(int l = 0; l < 4; l++) {
        for(int c = 0; c < 7; c++) {
            printf("%d ", matrizhabilidadecone[l][c]);

        }
        printf("\n");

    }    

    printf("----------------\n");
    printf("matriz cruz\n");


    int matrizhabilidadecruz[5][5] = {0};

    for(int l = 0; l < 5; l++) {
        for(int c = 0; c < 5; c++) {
            printf("%d ", matrizhabilidadecruz[l][c]);

        }
        printf("\n");
    }

    printf("----------------\n");
    printf("matriz octaedro\n");

    int matrizhabilidadeoctaedro[9][9] = {0};

    for(int l = 0; l < 9; l++) {
        for(int c = 0; c < 9; c++) {
            printf("%d ", matrizhabilidadeoctaedro[l][c]);
        }
        printf("\n");
    }

};



int main() {
    funcaobatalhanaval();
    return 0;
}