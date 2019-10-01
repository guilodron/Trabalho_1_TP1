#ifndef ENTIDADE_HPP
#define ENTIDADE_HPP

#include "dominio.hpp"

class Usuario{
private:
    Nome nome;
    Telefone telefone;
    Email email;
    Senha senha;
    Cpf cpf;
public:
	Usuario() {};
    Usuario(std::string nome, std::string telefone, std::string email, std::string senha, std::string cpf);
	void set_nome(std::string nome);
	void set_telefone(std::string telefone);
	void set_email(std::string email);
	void set_senha(std::string senha);
	void set_cpf(std::string cpf);
	std::string get_nome();
	std::string get_telefone();
	std::string get_email();
	std::string get_senha();
	std::string get_cpf();
};

class Reserva {
private:
	Codigo_de_Reserva codigo_de_reserva;
	Assento assento;
	Bagagem bagagem;
public:
	Reserva() {};
	Reserva(std::string codigo_de_reserva, char assento, int bagagem);
	void set_codigo_de_reserva(std::string codigo_de_reserva);
	void set_assento(char assento);
	void set_bagagem(int bagagem);
	std::string get_codigo_de_reserva();
	char get_assento();
	int get_bagagem();
};

class Carona {
private:
	Codigo_de_Carona codigo_de_carona;
	Cidade cidade_de_origem;
	Estado estado_de_origem;
	Cidade cidade_de_destino;
	Estado estado_de_destino;
	Data data;
	Duracao duracao;
	Vagas vagas;
	Preco preco;

public:
	Carona() {};
	Carona(std::string codigo_de_carona, std::string cidade_de_origem, std::string estado_de_origem,std::string cidade_de_destino, std::string estado_de_destino, std::string data, int duracao, int vagas, float preco);
	void set_codigo_de_carona(std::string codigo_de_carona);
	void set_cidade_de_origem(std::string cidade_de_origem);
	void set_estado_de_origem(std::string estado_de_origem);
	void set_cidade_de_destino(std::string cidade_de_destino);
	void set_estado_de_destino(std::string estado_de_destino);
	void set_data(std::string data);
	void set_duracao(int duracao);
	void set_vagas(int vagas);
	void set_preco(float preco);
	std::string get_codigo_de_carona();
	std::string get_cidade_de_origem();
	std::string get_estado_de_origem();
	std::string get_cidade_de_destino();
	std::string get_estado_de_destino();
	std::string get_data();
	int get_duracao();
	int get_vagas();
	float get_preco();

};

#endif