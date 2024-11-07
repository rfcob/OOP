#include <iostream>
using namespace std;

int main(){
    int mat[5][4], transposta[4][5];

    //entrando a matriz
    for(int i = 0; i<5; i++){
        for(int j = 0;j<4;j++){
            cin >> mat[i][j];
        }
    }
    cout<<endl;
    //imprimindo a matriz
    cout<<" Matriz de 5x4"<< endl << "\n";
    
    for(int i = 0;i<5;i++){
        for(int j = 0;j<4;j++){
            cout << mat[i][j] << " ";
        }
    cout << endl;
    }
    cout<<endl;

    //transposta da matriz
    for(int i = 0; i<5; i++){
        for(int j = 0;j<4;j++){
            transposta[j][i]=mat[i][j];
        }
    }

    //imprimindo a matriz transposta
    cout <<" Matriz Transposta" << endl << "\n";

    for(int i = 0;i<4;i++){
        for(int j = 0;j<5;j++){
            cout << transposta[i][j] << " ";
        }
    cout << endl;
    }
    cout <<endl;

return 0;
}


