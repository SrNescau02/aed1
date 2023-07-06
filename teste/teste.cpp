#include <iostream>
#include <string>

using namespace std;


class AnimalEstimacao{
    private:
    string nome;
    string raca;

    public:

    AnimalEstimacao(string nome, string raca){
        this->nome = nome;
        this->raca = raca;
    }

 
    void caminhar(){
        cout << "caminhando" << endl;
    }
};



class Cachorro : public AnimalEstimacao{

    Cachorro(string nome,string raca):AnimalEstimacao(nome,raca){}
    public:

    void emitirSom(){
        cout << "late" << endl;
    }

};
class Gato : public AnimalEstimacao{

    Gato(string nome,string raca):AnimalEstimacao(nome,raca){}
    public:

    void emitirSom(){
        cout << "mia" << endl;
    }

};




int main(){
    
    Cachorro cachorro( "amora","golden");
    cachorro.caminhar();
    cachorro.emitirSom();

        Gato gato( "zara","pastora");
        gato.caminhar();
        gato.emitirSom();

        return 0;

}
