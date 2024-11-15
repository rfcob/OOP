#include  <iostream>
using namespace std;
#include <string>

class cadastro_veiculos{

    private:

    string marca, modelo, combustivel;
    float valor, km_rodados;

    public:

    void init( string marca, string modelo, string combustivel, float valor, float km_rodados){
        this->marca=marca;
        this->modelo=modelo;
        this->combustivel=combustivel;
        this->valor=valor;
        this->km_rodados=km_rodados;
    }

    string get_marca(){ 
        return marca;
    }
    string get_modelo(){
        return modelo;  
    }
    string get_combustivel(){
        return combustivel;
    }
    float get_valor(){
        return valor;
    }
    float get_km_rodados(){
        return km_rodados;
    }

};

int main(){

    cadastro_veiculos carro[2];
    float km, valor;
    string gas, marca, modelo;

    for(int i=0; i <2 ;i++){

        cin >> modelo >> marca >> gas >> modelo >> km; 
        carro[i].init(modelo, marca, gas, valor, km);

    }

    //carro.init("gol","wv","gasolina",100.000, 134567);

    cout << carro[1].get_valor() << endl;

    return 0;

}