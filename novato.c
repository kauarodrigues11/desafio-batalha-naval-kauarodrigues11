#include <stdio.h>

int tabuleiro[10][10];

int main () {

    int i,j; 

    int linhaH = 2;
    int colunaH = 4;
    int linhaV = 5;
    int colunaV = 1;

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

    return 0;
}