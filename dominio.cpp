#include <iostream>
#include <cctype>
#include <string>
#include "dominio.hpp"

using namespace std;

//////////////////////////////////////////////////////// Assento

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

//////////////////////////////////////////////////////// Bagagem

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

////////////////////////////////////////////////////// Cidade

// Implementar construtor de forma a apenas criar objetos com nome valido.

void Cidade::set_nome_cidade(string nome){
    this->nome_cidade = nome;
}

string Cidade::get_nome_cidade(){
    return this->nome_cidade;
}

bool Cidade::validar_nome_cidade(string nome){
    if (nome.length() < 1 || nome.length() > 10){
        return false;
    }
    return true;

}

void Cidade::cadastrar_nome_cidade(string nome){
    if(get_nome_cidade() != ""){
        cout << "Nome já cadastrado.\n";
    }else{
        if(validar_nome_cidade(nome)){
            set_nome_cidade(nome);
            cout << "Nome cadastrado.\n";
        }else{
            cout << "Nome inválido.\n";
        }
    }
}

void Cidade::alterar_nome_cidade(string nome){
    if(get_nome_cidade() == ""){
        cout << "Nome ainda não foi cadastrado.\n";
    }else{
        if(validar_nome_cidade(nome)){
            set_nome_cidade(nome);
            cout << "Nome alterado.\n";
        }else{
            cout << "Nome inválido.\n";
        }
    }
}

Cidade::Cidade(){
    this->set_nome_cidade("");
}

//////////////////////////////////////////////////////
