#include <stdio.h>

struct data {
    int dia;
    int mes;
    int ano;
};

int diferenca(struct data x1, struct data x2) {
    int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int soma = 0;

    if (x1.ano > x2.ano) {
        struct data temp = x1;
        x1 = x2;
        x2 = temp;
    }

    if (x1.ano == x2.ano && x1.mes > x2.mes) {
        struct data temp = x1;
        x1 = x2;
        x2 = temp;
    }

    for (int ano = x1.ano; ano <= x2.ano; ano++) {
        int mesInicial = (ano == x1.ano) ? x1.mes : 1;
        int mesFinal = (ano == x2.ano) ? x2.mes : 12;

        for (int mes = mesInicial; mes <= mesFinal; mes++) {
            int diaInicial = (ano == x1.ano && mes == x1.mes) ? x1.dia : 1;
            int diaFinal = (ano == x2.ano && mes == x2.mes) ? x2.dia : diasPorMes[mes];

            soma += diaFinal - diaInicial + 1;
        }
    }

    return soma;
}

int main() {
    struct data data1 = {12, 11, 2002};
    struct data data2 = {26, 10, 2023};

    int diff = diferenca(data1, data2);

    printf("Diferença em dias: %d\n", diff);

    return 0;
}
