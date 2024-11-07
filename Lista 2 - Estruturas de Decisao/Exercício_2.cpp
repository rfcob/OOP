#include<iostream>
using namespace std;

int main(){
    float nota1, nota2, media;

    cout <<" Entre com a nota 1 e na sequência a nota 2: " << endl;
    cin >> nota1 >> nota2;

    media= (nota1+nota2)/2;

    if (media < 4.0){
        cout<<" Reprovado - " << "media igual a " << media << endl;
    }else if(media >=4.0 && media < 6.0){
        cout<<" Exame - " << "media igual a " << media << endl;
    }else{
        cout<<" Aprovado - " << "media igual a " << media << endl;
    }    

}