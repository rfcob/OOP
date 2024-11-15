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
    int selecao;
    bool cond = true;

    while(cond){
        cout << "          OPÇÕES:        " << endl << "\n"
             << "  1 - Cadastrar veículos \n"
             << "  2 - Buscar Veículos   "<< endl << "\n"
             << "  Para sair digite zero  "<< endl << "\n";
        
        cin >> selecao;
        
        if(selecao==0){
            cond=false;
        }
        if(selecao==1){
            cout >> "Entre com os dados do veículo." << endl << "\n";

            for(int i=0; i <2 ;i++){
               cout << "Modelo -veículo " << i+1 <<": ";
               cin >> modelo;
               cout << "Marca -veículo " << i+1 <<": ";
               cin >>  marca;
               cout << "Combustível-veículo " << i+1 <<": ";
               cin >>  gas;
               cout << "Quilometragem - veículo " << i+1 <<": ";
               cin >>  km;
               cout << " " << i+1 <<": ";

               carro[i].init(modelo, marca, gas, valor, km);
        }
        if(selecao==2){
            cout << "Em construção" << endl;
        }

        }



        //carro.init("gol","wv","gasolina",100.000, 134567);

        cout << carro[1].get_valor() << endl;
    }


    return 0;

}