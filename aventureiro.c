#include <stdio.h>

int tabuleiro[10][10];

int main () {

    int i,j; 

    int linhaH = 2;
    int colunaH = 4;
    int linhaV = 5;
    int colunaV = 1;
    int linhaD1 = 0;
    int colunaD1 = 0;
    int linhaD2 = 0;
    int colunaD2 = 9;


    // zera tabuleiro
    for(i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0; 
        }
    }

    // navio horizontal
    for (i = 0; i < 3; i++) {
        tabuleiro[linhaH][colunaH + i] = 3;
    }

    // navio vertical
    for (i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colunaV] = 3;
    }
    // Diagonal principal
    for (i = 0; i < 3; i++) {
     tabuleiro[linhaD1 + i][colunaD1 + i] = 3;
    }
    // Diagonal secundária

    for (i = 0; i < 3; i++) {
    tabuleiro[linhaD2 + i][colunaD2 - i] = 3;
}
    for (i = 0; i < 10; i++) {

    for (j = 0; j < 10; j++) {
        printf("%d ", tabuleiro[i][j]);
     
     }
      printf("\n");

    }
    return 0;
}