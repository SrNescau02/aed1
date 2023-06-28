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

    double perimetro(){
       float perimetrofinal= base + base + altura +altura;
       return perimetrofinal;
    }

    double area(){
        float areafinal = base*altura;
        return areafinal;
    }

 


};














