#include <iostream>

//função sorte
int sorte() {
    
     return true; 
    
}


int main(){
//encontrando a função sorte
    //bool x;
    int x;

    //  possíveis chamadas:___________________________________________________

    //sorte(); //é uma chamada
    x=sorte();  //é uma chamada se defininrmos x como bool o retorno true será ok. como inteiro o retorno true, que é 1 em c++ é um inteiro, logo, x é true.
                  //se não definirmos x, não será uma chamada

    int y = sorte()/10; //é uma chamada

   // sorte = 5; //não é uma chamada


    //  Testando as chamadas:___________________________________________________


    //if(x==true){
    //if(sorte()==true){
    if(x==true){
        std::cout << "Chamanda" << std::endl;
    }



    //std::cout << y; // o retorno será zero, pois o true equivale a 1 no retorno e 1/10, inteiro será 0. 

    return 0;
}