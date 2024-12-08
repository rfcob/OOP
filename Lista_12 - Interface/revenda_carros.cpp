#include  <iostream>
#include "revenda.cpp"
#include "cadastro_veiculos.hpp"
using namespace std;
#include <string>
#include <limits> 


//função para retornar ao menu principal_________________________________________________________________________________
bool sair_continuar(){

    int j;

    cout << " Digite 1 para retornar ao menu ou 2 para encerrar programa." << endl << "\n";
    cin >> j;

    if(j==1){
        return true;
    }else if(j==2){
        cout << "Programa encerrado." << endl <<"\n";
        return false;
        
    }

}

// funçao principal ____________________________________________________________________________________________________
int main(){

    cadastro_veiculos carro[10];  //definindo/instanciando objeto_______________________________________________________

    float km, valor;
    string gas, marca, modelo;
    int opcao_main, opcao_2nd, tamanho_lista;
    bool cond_menu_1 = true, encontrou=false;


//menu principal ______________________________________________________________________________________________________
    while(cond_menu_1){
        cout << "          VEÌCULOS        " << endl << "\n"
             << "  1 - Cadastrar veículos \n"
             << "  2 - Buscar Veículos   \n"
             << "  3 - Verificar Numero de Carros Cadastrados "<< endl << "\n"
             //<< "  3 - Atualizar Veículo   "<< endl << "\n"
             << "  Para sair digite zero  "<< endl << "\n";
        
        cout <<endl;
        while(true){
            cout << "Entre opção: ";
            cin >> opcao_main;
            if (cin.fail()) {
                cout << "Entrada inválida! Digite um número válido.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break;
            }
        }
        
        if(opcao_main==0){//________________________________________________________________________________________-sair
            cout << "Programa encerrado." << endl <<"\n";
            cond_menu_1=false;
        }
        if(opcao_main==1){//_____________________________________________________________________________________cadastrar
            int i=0, j;

            cout << "Entre com a quantidade de carros que deseja cadastrar (limite máximo 10 veículos): ";
            cin >> tamanho_lista;

            cout << "\nEntre com os dados do veículo." << endl << "\n";

            for(i; i <tamanho_lista ;i++){
               cout << "Marca -veículo " << i+1 <<": ";
               cin >>  marca;
               cout << "Modelo -veículo " << i+1 <<": ";
               cin >> modelo;
               cout << "Combustível-veículo " << i+1 <<": ";
               cin >>  gas;
    
               while (true) {
                    cout << "Preço - veículo " << i + 1 << ": ";
                    cin >> valor;
                    if (cin.fail()) {
                        cout << "Entrada inválida! Digite um número válido.\n";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    } else {
                        break;
                    }
               }
                
                while (true) {
                    cout << "Quilometragem - veículo " << i + 1 << ": ";
                    cin >> km;
                    if (cin.fail()) {
                        cout << "Entrada inválida! Digite um número válido.\n";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    } else {
                        break;
                    }
                }

               carro[i].init(marca, modelo,  gas, valor, km);
            }

            cond_menu_1=sair_continuar();

        }

        if(opcao_main==2){//________________________________________________________________________________________exibir
            bool cond_menu_2=true;

//menu secundário _________________________________________________________________________________________________________
            while(cond_menu_2){//___________________________________________________________________________________MENU 2
                cout << "          VEÍCULOS        " << endl << "\n";
                cout << "         Buscar por:        \n"
                << "  1 - Fabricante/marca \n"
                << "  2 - Modelo \n"
                << "  3 - Combustível \n"
                << "  4 - Preço (menor ou igual)  \n"
                << "  5 - Quilometragem (menor ou igual) " << endl << "\n"
                << "  Para menu principal, digite 0 "<< endl << "\n";
                
                cout <<endl;
                while(true){
                    cout << "Entre opção: ";
                    cin >> opcao_2nd;
                    if (cin.fail()) {
                        cout << "Entrada inválida! Digite um número válido.\n";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    } else {
                        break;
                    }
                }
        
                if(opcao_2nd==0){//_________________________________________________________________________sair - MENU 2
                    cond_menu_2=false;
                }
                if(opcao_2nd==1){//________________________________________________________________ exibir marca - MENU 2
                    
                    string marca_opcao;

                    cout << " Digite o a marca: ";
                    cin >> marca_opcao;
                    cout <<endl;

                    for(int i=0;i<tamanho_lista;i++){
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
                    //cond_menu_1=cond_menu_2;

                }
                 
                if(opcao_2nd==2){//______________________________________________________________exibir modelo - MENU 2
                    
                    string modelo_opcao;
                    
                    cout <<endl;
                    cout << " Digite o modelo: ";
                    cin >> modelo_opcao;
                    cout <<endl;

                    for(int i=0;i<tamanho_lista;i++){
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
                    //cond_menu_1=cond_menu_2;
                }
                if(opcao_2nd==3){//_________________________________________________________exibir combustível - MENU 2

                    string gas_opcao;

                    cout <<endl;        
                    cout << " Digite o combustível ";
                    cin >> gas_opcao;
                    cout <<endl;

                    for(int i=0;i<tamanho_lista;i++){
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
                    //cond_menu_1=cond_menu_2;

                }
                if(opcao_2nd==4){//__________________________________________________________exibir valor abaixo - MENU 2
                    
                    float valor_opcao;

                    cout <<endl;
                    cout << " Digite o valor: ";
                    cin >> valor_opcao;
                    cout <<endl;

                    for(int i=0;i<tamanho_lista;i++){
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
                    //cond_menu_1=cond_menu_2;

                }
                if(opcao_2nd==5){//_____________________________________________________exibir valor quilometragem- MENU 2
                    
                    float km_opcao;

                    cout <<endl;
                    cout << " Digite a quilometragem ";
                    cin >> km_opcao;
                    cout <<endl;

                    for(int i=0;i<tamanho_lista;i++){
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
                    //cond_menu_1=cond_menu_2;
                }
            }
        }
        if(opcao_main==3){
            cout <<"\nNumero de carros cadastrados: "<< cadastro_veiculos::num_count_carros() << endl << "\n";
        }
    }
     
    return 0;

}