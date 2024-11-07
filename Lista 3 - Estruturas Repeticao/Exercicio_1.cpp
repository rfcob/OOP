#include <iostream>
using namespace std;

int main() {

    float nota, soma=0, media;
    int i=0;

    while (i<5){
        cout << " Entre com a nota: " << i+1 << endl << "\n";
        cin >> nota;
        soma+=nota;
        i+=1;
    }

    media=soma/5;

    if (media <4.0){
        cout << "Reprovado -  A media do aluno é: " << media << endl << "\n";
    }else if(media>=4.0 && media <6.0){
        cout << "Exame -  A media do aluno é: " << media << endl << "\n";
    }else{
        cout << " Aprovado - A media do aluno é: " << media << endl << "\n";
    }

}