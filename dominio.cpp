#include "dominio.hpp"
#include <iostream>
#include <cctype>



Assento::Assento(char tipo){
    set_tipo_de_assento(tipo);
}

char Assento::get_tipo_de_assento(){
    return this->tipo_de_assento;
}

void Assento::set_tipo_de_assento(char tipo){
    tipo = toupper(tipo);
    std::cout << tipo << std::endl;
    if(tipo == 'D' || tipo == 'T'){
        this->tipo_de_assento = tipo;
    }else {
        std::cout << "Tipo Inválido!!!" << std::endl;
    }
}

////////////////////////////////////////////////////////

void Bagagem::set_numero_de_bagagem(int num) {
    if(num > 0 && num <= 4){
        this->numero_de_bagagem = num;
    }else {
        std::cout << "Numero de Bagagem Inválido!!" << std::endl;
    }
}

int Bagagem::get_numero_de_bagagem() {
    return this->numero_de_bagagem;
}

Bagagem::Bagagem(int num) {
    set_numero_de_bagagem(num);
}

//////////////////////////////////////////////////////









