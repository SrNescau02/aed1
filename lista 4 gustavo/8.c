#include <stdio.h>

#define MAX_DIMENSAO 10

int calcularDeterminante(int matriz[MAX_DIMENSAO][MAX_DIMENSAO], int dimensao) {
    int det = 0;
    int submatriz[MAX_DIMENSAO][MAX_DIMENSAO];

    if (dimensao == 1) {
        return matriz[0][0];
    } else if (dimensao == 2) {
        return (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);
    } else {
        for (int k = 0; k < dimensao; k++) {
            int subi = 0; 
            for (int i = 1; i < dimensao; i++) {
                int subj = 0;
                for (int j = 0; j < dimensao; j++) {
                    if (j == k)
                        continue;
                    submatriz[subi][subj] = matriz[i][j];
                    subj++;
                }
                subi++;
            }
            det += (k % 2 == 0 ? 1 : -1) * matriz[0][k] * calcularDeterminante(submatriz, dimensao - 1);
        }
    }
    return det;
}

int main() {
    int matriz[MAX_DIMENSAO][MAX_DIMENSAO];
    int n;

    printf("Digite a dimensao da matriz quadrada: ");
    scanf("%d", &n);

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    int determinante = calcularDeterminante(matriz, n);
    printf("\nDeterminante: %d\n", determinante);

    printf("Diagonal Principal: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    return 0;
}
