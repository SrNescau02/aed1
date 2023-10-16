#include <stdio.h>
#include <math.h>

#define MAX_NUMEROS 100

int main() {
    int numeros[MAX_NUMEROS];
    int quantidade = 0;
    int soma = 0;
    int media=0;

    
    int num;
    do {
        printf("Digite um número natural (ou 0 para parar): ");
        scanf("%d", &num);

        if (num != 0) {
            numeros[quantidade] = num;
            soma += num;
            quantidade++;
        }
    } while (num != 0 && quantidade < MAX_NUMEROS);


    if(quantidade>0){
         media=soma/quantidade;
    }


    int mediana;
    if (quantidade % 2 == 0)
        mediana = (numeros[quantidade / 2 - 1] + numeros[quantidade / 2]) / 2;
    else
        mediana = numeros[quantidade / 2];


    int moda = 0, maxFreq = 0;
    for (int i = 0; i < quantidade; i++) {
        int freq = 1;
        for (int j = i + 1; j < quantidade; j++) {
            if (numeros[i] == numeros[j])
                freq++;
        }
        if (freq > maxFreq) {
            moda = numeros[i];
            maxFreq = freq;
        }
    }


    double desvioPadrao = 0;
    for (int i = 0; i < quantidade; i++) {
        desvioPadrao += ((double)numeros[i] - media) * ((double)numeros[i] - media);
    }
    desvioPadrao = quantidade > 0 ? sqrt(desvioPadrao / quantidade) : 0;

    printf("Média: %.2lf\n", media);
    printf("Mediana: %d\n", mediana);
    printf("Moda: %d\n", moda);
    printf("Desvio Padrão: %.2lf\n", desvioPadrao);

    return 0;
}
