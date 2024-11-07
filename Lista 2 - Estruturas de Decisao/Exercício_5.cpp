#include <iostream>
using namespace std;


int main() {
    float valor_1 = 0.0; //deve ser float
    float valor_2 = 0.0;
    int opcao = 0;

    cout << "Digite a primeira nota: ";
    cin >> valor_1;

    cout << "Digite a segunda nota: ";
    cin >> valor_2;

    cout << "Qual operação deseja realizar?"
    << endl << "1 - SOMAR" << endl << "2 - MÉDIA";

    cin >> opcao; //faltou ;

    if (opcao == 1){
        cout << "Você escolheu SOMAR" << endl;
        }else if (opcao == 2)
        cout << "Você escolheu MÉDIA" << endl;
        else{
        cout << "Opção não conhecida!" << endl;
    }
    switch (opcao)
    {
        case 1:
            float soma; //a forma de declara gerava erro
            soma = valor_1 + valor_2;
            cout << "A soma dos valores é " << soma
            << endl;
            break;
        case 2:
            float media; //a forma de declara gerava erro
            media = valor_1 + valor_2 / 2;
            cout << "A média dos valores é " << media
            << endl;
            break;
        default:
            cout << "Nenhuma operação realizada!"
            << endl;
    }
}