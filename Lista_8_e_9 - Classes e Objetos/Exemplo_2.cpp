#include <iostream>
using namespace std;


//Definindo uma classe
class Retangulo{

    private: //privado - somente dentro da classe possui acesso
    int base, altura;

    public: //de fora tem acesso, por exemplo da main.

    void init (int base, int altura){
    this->base=base; //sem o this ele adiciona lixo
    this->altura=altura;//é preciso dizer que altura recebe altura.
    }  

    //gets - para pegar e retornar o valor acessando a classe - o set pode ser usado para alterar o valor.
    int get_base(){ 
        return base;
    }
    int get_altura(){
        return altura;
    }

};


int main(){
 // instanciando um objeto
 Retangulo ret;

//inicializando os métodos get e init.
 ret.init(2,1); 

 cout << "Altura: " << ret.get_altura() << " Base: " << ret.get_base() << endl << "\n"; 

}
