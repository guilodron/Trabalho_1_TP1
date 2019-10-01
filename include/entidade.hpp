#ifndef ENTIDADE_HPP
#define ENTIDADE_HPP

#include "dominio.hpp"

// Nome, telefone, email, senha, CPF.
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

#endif