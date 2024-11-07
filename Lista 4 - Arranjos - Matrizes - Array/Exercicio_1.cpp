#include <iostream>
using namespace std;

int main() {
    float notas[5], soma=0, media, comprimento;

    cout <<"Entre com o número de notas a inserir" << ": ";
    cin >> comprimento;

    for (int i;i<comprimento;i++){
        cout << "Entre com a nota " <<i+1<< ": ";
        cin >> notas[i];
    }

    for (int i;i<comprimento;i++){
        soma+=notas[i];
    }

    media=soma/comprimento;

    //imprime o array
    //for (int i;i<5;i++){
    //     cout <<  notas[i] << " ";
    //}

    if (media <4.0){
        cout << "\n" << "Reprovado -  A media do é: " << media << endl << "\n";
    }else if(media>=4.0 && media <6.0){
        cout << "\n" << "Exame -  A media do  é: " << media << endl << "\n";
    }else{
        cout << "\n" << " Aprovado - A media do  é: " << media << endl << "\n";
    }


    //cout << "\n" << " A media  é:" << " " << media << endl << "\n";

}