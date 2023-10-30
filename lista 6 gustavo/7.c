#include <stdio.h>

struct horario {
    int hora;
    int minuto;
    int segundo;
};

struct horario horas(struct horario x1, struct horario x2){
    x1.segundo+=x2.segundo;

 
    if(x1.segundo>59){
        x1.segundo-=60;
        x1.minuto++;

    }
        x1.minuto+=x2.minuto;
          if(x1.minuto>59){
        x1.minuto-=60;
        x1.hora++;

    }
       x1.hora+=x2.hora;
       return x1;
}


int main() {
    struct horario horario1 = {14, 30, 45};
    struct horario horario2 = {3, 15, 20};

    struct horario resultado = horas(horario1, horario2);

    printf("Resultado da soma dos horários: %02d:%02d:%02d\n", resultado.hora, resultado.minuto, resultado.segundo);

    return 0;
}