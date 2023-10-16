#include <stdio.h>

int main() {
    int vetor[3];
    int menor=0;

    printf("Digite 3 valores:\n");

    for (int i = 0; i < 3; i++) {
        scanf("%i", &vetor[i]);
    }


    for (int i = 0; i < 3 - 1; i++) {
        for (int j = 0; j < 3 - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
             
             
                menor = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = menor;
            }
        }
    }

    printf("Vetor organizado de forma crescente:\n");
    for (int i = 0; i < 3; i++) {
        printf("%i ", vetor[i]);
    }
    printf("\n");

    return 0;
}
