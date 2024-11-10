#include <iostream>
#include <string>
using namespace std;





/* Uma struct diferentemente de um array/matrizes além de não ser homogêneo há algumas caracteristicas "praticas" distintas.
podemos acessar menbros das estrutururas ou elementos dos vetores. As saidas devem indicar claramente que estamos interessados nos valores. 
Quando tentamos acessar a estrutura como um todo, para vetores e matrizes, temos o retorno dos endereçoes de memŕoria dos primeiros elementos, 
já para as structs, o compilador dá erro.*/





struct demonstracao{
    int inteiro = 2;
    float real=2.3;
    char caracter[1];
    int matriz[100][100];
};


int main(){


    demonstracao demo;
    int vec_demo[10];
    int vec_demo2[]={1,2,3,4,6};
    char a;





    //(1) O nome é um endereço:______________________________________________________________________




    // Imprimindo diretamente o vetor, retorna o endereço. 
    cout << "para o demo1 o endereço é " << vec_demo <<" ou para o demo2 o endereço é: " << vec_demo2 <<endl;
    cout<<endl;
    // O nome é um endereço. O compilador dá erro se chamar só o nome com cout..
    //cout << "Endereço da estrutura: " << demonstracao << endl; 
    //cout<<endl;


    //(2) Agrupam váriaveis do mesmo tipo:_________________________________________________________________________




     int vetor_misto[]={1,2,3, a ,4}; // ele aceita e não apresenta erro, mas ao imprimir vemos que vetores devem ser inteiros

    for (int i=0; i<5;i++){
        cout << vetor_misto[i];
    }

    cout<<endl;

    for (int j=0; j<5;j++){
        cout << vec_demo2[j];
    }

    cout<<endl;




    //(3) Agrupam elementos diferentes __________________________________________________________________




    //    struct demonstracao{
    //        int inteiro = 2;
    //        float real=2.3;
    //        char caracter[1];
    //        int matriz[100][100];
    //    };
    


    
    //Teste de acesso de itens (vetores) e menbros (structs)___________________________________________



    
    // Essa linha mostra que podemos acessar o elemento de um struct
    cout << demo.inteiro << endl;
    cout<<endl;

    // Essa linha mostra que podemos acessar o elemento de um de um array
    cout << vec_demo2[2] << endl;
    cout<<endl;


    // Imprimindo diretamente o vetor, retorna o endereço. 
    cout << "para o demo1 o endereço é " << vec_demo <<" ou para o demo2 o endereço é: " << vec_demo2 <<endl;
    cout<<endl;

    
    // O nome é um endereço. O compilador dá erro se chamar só o nome com cout..
    cout << "Endereço da estrutura demo: " << &demo << endl; 
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


    return 0;
}