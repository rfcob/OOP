#include <iostream>


//função calcula tamanho vetor recebe um vetor de inteiros
int tamanho(int vetor[]){

    int i=0;
    int tamanho=0;
    while (true){
        if (vetor[i]=='\0'){
                break;
        }else{
            tamanho+=1;
        }
        i++;
    }

    return tamanho;

}

int main(){
    //int vetor[10];
    int vetor[]={1,2,3,4,5,6,7,8,9};
    int tam;

    tam = sizeof(vetor)/sizeof(int);
    
    //Usando a função sizeof
    std::cout <<" Pela função sizeof "<< tam << std::endl << "\n";


   
    //imprimindo o tamanho calculado
    std::cout << " O tamanho do vetor calculado é: " << tamanho(vetor) << std::endl << "\n";

    std::cout << " De ambas as formas é preciso saber o tipo de dados armazenados no vetor de antemão. "<< std::endl;
    std::cout << " Mas o segundo método depende também do vetor ser preenchido "<< std::endl;
    std::cout << " Não calcula o espaço reservado para o vetor. "<< std::endl << "\n";


    return 0;

}