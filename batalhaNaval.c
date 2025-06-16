
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
    
    int matrizhabilidadecone[4][7] = {0};

    for(int c = 0; c < 7; c++) { // muda os valores da matriz para 1, conforme as áreas da habilidade
        matrizhabilidadecone[3][c] = 1;
        for(int c = 1; c < 6; c++)
            matrizhabilidadecone[2][c] = 1;
            for(int c = 2; c < 5; c++) {
                matrizhabilidadecone[1][c] = 1;
                for(int c = 3; c < 4; c++) {
                    matrizhabilidadecone[0][c] = 1;

                }

            }
            

    }
    

    for(int l = 0; l < 4; l++) {
        for(int c = 0; c < 7; c++) {
            printf("%d ", matrizhabilidadecone[l][c]); // imprime a matriz

        }
        printf("\n");

    }    

    

    printf("----------------\n");
    printf("matriz cruz\n");


    int matrizhabilidadecruz[5][5] = {0};

    for(int l = 0; l < 5; l++) {
        matrizhabilidadecruz[l][2] = 1;
        for(int c = 0; c < 5; c++) {
            matrizhabilidadecruz[2][c] = 1;
        }
    }

    for(int l = 0; l < 5; l++) {
        for(int c = 0; c < 5; c++) {
            printf("%d ", matrizhabilidadecruz[l][c]);

        }
        printf("\n");
    }

    

    printf("----------------\n");
    printf("matriz octaedro\n");

    int matrizhabilidadeoctaedro[7][9] = {0};

    for(int c = 4; c < 5; c++) {
        matrizhabilidadeoctaedro[0][4] = 1;
        for(int c = 3; c < 6; c++) {
            matrizhabilidadeoctaedro[1][c] = 1;
            for(int c = 2; c < 7; c++) {
                matrizhabilidadeoctaedro[2][c] = 1;
                for(int c = 1; c < 8; c++) {
                    matrizhabilidadeoctaedro[3][c] = 1;
                for(int c = 2; c < 7; c++) {
                    matrizhabilidadeoctaedro[4][c] = 1;
            for(int c = 3; c < 6; c++) {
                matrizhabilidadeoctaedro[5][c] = 1;
        for(int c = 4; c < 5; c++) {
            matrizhabilidadeoctaedro[6][c] = 1;
        }
            }
                }
                }
            }
        }
    }

    for(int l = 0; l < 7; l++) {
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