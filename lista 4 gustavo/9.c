#include <stdio.h>

#define MAX_ROWS_A 10
#define MAX_COLS_A 10
#define MAX_ROWS_B 10
#define MAX_COLS_B 10

int main() {
    int matrizA[MAX_ROWS_A][MAX_COLS_A];
    int matrizB[MAX_ROWS_B][MAX_COLS_B];
    int resultado[MAX_ROWS_A][MAX_COLS_B];
    int rowsA, colsA, rowsB, colsB;

    printf("Digite o numero de linhas e colunas da matriz A (separados por espaco): ");
    scanf("%d %d", &rowsA, &colsA);

    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            printf("Elemento A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Digite o numero de linhas e colunas da matriz B (separados por espaco): ");
    scanf("%d %d", &rowsB, &colsB);

    printf("Digite os elementos da matriz B:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("Elemento B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrizB[i][j]);
        }
    }

    if (colsA != rowsB) {
        printf("O produto das matrizes A e B nao e possivel.\n");
        return 0;
    }


    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    printf("Produto das matrizes A e B:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
