#include <iostream>
using namespace std;

int main() {
    float soma, media;
    int count_alunos=0,numero_alunos,comprimento;

    cout << " Entre com o numero de alunos" << ": ";
    cin >> numero_alunos;
    
    cout <<"Entre com o número de notas a inserir" << ": ";
    cin >> comprimento;

    float notas[comprimento]; //meu array para notas

    while(count_alunos < numero_alunos){
        
        soma=0;
        media=0;
        
        for (int i =0; i < comprimento;i++){
            cout << "Entre com a nota " << i+1 << ": ";
            cin >> notas[i];
        }

        for (int i = 0; i <comprimento; i++){
            soma+=notas[i];
        }

        media=soma/comprimento;

        if (media <4.0){
            cout << "\n" << "Reprovado -  A media do é: " << media << endl << "\n";
        }else if(media>=4.0 && media <6.0){
            cout << "\n" << "Exame -  A media do  é: " << media << endl << "\n";
        }else{
            cout << "\n" << " Aprovado - A media do  é: " << media << endl << "\n";
        }

        count_alunos+=1;
    }
    
    
}