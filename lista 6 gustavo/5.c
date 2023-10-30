#include <stdio.h>

struct Horario {
    int hora;
    int minuto;
    int segundo;
};

int main() {
    struct Horario agora;

    agora.hora = 14;
    agora.minuto = 30;
    agora.segundo = 45;

    printf("Horário atual: %i:%i:%i\n", agora.hora, agora.minuto, agora.segundo);

    return 0;
}
