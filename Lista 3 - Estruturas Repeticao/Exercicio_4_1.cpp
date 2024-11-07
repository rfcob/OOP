//Fatorial usando for
#include <iostream>
using namespace std;

int main() {

    double num, fatorial=1;

    cout << "Entre com um número:" << " ";
    cin >> num;

    for(int i=1; i <= num; i++){
        fatorial*=i;
    }

    cout << "\n" << fatorial <<endl << "\n";

}
