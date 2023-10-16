#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define TAM_FRASE 100

int main() {
    char frase[TAM_FRASE];
    printf("Digite uma frase: ");
    fgets(frase, TAM_FRASE, stdin);

    int tamanho = strlen(frase);

    if (tamanho > 0 && frase[tamanho - 1] == '\n') {
        frase[tamanho - 1] = '\0';
        tamanho--;
    }

    char fraseLimpa[TAM_FRASE];
    int j = 0;
    for (int i = 0; i < tamanho; i++) {
        if (!isspace(frase[i])) {
            fraseLimpa[j] = tolower(frase[i]);
            j++;
        }
    }
    fraseLimpa[j] = '\0'; 

    printf("Palíndromos encontrados:\n");


    for (int i = 0; i < j - 2; i++) { 
        for (int k = 3; k <= j - i; k++) {
            bool ehPalindromo = true;
            for (int l = 0; l < k / 2; l++) {
                if (fraseLimpa[i + l] != fraseLimpa[i + k - l - 1]) {
                    ehPalindromo = false;
                    break;
                }
            }
            if (ehPalindromo) {
                for (int m = i; m < i + k; m++) {
                    printf("%c", frase[m]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}
