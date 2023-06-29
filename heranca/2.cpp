#include <iostream>
#include <string>


using namespace std;

class  Forma{
    private:
    

    public:
    virtual double perimetro()=0;
    virtual double area()=0;
    virtual void imprimir()=0;
    virtual void mostrarforma()=0;
       
    };

class Retangulo : public Forma{
    private:
    float base;
    float altura;

    public:
    Retangulo(float base,float altura){
        this -> base = base;
        this -> altura = altura;
    }

    double perimetro(){
       float perimetrofinal= base + base + altura +altura;
       return perimetrofinal;
    }

    double area(){
        float areafinal = base*altura;
        return areafinal;
    }

    void imprimir(){
        cout << "retangulo " << "base " << "altura " << endl;
    }

    void mostrarforma(){
      cout << " valor passado por parametro "  << base << altura << endl;
    }
};


class Circulo : public Forma{
     private:
     float raio;
  
    public:
       Circulo(float raio){
        this -> raio = raio;
     }

         double perimetro(){
       float perimetrofinal= 2*3.14*raio;
       return perimetrofinal;
    }

        double area(){
        float areafinal = 3.14*(raio*raio);
        return areafinal;
    }
  void imprimir(){
        cout << "circulo "  << "base "   << "altura "  << endl;
    }
    void mostrarforma(){
         cout << " valor passado por parametro"  << raio << endl;
    }
};


int main(){

Retangulo retangulo(2,4);

cout << " perimetro do triagnulo " <<  retangulo.perimetro()<< endl;
cout << " area do triangulo " << retangulo.area() << endl;
 retangulo.imprimir();
 retangulo.mostrarforma();



Circulo circulo(20);


cout <<" perimetro do circulo " << circulo.perimetro() << endl;
cout <<" area do circulo "<< circulo.area() << endl;
 circulo.imprimir();
 circulo.mostrarforma();

}













