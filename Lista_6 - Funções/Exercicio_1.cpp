#include <iostream>


//função calcula tamanho vetor recebe um vetor de caracteres
int tamanho_char(char vetor[]){

    int i=0;
    int tamanho_char=0;
    while (true){
        if (vetor[i]=='\0'){
                break;
        }else{
            tamanho_char+=1;
        }
        i++;
    }

    return tamanho_char;
}

//________________________________________________________

//função calculalaria o  tamanho vetor recebe um vetor de  Inteiros (NÂO FUNCIONA!!!!!)
int tamanho_int(int vetor[]){

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

//________________________________________________________

int main(){
    //int vetor[10];
    int vetor_int[]={1,2,0,3,4,5,6,7,8,9,10};
    char vetor_char[]={'a','b','c','d'};
    int tam_int, tam_char;

    //--MÉTODO 1----------------------------------------------------

    tam_int = sizeof(vetor_int)/sizeof(int);
    tam_char = sizeof(vetor_char)/sizeof(char);
    
    //Usando a função sizeof 
    std::cout <<" Pela função sizeof,  o vetor de inteiros possui tamanho de: "<< tam_int << std::endl << "\n";

    std::cout <<" Pela função sizeof,  o vetor de char possui tamanho de: "<< tam_char << std::endl << "\n";

    //--MÉTODO 2----------------------------------------------------
   
    //imprimindo o tamanho calculado para o de inteiros
    std::cout << " O tamanho do vetor de inteiros calculado é: " << tamanho_int(vetor_int) << std::endl << "\n";

    //imprimindo o tamanho calculado para o de characteres
    std::cout << " O tamanho do vetor de char calculado é: " << tamanho_char(vetor_char) << std::endl << "\n";



    /* É possível calcular mas com ressalvas:
    
    -  De ambas as formas é preciso saber o tipo de dados armazenados no vetor de antemão.
    -  Mas o segundo método funciona para o tipo char uma vez que '\0' indica o final do array de caracteres.
    -  Se tentarmos usar o mesmo método para vetor de inteiros, não calcula, pois o vetor não é finalizado por nenhum valor específico.
    -  Para usar o segundo métodos precisamos conhecer o último elemento do array se for de inteiros.
    -  Uma forma é usar um contador ao criar o vetor para guardar o tamanho, mas se o vetor for dado sem essas informações, o método 2 exige
       que conheçamos o "finalizador" do vetor. */

    return 0;

}