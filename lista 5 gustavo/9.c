#include <stdio.h>

// Função recursiva para calcular e imprimir a sequência de Fibonacci
void fibonacci(int n, int a, int b) {
    if (n > 0) {
        printf("%d ", a);
        fibonacci(n - 1, b, a + b);
    }
}

int main() {
    int n;
    printf("Digite o número de termos da sequência de Fibonacci: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("O número de termos deve ser maior que zero.\n");
    } else {
        printf("Sequência de Fibonacci com %d termos:\n", n);
        fibonacci(n, 0, 1);
        printf("\n");
    }

    return 0;
}
