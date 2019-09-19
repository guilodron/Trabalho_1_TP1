#ifndef DOMINIO_HPP
#define DOMINIO_HPP

#include <string>

/// @brief Dom�nio Assento
///
/// Representa o assento e pode receber 2 valores
/// 'D' ou 'T'
class Assento{
private:
	char tipo_de_assento;
	void set_tipo_de_assento(char tipo);    
    void valida(char tipo);
public:
	char get_tipo_de_assento();
    Assento(char tipo);
};

/// @brief Dominio Bagagem
///
/// Representa a bagagem e pode receber valores entre
/// 1 e 4
class Bagagem{
private:
	const int max_bagagem = 4;
	const int min_bagagem = 1;
    int numero_de_bagagem;
    void set_numero_de_bagagem(int num);
    void valida(int num);
public:
    Bagagem(int num);
    int get_numero_de_bagagem();
};

class Codigo_de_Banco{
private:
	const int tamanho = 3;
    void valida(std::string codigo);
    std::string codigo;
    void set_codigo(std::string codigo);
    std::string get_codigo();

public:
    Codigo_de_Banco(std::string codigo);
};

class Codigo_de_Carona{
private:
	const int tamanho = 4;
    void valida(std::string codigo);
    std::string codigo;
    void set_codigo(std::string codigo);
    std::string get_codigo();

public:
    Codigo_de_Carona(std::string codigo);
};

class Codigo_de_Reserva{
private:
	const int tamanho = 5;
    void valida(std::string codigo);
    std::string codigo;
    void set_codigo(std::string codigo);
    std::string get_codigo();

public:
    Codigo_de_Reserva(std::string codigo);
};


class Cidade{
private:
    std::string nome_cidade;
    void set_nome_cidade(std::string nome);
    void valida_nome_cidade(std::string nome);
public:
    Cidade(std::string nome);
    std::string get_nome_cidade();
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
	const int tamanho = 10;
    std::string data;
    void set_data(std::string data);
    void valida_data(std::string data);
    bool valida_dia(std::string data);
    bool valida_mes(std::string data);
    bool valida_ano(std::string data);
    bool ano_bissexto(std::string data);
public:

    Data(std::string data);
	std::string get_data();

};

class Duracao{
private:
	const int duracao_max = 48;
	const int duracao_min = 1;
    int duracao;
    void set_duracao(int duracao);
    void valida_duracao(int duracao);
public:
    Duracao(int duracao);
	int get_duracao();
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

class Email{
private:
    std::string email;
	void valida_email(std::string email);
    void set_email(std::string email);
public:
    std::string get_email();
    Email(std::string email);
};

class Nome{
private:
	const int tamanho_max = 20;
	const int tamanho_min = 1;
    std::string nome;
    void valida_nome(std::string nome);
    void set_nome(std::string nome);
public:
    std::string get_nome();
    Nome(std::string nome);
};

class Numero_de_Agencia{
private:
	const int tamanho = 6;
    std::string numero_de_agencia;
    void valida_numero_de_agencia(std::string numero_de_agencia);
    void set_numero_de_agencia(std::string numero_de_agencia);
public:
    std::string get_numero_de_agencia();
    Numero_de_Agencia(std::string numero_de_agencia);
};

class Numero_de_Conta {
private:
	const int tamanho = 8;
	std::string numero_de_conta;
	void valida_numero_de_conta(std::string numero_de_conta);
	void set_numero_de_conta(std::string numero_de_conta);
public:
	std::string get_numero_de_conta();
	Numero_de_Conta(std::string numero_de_conta);
};

class Preco {
private:
	const float preco_max = 5000.00;
	const float preco_min = 1.00;
	float preco;
	void valida_preco(float preco);
	float formata_preco(float preco);
	void set_preco(float preco);
public:
	float get_preco();
	Preco(float preco);
};

class Telefone {
private:
	const int tamanho = 15;
	std::string telefone;
	void valida_telefone(std::string telefone);
	void set_telefone(std::string telefone);
public:
	Telefone(std::string telefone);
	std::string get_telefone();
};

class Senha{
private:
	bool possui_invalido(std::string senha);
	bool checa_repeticao(std::string senha);
	const int tamanho = 5;
	std::string senha;
	void valida_senha(std::string senha);
	void set_senha(std::string senha);
public:
	Senha(std::string senha);
	std::string get_senha();
};

class Vagas{
private:
    int vagas;
    void valida_vagas(int vagas);
    void set_vagas(int vagas);
public:
    int get_vagas();
    Vagas(int vagas);
};

#endif
