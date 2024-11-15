#include  <iostream>
using namespace std;
#include <string>

//Definindo a classe _______________________________
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

//função para retornar ao menu principal______________________
bool sair_continuar(){

    int j;

    cout << " Digite 1 para Menu principal ou 2 para encerrar programa." << endl << "\n";
    cin >> j;

    if(j==1){
        return true;
    }else if(j==2){
        cout << "Programa encerrado." << endl <<"\n";
        return false;
    }

}

// funçao principal _____________________________

int main(){

    cadastro_veiculos carro[2];  //definindo/instanciando objeto_________
    float km, valor;
    string gas, marca, modelo;
    int opcao_main, opcao_2nd;
    bool cond_menu_1 = true, encontrou=false;


    //menu principal _________________________________________________
    while(cond_menu_1){
        cout << "          VEÌCULOS        " << endl << "\n"
             << "  1 - Cadastrar veículos \n"
             << "  2 - Buscar Veículos   \n"
             //<< "  3 - Atualizar Veículo   "<< endl << "\n"
             << "  Para sair digite zero  "<< endl << "\n";
        
        cout <<endl;
        cout << "Entre opção: ";
        cin >> opcao_main;
        cout <<endl;
        
        if(opcao_main==0){//_______________________________________________-sair
            cout << "Programa encerrado." << endl <<"\n";
            cond_menu_1=false;
        }
        if(opcao_main==1){//________________________________________________cadastrar
            int i=0, j;
            cout << "Entre com os dados do veículo." << endl << "\n";

            for(i; i <2 ;i++){
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

            //cout << " Cadastro concluido. Digite 1 para Menu principal ou 2 para encerrar programa.";
            //cin >> j;

            cond_menu_1=sair_continuar();


            /*if(j==1){
                cond_menu_1=true;
            }else if(j==2){
                cout << "Programa encerrado." << endl <<"\n";
                cond_menu_1=false;
            }
            */
        }

        if(opcao_main==2){//________________________________________________________exibir
            bool cond_menu_2=true;

            while(cond_menu_2){//_________________________________________________MENU 2
                cout << "          VEÍCULOS        " << endl << "\n";
                cout << "         Buscar por:        \n"
                << "  1 - Fabricante/marca \n"
                << "  2 - Modelo \n"
                << "  3 - Combustível \n"
                << "  4 - Preço (menor ou igual)  \n"
                << "  5 - Quilometragem (menor ou igual) " << endl << "\n"
                << "  Para sair digite zero  "<< endl << "\n";

                cout <<endl;
                cout << "Entre opção: ";
                cin >> opcao_2nd;
                cout <<endl;

                if(opcao_2nd==0){//___________________________________________sair - MENU 2
                    cond_menu_2=false;
                }
                if(opcao_2nd==1){//______________________________________ exibir marca - MENU 2
                    
                    string marca_opcao;

                    cout << " Digite o a marca: ";
                    cin >> marca_opcao;
                    cout <<endl;

                    for(int i=0;i<2;i++){
                        if(marca_opcao==carro[i].get_marca()){
                            cout << "Marca: "             << carro[i].get_marca() 
                                 << " - Modelo: "            <<  carro[i].get_modelo()
                                 << " - Combustível: "       <<  carro[i].get_combustivel()
                                 << " - Valor:  "            <<  carro[i].get_valor() <<" R$ "
                                 << " - Quilômetros Rodados: " <<  carro[i].get_km_rodados() << " km " << endl << "\n";
                            encontrou=true;
                        }
                    }
                    if(!encontrou){
                            cout << " Veículo não cadastrado " << endl << "\n";  
                    }
                    
                    cond_menu_2=sair_continuar();
                    cond_menu_1=cond_menu_2;
                    /*cout << " Digite 1 para Menu principal ou 2 para encerrar programa.";
                    int j;
                    cin >> j;

                    if(j==1){
                    cond_menu_1=true;
                    }else if(j=2){
                    cout << "Programa encerrado." << endl <<"\n";
                    cond_menu_1=false;
                    }
                    */
                }
                 
                if(opcao_2nd==2){//__________________________________________exibir modelo - MENU 2
                    
                    string modelo_opcao;
                    
                    cout <<endl;
                    cout << " Digite o modelo: ";
                    cin >> modelo_opcao;
                    cout <<endl;

                    for(int i=0;i<2;i++){
                        if(modelo_opcao==carro[i].get_modelo()){
                            cout << "Marca: "             << carro[i].get_marca() 
                                 << " - Modelo: "            <<  carro[i].get_modelo()
                                 << " - Combustível: "       <<  carro[i].get_combustivel()
                                 << " - Valor:  "            <<  carro[i].get_valor() <<" R$ "
                                 << " - Quilômetros Rodados: " <<  carro[i].get_km_rodados() << " km " << endl << "\n";
                            encontrou=true;
                        }
                    }
                    if(!encontrou){
                            cout << " Veículo não cadastrado " << endl << "\n";  
                    }
                    
                    cond_menu_2=sair_continuar();
                    cond_menu_1=cond_menu_2;
                }
                if(opcao_2nd==3){//__________________________________________exibir combustível - MENU 2

                    string gas_opcao;

                    cout <<endl;        
                    cout << " Digite o combustível ";
                    cin >> gas_opcao;
                    cout <<endl;

                    for(int i=0;i<2;i++){
                        if(gas_opcao==carro[i].get_combustivel()){
                            cout << "Marca: "             << carro[i].get_marca() 
                                 << " - Modelo: "            <<  carro[i].get_modelo()
                                 << " - Combustível: "       <<  carro[i].get_combustivel()
                                 << " - Valor:  "            <<  carro[i].get_valor() <<" R$ "
                                 << " - Quilômetros Rodados: " <<  carro[i].get_km_rodados() << " km " << endl << "\n";
                            encontrou=true;
                        }
                    }
                    if(!encontrou){
                            cout << " Veículo não cadastrado " << endl << "\n";  
                    }
                    
                    cond_menu_2=sair_continuar();
                    cond_menu_1=cond_menu_2;

                }
                if(opcao_2nd==4){//__________________________________________exibir valor abaixo - MENU 2
                    
                    float valor_opcao;

                    cout <<endl;
                    cout << " Digite o valor: ";
                    cin >> valor_opcao;
                    cout <<endl;

                    for(int i=0;i<2;i++){
                        if(valor_opcao >= carro[i].get_valor()){
                            cout << "Marca: "             << carro[i].get_marca() 
                                 << " - Modelo: "            <<  carro[i].get_modelo()
                                 << " - Combustível: "       <<  carro[i].get_combustivel()
                                 << " - Valor:  "            <<  carro[i].get_valor() <<" R$ "
                                 << " - Quilômetros Rodados: " <<  carro[i].get_km_rodados() << " km " << endl << "\n";
                            encontrou=true;
                        }
                    }
                    if(!encontrou){
                            cout << " Veículo não cadastrado " << endl << "\n";  
                    }
                    
                    cond_menu_2=sair_continuar();
                    cond_menu_1=cond_menu_2;

                }
                if(opcao_2nd==5){//__________________________________________exibir valor quilometragem- MENU 2
                    
                    float km_opcao;

                    cout <<endl;
                    cout << " Digite a quilometragem ";
                    cin >> km_opcao;
                    cout <<endl;

                    for(int i=0;i<2;i++){
                        if(km_opcao >= carro[i].get_valor()){
                            cout << "Marca: "             << carro[i].get_marca() 
                                 << " - Modelo: "            <<  carro[i].get_modelo()
                                 << " - Combustível: "       <<  carro[i].get_combustivel()
                                 << " - Valor:  "            <<  carro[i].get_valor() <<" R$ "
                                 << " - Quilômetros Rodados: " <<  carro[i].get_km_rodados() << " km " << endl << "\n";
                            encontrou=true;
                        }
                    }
                    if(!encontrou){
                            cout << " Veículo não cadastrado " << endl << "\n";  
                    }

                    cond_menu_2=sair_continuar();
                    cond_menu_1=cond_menu_2;
                }
            }
        }
    }
     
    return 0;

}