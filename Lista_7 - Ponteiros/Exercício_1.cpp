//Pesquise como é possível implementar matrizes com ponteiros e faça uma implementação de exemplo.

#include <iostream>
using namespace std;
#include <iomanip>

// A alocação não é dinâmica e sim estática.

//função imprime - por referencia
int imprime_matriz(int *matriz[10]){
    
    cout << endl << "\n";

    for(int i = 0; i<10; i++){
        for(int j = 0;j<10;j++){
            cout << setw(2) <<matriz[i][j] << " ";
        }
    cout << endl;
    }
    cout << endl << "\n";
    return 0;
}


//funcação para criar a matriz - por referência
void cria_matriz(int *matriz[10]){

    for(int i = 0; i<10; i++){
        for(int j = 0;j<10;j++){
            cin >> matriz[i][j];
        }
    }
}


//função para multiplicar por um inteiro - por referência
void multiplica_inteiro(int *matriz[10], int *k){

    for(int i = 0; i<10; i++){
        for(int j = 0;j<10;j++){
            matriz[i][j]*= *k;
        }
    }

}


//main--------------------------------------------------------------------------
int main(){

    int num;
    int *k = &num;
   
    int matriz[10][10];
    int *mat[10];

    //cria o ponteiro que irá apontar para cada uma das 9 posições
    for(int i = 0; i<10; i++){
        for(int j = 0;j<10;j++){
            mat[i] = matriz[i];
        }
    }

    // imprimindo os 0's ou endereços
    /*
    for(int i = 0; i<10; i++){
        for(int j = 0;j<10;j++){
            cout << &mat[i][j]<<" ";
            //cout << mat[i][j]<<" ";
        }
    }
    */

    cout <<"Entre com os valores: " << endl;
    cria_matriz(mat);


    cout <<"\nA Matriz ";
    imprime_matriz(mat);

    cout <<"Entre com um valor para multiplicar a matriz: " ;
    cin >> num;
    multiplica_inteiro(mat, k);
    cout << endl;
    cout <<"A matriz multiplicada por " << num;
    imprime_matriz(mat);


    return 0;
}