#include <iostream>
using namespace std;

int main() {

    float nota, soma, media;
    char nome[10];
    int i, j=0;

    while(j<5){
        soma=0;
        cout << " Entre com nome do aluno" << ": ";
        cin >> nome;
        i=0;

            while (i<5){
                cout << " Entre com a nota: " << i+1 << ": ";
                cin >> nota;
                soma+=nota;
                i+=1;
            }

            media=soma/5;

            if (media <4.0){
                cout << "\n" << "Reprovado -  A media do " << nome << " é: " << media << endl << "\n";
            }else if(media>=4.0 && media <6.0){
                cout << "\n" << "Exame -  A media do " << nome << " é: " << media << endl << "\n";
            }else{
                cout << "\n" << " Aprovado - A media do " << nome << " é: " << media << endl << "\n";
            }

        j+=1;
    }

}