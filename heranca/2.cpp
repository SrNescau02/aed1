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
        cout << "retangulo" << "base" << "altura" << endl;
    }

    void mostrarforma(){
        cout << base << altura << endl;
    }

 


};














