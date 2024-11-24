#include <iostream>
using namespace std;


//Definindo uma classe
class Retangulo{

    private: //privado - somente dentro da classe possui acesso
    int base, altura;

    public: //de fora tem acesso, por exemplo da main.

    void init (int bas, int alt){
    base=bas;
    altura=alt;
    }  

    //gets - para pegar e retornar o valor acessando a classe - o set pode ser usado para alterar o valor.
    int get_base(){ 
        return base;
    }
    int get_altura(){
        return altura;
    }

    //metodo  area

    int area(int bas, int alt){
        int area;

        area=bas*alt;

        return area;
    }
};


int main(){
 // instanciando um objeto
 Retangulo ret;

//inicializando os métodos get e init.
 ret.init(2,1); 

 //ret.area(2,1);

 cout << "Altura: " << ret.get_altura() << " Base: " << ret.get_base() << endl; 

 cout << "Area é: " << ret.area(2,2) << endl << "n";


}

