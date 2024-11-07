#include <iostream>
#include <string>
using namespace std;


struct demonstracao{
    int inteiro = 2;
    float real=2.3;
    char caracter[1];
};

int main(){

    demonstracao demo;
    int vec_demo[10];
    int vec_demo2[]={1,2,3,4,5};



    // Essa linha mostra que podemos acessar o elemento de um struct
    cout << demo.inteiro << endl;
    cout<<endl;


    // Imprimindo diretamente o vetor, retorna o endereço. 
    cout << "para o demo1 o endereço é " << vec_demo <<" ou para o demo2 o endereço é: " << vec_demo2 <<endl;
    cout<<endl;

    
    // O nome é um endereço. O compilador dá erro se chamar só o nome com cout..
    cout << "Endereço da estrutura: " <<&demo << endl; 
    cout<<endl;



    //Para os vetores
    cout << "endereço Vec_demo " << vec_demo2 <<endl <<"\n";
    cout<<endl;
    cout << "endereço primeiro elemento " << &vec_demo2[0]<<endl;
    cout<<endl;


    //para a estrutura e seu membros
    cout << &demo << endl;
    cout<<endl;
    cout << &demo.real << endl;
    cout<<endl;
    cout << &demo.inteiro << endl;

}