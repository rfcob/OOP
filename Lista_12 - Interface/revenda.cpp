#include "cadastro_veiculos.hpp"


void cadastro_veiculos::init(string marca, string modelo, string combustivel, float valor, float km_rodados){
    this->marca = marca;
    this->modelo = modelo;
    this->combustivel = combustivel;
    this->valor = valor;
    this->km_rodados = km_rodados;
    this->num_carros++;
}

void cadastro_veiculos::count_carros() {
    num_carros++;
}

int cadastro_veiculos::num_count_carros() {
    return num_carros;
}

string cadastro_veiculos::get_marca(){ 
    return marca; 
}
string cadastro_veiculos::get_modelo(){ 
    return modelo; 
}
string cadastro_veiculos::get_combustivel(){
    return combustivel; 
}
float cadastro_veiculos::get_valor(){ 
    return valor;
}
float cadastro_veiculos::get_km_rodados(){
    return km_rodados; 
}

