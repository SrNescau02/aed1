#include <stdio.h>

struct Horario {
    int hora;
    int minuto;
    int segundo;
};

// Função para calcular a quantidade de segundos a partir de um horário
int calcularSegundos(struct Horario horario) {
    int totalSegundos = 0;

    totalSegundos += horario.hora * 3600;    // 1 hora = 3600 segundos
    totalSegundos += horario.minuto * 60;     // 1 minuto = 60 segundos
    totalSegundos += horario.segundo;

    return totalSegundos;
}

int main() {
    struct Horario horario = {14, 30, 45};

    int segundos = calcularSegundos(horario);

    printf("Quantidade de segundos: %d\n", segundos);

    return 0;
}
