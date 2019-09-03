#include <iostream>
#include <cctype>
#include <string>
#include <ctype.h>
#include <regex>
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

////////////////////////////////////////////////////// Codigo de Banco

void Codigo_de_Banco::set_codigo(std::string codigo) {
    std::regex padrao("[0-9]+");
    if(std::regex_match(codigo, padrao) && codigo.length() == 3){
        this->codigo = codigo;
    } else {
        std::cout << "Codigo de Banco inválido!!!" << std::endl;
    }
}

std::string Codigo_de_Banco::get_codigo() {
    return this->codigo;
}

Codigo_de_Banco::Codigo_de_Banco(std::string codigo) {
    set_codigo(codigo);
}

////////////////////////////////////////////////////// Codigo de Carona

void Codigo_de_Carona::set_codigo(std::string codigo) {
    std::regex padrao("[0-9]+");
    if(std::regex_match(codigo, padrao) && codigo.length() == 4){
        this->codigo = codigo;
    } else {
        std::cout << "Codigo de Carona inválido!!!" << std::endl;
    }
}

std::string Codigo_de_Carona::get_codigo() {
    return this->codigo;
}

Codigo_de_Carona::Codigo_de_Carona(std::string codigo) {
    set_codigo(codigo);
}

////////////////////////////////////////////////////// Codigo de Reserva

void Codigo_de_Reserva::set_codigo(std::string codigo) {
    std::regex padrao("[0-9]+");
    if(std::regex_match(codigo, padrao) && codigo.length() == 5){
        this->codigo = codigo;
    } else {
        std::cout << "Codigo de Reserva inválido!!!" << std::endl;
    }
}

std::string Codigo_de_Reserva::get_codigo() {
    return this->codigo;
}

Codigo_de_Reserva::Codigo_de_Reserva(std::string codigo) {
    set_codigo(codigo);
}

////////////////////////////////////////////////////// Cidade

void Cidade::set_nome_cidade(std::string nome){
    this->nome_cidade = nome;
}

string Cidade::get_nome_cidade(){
    return this->nome_cidade;
}

bool Cidade::validar_nome_cidade(string nome){
    // Verifica tamanho.
    if (nome.length() < 1 || nome.length() > 10){
        return false;
    }
    // Verifica se tem apenas caracteres validos, sem espaços seguidos e sem letra antes de ponto.
    for(int i = 0; i < nome.length(); i++){
        if(!(isalpha(nome[i]) || nome[i] == ' ' || nome[i] == '.')||(i && ((nome[i] == ' ' && nome[i-1] == ' ')||(nome[i] == '.' && !isalpha(nome[i]))))){
            return false;
        }
    }
    // Verifica se ha ao menos uma letra.
    for(int i = 0; i < nome.length(); i++){
        if(isalpha(nome[i])){
            return true;
        }
    }
    return false;
}

void Cidade::cadastrar_nome_cidade(std::string nome){
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

void Cidade::alterar_nome_cidade(std::string nome){
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

//Teste.
int main(){
    string c;
    getline(cin, c);
    Cidade cidade1;
    cidade1.cadastrar_nome_cidade(c);
    return 0;
}