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


   void cadastro(){
         
         //bool cond_menu_1 = true;
         //int i=0, j;
            cout << "Entre com os dados do veículo." << endl << "\n";

            //for(i; i <2 ;i++){
               cout << "Marca -veículo : ";
               cin >>  marca;
               cout << "Modelo -veículo : ";
               cin >> modelo;
               cout << "Combustível-veículo : ";
               cin >>  combustivel;
               cout << "Preço - veículo : ";
               cin >>  valor;
               cout << "Quilometragem - veículo : ";
               cin >>  km_rodados;

             //  carro[i].init(marca, modelo,  combustivel, valor, km_rodados);
            //}
                      
           // return 0;
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
            cout << "Programa encerrado." << endl <<"\n";
            cond_menu_1=false;
        }

        if (opcao_main == 1) { 
            for (int i = 0; i < 2; i++) { 
                carro[i].cadastro(); 
            } 

        cout << "Cadastro concluído. Digite 1 para Menu principal ou 2 para encerrar programa: "; 
            
        int j; 
        cin >> j; 
            
        if (j == 1) { 
            cond_menu_1 = true; 
            } else if (j == 2) { 
                cout << "Programa encerrado." << endl << "\n"; 
                cond_menu_1 = false;
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
                if(opcao_2nd==1){
                    cond_menu_2=false;
                }
                if(opcao_2nd==2){
                    cond_menu_2=false;
                }
                if(opcao_2nd==3){
                    cond_menu_2=false;
                }
                if(opcao_2nd==4){
                    cond_menu_2=false;
                }
                if(opcao_2nd==5){
                    cond_menu_2=false;
                }
        }

        
    }
    }
    cout << carro[1].get_modelo() << endl;
    return 0;

}