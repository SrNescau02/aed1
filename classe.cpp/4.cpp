#include <iostream>
#include <string>

using namespace std;


class Carro{
    private:
    float consumo =15;
    float litros =0;
    float distancia =0;

    public:
    void carro(){
        this -> consumo =consumo;
        this -> litros = litros;
        this -> distancia = distancia;

    }

    void setlitros(float litros){
        this -> litros = litros;
    }

    void setdistancia(float distancia){
        this -> distancia = distancia;
    }

    float getdistancia(){
        return distancia;
    }

    float litrosrestantes(){
        float a = distancia/consumo;
        float litrosrestantes=litros-a;
        return litrosrestantes;

    }


};



int main(){

    Carro carro1;
    Carro carro2;

    carro1.setlitros(20);
    carro2.setlitros(30);

    carro1.setdistancia(200);
    carro2.setdistancia(400);

    cout << "litros restantes" << carro1.litrosrestantes() << endl;
       cout << "litros restantes" << carro2.litrosrestantes() << endl;

           cout << "distancia percorrida" << carro1.getdistancia() << endl;
       cout << "distancia percorrida" << carro2.getdistancia() << endl;


   
}