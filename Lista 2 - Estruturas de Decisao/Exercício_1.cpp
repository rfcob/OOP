#include<iostream>
using namespace std;

int main() {
    float nota1, nota2, media;

    cout <<" Entre com a nota 1 e na sequência a nota 2: " << endl;
    cin >> nota1 >> nota2;

    media = (nota1+nota2)/2;

    if(media>=6.0){
        cout<<" Aluno aprovado." << " " << "Media igual a:  " << media << endl;
    }else {
        cout << "Aluno Reprovado." << " " << " Media igual a: " << media << endl;
    }
}