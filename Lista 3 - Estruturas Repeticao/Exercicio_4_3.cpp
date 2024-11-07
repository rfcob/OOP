//Fatorial (pós-teste) - (do-while)
#include <iostream>
using namespace std;

int main(){
    double num, fatorial=1;
    int i=1;

    cout << "Entre com um número:" << " ";
    cin >> num;

    do{
        fatorial*=num;
        num-=1;
    }while(i<=num);

    cout << "\n" << fatorial << endl << "\n";

}