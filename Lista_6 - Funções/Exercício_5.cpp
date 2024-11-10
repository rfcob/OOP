#include <iostream>
using namespace std;

//prototipo number_test

bool number_test(int numero);

//prototipo is_primo
bool is_primo(int numero, int i);



int main(){
    int resposta, numero;

    cout << "Entre com o inteiro a ser testado: ";
    cin >> numero;

    resposta = number_test(numero);

    if(resposta==1){
        cout <<" É Primo";
    }else{
        cout << " Não é primo";
    }


    return 0;

}

//Função para verificar a entrada. Numero menor que 1 não são inteiros e primos são positivos.
bool number_test(int numero){

    if(numero <= 1){
        return false;
    }else{
        return is_primo(numero, numero-1);
    }

}

/*Função recursiva para calcular se o número é primo ou não. Condição de parada i=2. Se a divisão por qualquer número
no intervalo entre 2 e o numero tiver um resto zero, não é primo e recebe falso. Se não, decrementa o divisor (i) e vai até a condição de parada.*/
bool is_primo(int numero, int i){

    if( i < 2){
        return true;
    }else if(numero%i == 0){
        return false;
    }else{
        is_primo(numero, i-1);
    }
    
}
