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
public:
    Assento(char tipo);

};

class Bagagem{
private:
    int numero_de_bagagem;
    void set_numero_de_bagagem(int num);
    int get_numero_de_bagagem();
public:
    Bagagem(int num);
};

class Codigo_de_Banco{
private:
    std::string codigo;
    void set_codigo(std::string codigo);
    std::string get_codigo();

public:
    Codigo_de_Banco(std::string codigo);
};

class Codigo_de_Carona{
private:
    std::string codigo;
    void set_codigo(std::string codigo);
    std::string get_codigo();

public:
    Codigo_de_Carona(std::string codigo);
};

class Codigo_de_Reserva{
private:
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

#endif
