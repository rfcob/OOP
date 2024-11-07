#include <iostream>
#include <string>
using namespace std;


struct estudantes{
    string nome;
    int matricula;
    float nota[4];
};

int main() {

    float soma=0, media, nota;
    bool cond;
    int j;
    estudantes aluno1;

    cout << " Entre com o nome do estudante: ";
    cin >> aluno1.nome;
    
    cout << " Entre com o número de matrícula: ";
    cin >> aluno1.matricula;

    cout << " Entre com as quatro notas: ";
    for (int i=0; i<4; i++){

        j=0;
        cond=true;
        while(cond){
            cout << " Nota: " << i+1 << ": ";
            cin >> nota;
            if (nota>=0 && nota <=10){
                cond=false;
            }else{ 
                cout << "Nota inválida. Insira valor válido: " << endl;
            }
        }

        aluno1.nota[i]=nota;
        soma+=aluno1.nota[i];

    }

    media=soma/4;

    if(media<4.0){
        cout << " Reprovado(a). "<< " O aluno(a) "<< aluno1.nome <<" Matrícula: " << aluno1.matricula << " Não atingiu a média para aprovação." << " Media final: "<< media << endl <<"\n";
    }else if(media >=4.0 && media<6.0){
        cout << " Exame. "  << " O aluno(a) "<< aluno1.nome <<" Matrícula: " << aluno1.matricula <<  " Media final: "<< media << endl <<"\n";
    }else{
        cout << " O aluno(a) "<< aluno1.nome <<" Matrícula: " << aluno1.matricula << " está aprovado(a). " << " Media final: "<< media << endl <<"\n";
    }

    return 0;

}        
        
        
        
