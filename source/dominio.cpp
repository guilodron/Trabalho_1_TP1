#include <iostream>
#include <cctype>
#include <string>
#include <ctype.h>
#include <regex>
#include <stdlib.h>
#include <exception>
#include "../include/dominio.hpp"

using namespace std;

//////////////////////////////////////////////////////// Assento

Assento::Assento(char tipo){
    set_tipo_de_assento(tipo);
}

char Assento::get_tipo_de_assento(){
    return this->tipo_de_assento;
}

void Assento::set_tipo_de_assento(char tipo){
    valida(tipo);
    this->tipo_de_assento = tipo;
}

void Assento::valida(char tipo){
    tipo = toupper(tipo);
    if(tipo != 'D' && tipo != 'T'){
        throw std::invalid_argument("Tipo de Assento Invalido");
    }
}
//////////////////////////////////////////////////////// Bagagem

void Bagagem::set_numero_de_bagagem(int num) {
    valida(num);
    this->numero_de_bagagem = num;

}

void Bagagem::valida(int num){
    if(num <= 0 || num > 4){
        throw std::invalid_argument("Numero de Bagagem Inválido!!");
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
    valida(codigo);
    this->codigo = codigo;
}

void Codigo_de_Banco::valida(std::string codigo){
    std::regex padrao("[0-9]+");
    if(!std::regex_match(codigo, padrao) || codigo.length() != 3){
        throw invalid_argument("Codigo de Banco Inválido");
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
    valida(codigo);
    this->codigo = codigo;
}

void Codigo_de_Carona::valida(std::string codigo){
    std::regex padrao("[0-9]+");
    if(!std::regex_match(codigo, padrao) || codigo.length() != 4){
        throw invalid_argument("Codigo de Carona Inválido");
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
    valida(codigo);
    this->codigo = codigo;
}

void Codigo_de_Reserva::valida(std::string codigo){
    std::regex padrao("[0-9]+");
    if(!std::regex_match(codigo, padrao) || codigo.length() != 5){
        throw invalid_argument("Codigo de Reserva Inválido");
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

////////////////////////////////////////////////////// CPF


void Cpf::valida_cpf(std::string cpf){
    bool valido{true};
    int cpf_numerico[11]{0};
    if(cpf.length() != 14 || cpf[3] != '.' || cpf[7] != '.' || cpf[11] != '-'){
        valido = false;
    }
    if(valido){
        for(int i{0}, j{0}; i < 14; i++, j++) {
            if(i == 3 || i == 7 || i == 11)
                i++;
            cpf_numerico[j] = (int)cpf[i] - 48;
        }
        int soma{0};
        for(int i{0}, j{10}; i < 9; i++, j--){
            soma += cpf_numerico[i]*j;
        }
        if((soma*10)%11 != cpf_numerico[9]){
            valido = false;
        }
        soma = 0;
        for(int i{0}, j{11}; i < 10; i++, j--){
            soma += cpf_numerico[i]*j;
        }
        if((soma*10)%11 != cpf_numerico[10]){
            valido = false;
        }
    }
    if(!valido){
        throw invalid_argument("CPF Inválido!");
    };
}


void Cpf::set_cpf(std::string cpf){
    valida_cpf(cpf);
    this->cpf = cpf;

}

std::string Cpf::get_cpf(){
    return this->cpf;
}

Cpf::Cpf(std::string cpf){
    set_cpf(cpf);
}

//////////////////////////////////////////////////////Data

void Data::set_data(std::string data){
    valida_data(data);
    this->data = data;
}

std::string Data::get_data(){
    return this->data;
}

void Data::valida_data(std::string data){
    bool valido = true;
    regex padrao("[0-9, /]+");
    if(data.length() != 10 || data[2] != '/' || data[5] != '/' || !std::regex_match(data, padrao)){
        valido = false;
    }
    if(valido){
        if(!valida_ano(data) || !valida_mes(data) || !valida_dia(data))
            valido = false;
    }

    if(!valido){
        throw invalid_argument("Data Inválida!!");
    }
}

bool Data::ano_bissexto(std::string data){
    int ano = stoi(data.substr(6, 4));
    if (ano%4 == 0){
        if(ano % 100 == 0){
            if (ano % 400 == 0){
                return true;
            }else{
                return false;
            }
        }else{
            return true;
        }
    }else {
        return false;
    }
}

bool Data::valida_ano(std::string data){
    int ano = stoi(data.substr(6, 4));
    //cout << "ano na funcao" <<ano;
    if (ano >= 2000 && ano < 2099){
        return true;
    }else {
        return false;
    }
}

bool Data::valida_mes(std::string data){
    if(stoi(data.substr(3, 2)) < 13 && stoi(data.substr(3, 2)) > 0){
        return true;
    }else
        return false;
}

bool Data::valida_dia(std::string data){
    int mes = stoi(data.substr(3,2));
    int dia = stoi(data.substr(0,2));
    if(mes < 8) {
        if(mes == 2){
            if(ano_bissexto(data)){
                if(dia > 29 || dia < 0){
                    return false;
                }
            }else{
                if(dia >28 || dia < 0){
                    return false;
                }
            }
        }
        else if(mes%2 == 0){
            if(dia > 30 || dia < 0)
                    return false;
        }else
            if(dia > 31 || dia < 0)
                return false;
    }else{
        if(mes%2 == 0){
            if(dia > 31 || dia < 0)
                return false;
        }else
            if(dia > 30 || dia < 0)
                return false;
    }
    return true;
}

Data::Data(std::string data){
    set_data(data);
}

//////////////////////////////////////////////////////Duracao

int Duracao::get_duracao(){
    return this->duracao;
}

void Duracao::set_duracao(int duracao){
    valida_duracao(duracao);
    this->duracao = duracao;
}

void Duracao::valida_duracao(int duracao){
    if(duracao < 1 || duracao > 48){
        throw invalid_argument("Duração Inválida!!");
    }
}

Duracao::Duracao(int duracao){
    set_duracao(duracao);
}

//////////////////////////////////////////////////////Estado

void Estado::set_estado(std::string estado){
    valida_estado(estado);
    this->estado = estado;
}

void Estado::valida_estado(std::string estado){
    string estados("AC-AL-AP-AM-BA-CE-DF-ES-GO-MA-MT-MS-MG-PA-PB-PR-PE-PI-RJ-RN-RS-RO-RR-SC-SP-SE-TO");
    if(estados.find(estado)!= string::npos && estado.find('-') == string::npos && estado.length() == 2){
        this->estado = estado;
    }else{
        throw invalid_argument("Sigla de Estado Inválida!!!");
    }
}

std::string Estado::get_estado(){
    return this->estado;
}

Estado::Estado(std::string estado){
    set_estado(estado);
}

//////////////////////////////////////////////////////Nome

void Nome::valida_nome(std::string nome){
    bool possui_alfabetico{false};
    if(nome.length() >= 1 && nome.length() <= 20 && nome.find("  ") == string::npos && nome[0] != '.'){
        for(size_t i{1}; i < nome.length(); i++){
            if(isalpha(nome[i])){
                possui_alfabetico = true;
            }
            else if(nome[i] == '.'){
                if(!isalpha(nome[i-1]))
                    throw invalid_argument("Nome Inválido!");
            }
        }
    }else{
        throw invalid_argument("Nome Inválido!");
    }
    if(!possui_alfabetico){
        throw invalid_argument("Nome Inválido!");
    }
}

void Nome::set_nome(std::string nome){
    valida_nome(nome);
    this->nome = nome;
}

std::string Nome::get_nome(){
    return this->nome;
}

Nome::Nome(std::string nome){
    set_nome(nome);
}

//////////////////////////////////////////////////////Numero de Agencia

void Numero_de_Agencia::valida_numero_de_agencia(std::string numero_de_agencia){
    int soma{0};
    if(numero_de_agencia.length() == 6 && numero_de_agencia[4] == '-'){
        for(int i{0}; i < 4 ;i++){
            if(i%2 != 0 ){
                int duplicado = int(numero_de_agencia[i] - 48)*2;
                if(duplicado >= 10){
                    soma += duplicado-9;
                }else{
                    soma += duplicado;
                }
            }else{
                soma +=int(numero_de_agencia[i] - 48);
            }

        }
        if((soma*9)%10 != numero_de_agencia[5] - 48){
            throw std::invalid_argument("Número De Agência Inválido!!");
        }
    }

}

void Numero_de_Agencia::set_numero_de_agencia(std::string numero_de_agencia){
    valida_numero_de_agencia(numero_de_agencia);
    this->numero_de_agencia = numero_de_agencia;
}

std::string Numero_de_Agencia::get_numero_de_agencia(){
    return this->numero_de_agencia;
}

Numero_de_Agencia::Numero_de_Agencia(std::string numero_de_agencia){
    set_numero_de_agencia(numero_de_agencia);
}
//Teste.
/*int main(){
    string c;
    getline(cin, c);
    Cidade cidade1;
    cidade1.cadastrar_nome_cidade(c);

    return 0;
}*/
