#include <iostream>
using namespace std;

int main(){

    float numero;

    cin >> numero;

    if (numero-int(numero)!=0){
        cout << "numero float";
    }else{
        cout << " Numero errado";
    }




    return 0;
}
