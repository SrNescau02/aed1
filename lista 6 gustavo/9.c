#include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
};


struct Horario {
    int hora;
    int minuto;
    int segundo;
};


struct DataHora {
    struct Data data;
    struct Horario horario;
};

int main() {
    struct Data data1 = {12, 11, 2002};
    struct Horario horario1 = {14, 30, 45};

    struct DataHora dataHora1;
    dataHora1.data = data1;
    dataHora1.horario = horario1;

    printf("Data e Horário: %02d/%02d/%04d %02d:%02d:%02d\n",
           dataHora1.data.dia, dataHora1.data.mes, dataHora1.data.ano,
           dataHora1.horario.hora, dataHora1.horario.minuto, dataHora1.horario.segundo);

    return 0;
}
