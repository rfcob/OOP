#include <iostream>
using namespace std;

int soma_numeros(int numero){

    bool eh_um=true;
    if(numero == 0){
        eh_um=false;
    }else{
        return numero + soma_numeros(numero - 1);
    }

    return 0;
}


int main(){

    int numero;

    cout << "Entre com um número inteiro: "<< endl;
    cin >> numero;

    cout << "A soma do número "<< numero << " até 1 é: " << soma_numeros(numero) << endl << "\n";

    return 0;
}