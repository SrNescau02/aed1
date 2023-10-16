#include <stdio.h>

long calcularCoeficiente(int linha, int coluna) {
    if (coluna == 0 || coluna == linha)
        return 1;
    else
        return calcularCoeficiente(linha - 1, coluna - 1) + calcularCoeficiente(linha - 1, coluna);
}

int main() {
    int n;
    printf("Digite o numero de linhas para o Triangulo de Pascal: ");
    scanf("%d", &n);

    for (int linha = 0; linha < n; linha++) {
        for (int espaco = 0; espaco < n - linha - 1; espaco++)
            printf(" ");

        for (int coluna = 0; coluna <= linha; coluna++)
            printf("%ld ", calcularCoeficiente(linha, coluna));

        printf("\n");
    }

    return 0;
}
