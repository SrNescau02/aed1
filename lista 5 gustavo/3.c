#include <stdio.h>
#include <math.h>

double calcularPi(int n) {
    double pi = 0;
    int i;

    for (i = 1; i <= n; i++) {
        double termo = (i % 2 == 0) ? -1.0 : 1.0;
        pi += termo * 4.0 / (2 * i - 1);
    }

    return pi;
}

int main() {
    int n;
    printf("Digite o número de termos para calcular π: ");
    scanf("%d", &n);

    double resultado = calcularPi(n);
    printf("O valor aproximado de π com %d termos é: %lf\n", n, resultado);

    return 0;
}
