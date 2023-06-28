#include <iostream>
#include <string>

using namespace std;


class AnimalEstimacao{

private:
string nome;
string raca;


public:
 AnimalEstimacao(string nome,string raca){
    this -> nome = nome;
    this -> raca = raca;
 }

 void caminhar(){
    cout << " caminhadno" << endl;
 }


};
 class Dog : public AnimalEstimacao{

    public:

    Dog(string nome, string raca) : AnimalEstimacao(nome, raca) {}

    void latir(){
        cout << " latindo" << endl;
    }


 };


class Gato : public AnimalEstimacao{

    public:
    Gato(string nome,string raca) : AnimalEstimacao(nome,raca){}


   void miar(){
        cout << " miando" << endl;
    }



};


int main(){

Dog dog( "amora","golden");
dog.caminhar();
dog.latir();


Gato gato( "zara","pastora");
gato.caminhar();
gato.miar();



}







