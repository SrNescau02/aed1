#include <stdio.h>

int main() {
    int n;
    double pi = 0.0;
    int sinal = 1;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        pi += sinal * 1.0 / (2*i - 1);
        sinal *= -1;
    }

    pi *= 4;

    printf("O valor aproximado de pi com %d termos eh: %lf\n", n, pi);

    return 0;
}





