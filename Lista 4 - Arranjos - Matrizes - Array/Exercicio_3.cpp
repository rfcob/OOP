#include <iostream>
using namespace std;


int main() {
    int tamanho=10, vogais=0, consoante=0;
    bool cond;
    char vog[] = "aeiouAEIOUãÂàÀéÉẽẼíÍóÓôÔõÕÚú";
    char palavra[tamanho];

    //por quê é contado duas vezes quando há acento??

    cin >> palavra;

    for(int i=0; i<tamanho; i++){
        cond=false;
        for(int j=0; j<48; j++){
            if(palavra[i]==vog[j]){
                //cout<<vog[j];
                vogais+=1;
                cond=true;
                break;
            }
        }
        if ((cond==false) && (palavra[i]!= '\0')){
            consoante+=1;
        }
    
    }

   // cout << palavra<<"\n" << vogais << " " << consoante << endl <<"\n";
   cout << " O número de vogais: " << vogais << endl;
   cout << " O número de consoantes: " << consoante << endl << "\n";

return 0;

}
