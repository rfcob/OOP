#include <iostream>
using namespace std;

int main(){
    int opcao;

    cout <<"     MENU " << endl << "\n" <<
    " 1 - Calabresa" << endl <<
    " 2 - Marguerita" << endl <<
    " 3 - Portuguesa"<< endl <<
    " 4 - 3 Queijos" << endl <<
    " 5 - Vegetariana" << endl <<
    " 6 - Moda da casa" << endl << "\n" <<
    "Escolha a opção que deseja:" << endl << "\n";
    
    cin >> opcao;

    if(opcao==1){
        cout <<"Calabresa - Ingredientes? " << endl << "\n" <<
               " Calabresa, queijo,  bacon, cebola (opcional)" << endl << "\n";
    }else if(opcao==2){
        cout <<" Marguerita - Ingredientes: " << endl << "\n" <<
               " Queijo,  tomate, azeitona, manjerição fresco" << endl << "\n";
    }else if (opcao==3){
        cout <<" Portuguesa - Ingredientes: " << endl << "\n" <<
               " Ovo, tomate, azeitona preta, manjerição fresco" << endl << "\n";
    }else if (opcao==4){
        cout <<" 3 Queijos - Ingredientes: " << endl << "\n" <<
               " Mussarella, Provolone, Cheddar" << endl << "\n";
    }else if(opcao==5){
        cout <<" Vegetariana - Ingredientes: " << endl << "\n" <<
               " Brócolis, tomate, proteína de soja (Ovos opcional), ..." << endl << "\n";
    }else if(opcao==6){
        cout <<" Moda da casa - Ingredientes: " << endl << "\n" <<
               " Mussarella, Provolone, lombinho de porco, tomate, azeitona,..." << endl << "\n";
    }else{
        cout << "Opção inválida - reinicie a operação" << endl << "\n";
    }
}