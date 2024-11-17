#include <iostream>
using namespace std;


float calcula_media (float *nota_1,float *nota_2,float *nota_3, float *media_atual){

    float media_nova;

    media_nova = (*nota_1+ *nota_2+ *nota_3)/3;

    *media_atual = (*media_atual + media_nova)/2;

    return *media_atual;

}

int main(){

    float nota1, nota2, nota3, media_atual, media_final, num_aval;

    cout << " Entre a media atual "<< endl << "\n";
    cin >> media_atual;

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

    media_final = calcula_media(&nota1,&nota2,&nota3, &media_atual);

    cout << " A Media atual é: " << media_final << ", logo, a media final será " << endl << "\n";        
    cout << " A Media final é: " << media_final << endl << "\n";

    return 0;
}