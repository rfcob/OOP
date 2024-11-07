#include <iostream>
using namespace std;

int main(){
    char palavra_1[10], palavra_2[10];
    bool cond, teste;

    cout << " Entre com duas palavras com no máximo 10 caracteres: " << " " <<endl ;
    cin >> palavra_1;
    cin >> palavra_2;

    //cout << palavra_1;

    cond = true;
    for(int i; i < 10; i++){
        if(palavra_1[i]!=palavra_2[i]){
            cond=false;
            teste=cond;
            break;
        }else{
            teste=cond;
        }
    }
    if (teste==false){
        cout << " Palavras diferentes" << endl << "\n";
    }else{
        cout <<" Palavras iguais" << endl << "\n";
    }


}