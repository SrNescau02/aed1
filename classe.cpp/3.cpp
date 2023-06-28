#include <iostream>
#include <string>

using namespace std;




class Carro{

private:
  float tanque;
  float consumo;
  float distancia;

  public:
   Carro(){
    this -> tanque = 0;
    this -> consumo = 15;
    this -> distancia = 0;
   }

   void set(float tanque,float distancia){
    this -> tanque = tanque;
    this -> distancia = distancia;
    
   }

 

   float a (){
    float consumototal = distancia/consumo;
    float gasolina=consumototal-tanque;
    
    return gasolina;
   }

   float b(){
    return distancia;
   }


};


int main(){

Carro carro1;
Carro carro2;

carro1.set(20,200);
carro2.set(30,400);
float gasolina1= carro1.a();
float gasolina2 = carro2.a();

float distancia1 = carro1.b();
float distancia2 = carro2.b();


cout << " gasolina restante carro 1 " << gasolina1 << endl;
cout << " distancia percorrida  carro 1" << distancia1 << endl;

cout << " gasolina restante carro 2 " << gasolina2 << endl;
cout << " distancia percorrida carro 2" << distancia2 << endl;






return 0;

}