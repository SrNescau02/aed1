#include <iostream>
#include <string>
using namespace std;

class Relogio {
private:
  int hora;
  int minuto;
  int segundo;

public:
 void setHora(int hora, int minuto, int segundo) {
    this->hora = hora;
    this->minuto = minuto;
    this->segundo = segundo;
  }

  string getHora() {
    string horaFormatada = "";

    if (hora < 10)
      horaFormatada += "0";
    horaFormatada += to_string(hora) + ":";

    if (minuto < 10)
      horaFormatada += "0";
    horaFormatada += to_string(minuto) + ":";

    if (segundo < 10)
      horaFormatada += "0";
    horaFormatada += to_string(segundo);

    return horaFormatada;
  }

  void avancarSegundo() {
    segundo++;

    if (segundo >= 60) {
      segundo = 0;
      minuto++;

      if (minuto >= 60) {
        minuto = 0;
        hora++;

        if (hora >= 24) {
          hora = 0;
        }
      }
    }
  }
};

int main() {
  Relogio relogio;
  relogio.setHora(13, 15, 40);

  cout << "Horário atual: " << relogio.getHora() << endl;

  relogio.avancarSegundo();
  cout << "Próximo segundo: " << relogio.getHora() << endl;

  return 0;
}