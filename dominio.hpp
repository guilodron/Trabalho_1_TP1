#ifndef DOMINIO_HPP
#define DOMINIO_HPP

#include <string>

using namespace std;

//////////////////////////////////////////
//  Dominio Assento: recebe um char     //
//  indicando o tipo de assento, sendo  //
//  T = traseiro ou D = dianteiro       //
//////////////////////////////////////////

class Assento{
private:
    void set_tipo_de_assento(char tipo);
    char get_tipo_de_assento();
    char tipo_de_assento;
    void valida(char tipo);
public:
    Assento(char tipo);

};

class Bagagem{
private:
    int numero_de_bagagem;
    void set_numero_de_bagagem(int num);
    void valida(int num);
    int get_numero_de_bagagem();
public:
    Bagagem(int num);
};

class Codigo_de_Banco{
private:
    void valida(std::string codigo);
    std::string codigo;
    void set_codigo(std::string codigo);
    std::string get_codigo();

public:
    Codigo_de_Banco(std::string codigo);
};

class Codigo_de_Carona{
private:
    void valida(std::string codigo);
    std::string codigo;
    void set_codigo(std::string codigo);
    std::string get_codigo();

public:
    Codigo_de_Carona(std::string codigo);
};

class Codigo_de_Reserva{
private:
    void valida(std::string codigo);
    std::string codigo;
    void set_codigo(std::string codigo);
    std::string get_codigo();

public:
    Codigo_de_Reserva(std::string codigo);
};


class Cidade{
private:
    string nome_cidade;
    void set_nome_cidade(string nome);
    bool validar_nome_cidade(string nome);
public:
    Cidade();
    string get_nome_cidade();
    void cadastrar_nome_cidade(string nome);
    void alterar_nome_cidade(string nome);
};

class Cpf{
private:
    std::string cpf;
    void valida_cpf(std::string cpf);
    void set_cpf(std::string cpf);
    std::string get_cpf();
public:
    Cpf(std::string cpf);
};

class Data{
private:
    std::string data;
    void set_data(std::string data);
    void valida_data(std::string data);
    std::string get_data();
    bool valida_dia(std::string data);
    bool valida_mes(std::string data);
    bool valida_ano(std::string data);
    bool ano_bissexto(std::string data);
public:

    Data(std::string data);

};

class Duracao{
private:
    int duracao;
    void set_duracao(int duracao);
    void valida_duracao(int duracao);
    int get_duracao();
public:
    Duracao(int duracao);
};

class Estado{
private:
    std::string estado;
    void set_estado(std::string estado);
    void valida_estado(std::string estado);
public:
    std::string get_estado();
    Estado(std::string estado);
};

#endif
