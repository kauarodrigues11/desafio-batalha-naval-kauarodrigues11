#include <stdio.h>

int tabuleiro[10][10];

int main() {

    int i, j;

    // zera tabuleiro
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Navio horizontal
    int linhaH = 2, colunaH = 4;

    if (colunaH + 2 < 10) {
        for (i = 0; i < 3; i++) {
            tabuleiro[linhaH][colunaH + i] = 3;
        }
    }

    // Navio vertical
    int linhaV = 5, colunaV = 1;

    if (linhaV + 2 < 10) {
        for (i = 0; i < 3; i++) {
            tabuleiro[linhaV + i][colunaV] = 3;
        }
    }

    // Diagonal principal
    int linhaD1 = 0, colunaD1 = 0;

    for (i = 0; i < 3; i++) {
        if (linhaD1 + i < 10 && colunaD1 + i < 10) {
            tabuleiro[linhaD1 + i][colunaD1 + i] = 3;
        }
    }

    // Diagonal secundária
    int linhaD2 = 0, colunaD2 = 9;

    for (i = 0; i < 3; i++) {
        if (linhaD2 + i < 10 && colunaD2 - i >= 0) {
            tabuleiro[linhaD2 + i][colunaD2 - i] = 3;
        }
    }

    // imprime tabuleiro
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}