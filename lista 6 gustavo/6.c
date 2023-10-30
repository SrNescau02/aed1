#include <stdio.h>

struct horario {
    int hora;
    int minuto;
    int segundo;
};

struct horario horas(int segundo,int minuto,int hora){
   struct  horario horario;

    if (hora >= 0 && hora < 24 && minuto >= 0 && minuto < 60 && segundo >= 0 && segundo < 60) {
        horario.hora = hora;
        horario.minuto = minuto;
        horario.segundo = segundo;
    } else {
        horario.hora = 0;
        horario.minuto = 0;
        horario.segundo = 0;
    }

    return horario;
}
