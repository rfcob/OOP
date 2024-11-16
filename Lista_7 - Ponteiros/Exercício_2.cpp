#include <iostream>
using namespace std;


float calcula_media (float *nota_1,float *nota_2,float *nota_3){

    float media;

    media=(*nota_1+ *nota_2+ *nota_3)/3;

    return media;

}

int main(){

    float nota1, nota2, nota3, media, num_aval;

    cout << " Entre com 3 avaliações: "<< endl << "\n";

    cout << " Entre com a primeira nota: ";
    cin >> nota1;
    cout <<endl;

    cout << " Entre com a segund nota: ";
    cin >> nota2;
    cout <<endl;

    cout << " Entre com a terceira nota: ";
    cin >> nota3;
    cout <<endl;

    media = calcula_media(&nota1,&nota2,&nota3);

    cout << " A Media é: " << media << endl << "\n";

    return 0;
}