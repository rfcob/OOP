#ifndef CADASTRO_VEICULOS_HPP
#define CADASTRO_VEICULOS_HPP

#include <string>
using namespace std;

class cadastro_veiculos {
private:
    string marca, modelo, combustivel;
    float valor, km_rodados;
    static int num_carros;

public:
    void init(string marca, string modelo, string combustivel, float valor, float km_rodados);
    //static void count_carros();
    static int num_count_carros();
    void count_carros();
    string get_marca();
    string get_modelo();
    string get_combustivel();
    float get_valor();
    float get_km_rodados();
};

int cadastro_veiculos::num_carros = 0;

#endif
