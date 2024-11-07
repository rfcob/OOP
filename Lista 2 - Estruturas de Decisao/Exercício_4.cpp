#include <iostream>
using namespace std;

int main(){

    int nun_1, nun_2, nun_3;

    cout << " Entre com três números inteiros: " << endl << "\n";
    cin >> nun_1 >> nun_2 >> nun_3;

    //nun_1 menor
    if ((nun_1 < nun_2) && (nun_1 < nun_3)){
        if (nun_2 < nun_3){
            cout << nun_1 << " " << nun_2 << " " <<  nun_3;
        }else{
            cout << nun_1 << " " << nun_3 << " " <<  nun_2;
        }
    }
    //nun_2 menor
    if ((nun_2 < nun_1) && (nun_2 < nun_3)){
        if (nun_1 < nun_3){
            cout << nun_2 << " " << nun_1 << " " << nun_3;
        }else{
            cout << nun_2 << " " << nun_3 << " " << nun_1;
        }
    }
    //nun_3 menor
    if ((nun_3 < nun_1) && (nun_3 < nun_2)){
        if (nun_1 < nun_2){
            cout << nun_3 << " " << nun_1 << " " << nun_2;
        }else{
            cout << nun_3 << " " << nun_2 << " " << nun_1;
        }
    }

}