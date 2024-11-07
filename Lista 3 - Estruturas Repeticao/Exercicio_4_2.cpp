//Usando while (pŕe-teste) - while "comum"
#include <iostream>
using namespace std;

int main(){

    double num, fatorial=1;
    int i=1;

    cout << "Entre com um número:" << " ";
    cin >> num;

    while (i<=num){
        fatorial*=i;
        i+=1;
    }

    


}