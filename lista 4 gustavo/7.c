#include <stdio.h>

int main() {
    int n;
    printf("Digite o numero de primos a serem impressos: ");
    scanf("%d", &n);

    printf("Os primeiros %d numeros primos sao:\n", n);

    int num = 2;  
    int count = 0;  

    while (count < n) {
        int ehPrimo = 1;  

      
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                ehPrimo = 0;  
                break;
            }
        }

        if (ehPrimo) {
            printf("%d ", num);
            count++;
        }

        num++; 
    }

    printf("\n");

    return 0;
}
