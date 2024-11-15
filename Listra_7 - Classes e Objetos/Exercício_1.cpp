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
    int opcao_main, opcao_2nd;
    bool cond_menu_1 = true;

    while(cond_menu_1){
        cout << "          VEÌCULOS        " << endl << "\n"
             << "  1 - Cadastrar veículos \n"
             << "  2 - Buscar Veículos   \n"
             << "  3 - Atualizar Veículo   "<< endl << "\n"
             << "  Para sair digite zero  "<< endl << "\n";
        
        cout <<endl;
        cout << "Entre opção: ";
        cin >> opcao_main;
        
        if(opcao_main==0){
            cond_menu_1=false;
        }
        if(opcao_main==1){
            cout << "Entre com os dados do veículo." << endl << "\n";

            for(int i=0; i <2 ;i++){
               cout << "Marca -veículo " << i+1 <<": ";
               cin >>  marca;
               cout << "Modelo -veículo " << i+1 <<": ";
               cin >> modelo;
               cout << "Combustível-veículo " << i+1 <<": ";
               cin >>  gas;
               cout << "Preço - veículo " << i+1 <<": ";
               cin >>  valor;
               cout << "Quilometragem - veículo " << i+1 <<": ";
               cin >>  km;

               carro[i].init(marca, modelo,  gas, valor, km);
            }
        }
        if(opcao_main==2){
            bool cond_menu_2=true;

            while(cond_menu_2){
                cout << "          VEÍCULOS        " << endl << "\n";
                cout << "         Buscar por:        \n"
                << "  1 - Fabricante/marca \n"
                << "  2 - Modelo \n"
                << "  3 - Combustível \n"
                << "  4 - Preço (menor ou igual)  \n"
                << "  5 - QUilometragem (menor ou igual) " << endl << "\n"
                << "  Para sair digite zero  "<< endl << "\n";

                cout <<endl;
                cout << "Entre opção: ";
                cin >> opcao_2nd;

                if(opcao_2nd==0){
                    cond_menu_2=false;
                }
            }
        }

        cout << carro[1].get_modelo() << endl;
    }


    return 0;

}