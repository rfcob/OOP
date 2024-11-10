#include <iostream>
using namespace std;

//Prototipo função eh_bissexto
int eh_bissexto(int numero);

int main(){
    int ano;
    int resposta;

    cout << " Entre com o ano a ser testado e para parar digite 0 " << endl;
    cout <<  endl;

    while(true){
        cout << " Entre com o ano a ser testado: ";
        cin >> ano;

        if(ano==0){ 
            cout << "finalizado pelo usuário " << endl << "\n";
            break;
        }else{

        resposta=eh_bissexto(ano);
        }
        
        if(resposta==1){
            cout << " O ano é bissexto " << endl <<"\n";
        }else{
            cout << " O ano não é bissexto " << endl <<"\n";
        }
    }

    return 0;
}

int eh_bissexto(int numero){

    if(numero%4==0  && numero%100!=0){
        return true;
    }else if(numero%400==0){
        return true;
    }else{
        return false;
    }

}