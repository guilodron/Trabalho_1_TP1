#include "../include/entidade.hpp"

Usuario::Usuario(std::string nome, std::string telefone, std::string email, std::string senha, std::string cpf)
{
	this->nome.set_nome(nome);
	this->telefone.set_telefone(telefone);
	this->email.set_email(email);
	this->senha.set_senha(senha);
	this->cpf.set_cpf(cpf);
}

void Usuario::set_nome(std::string nome)
{
	this->nome.set_nome(nome);
}

void Usuario::set_telefone(std::string telefone)
{
	this->telefone.set_telefone(telefone);
}

void Usuario::set_email(std::string email)
{
	this->email.set_email(email);
}

void Usuario::set_senha(std::string senha)
{
	this->senha.set_senha(senha);
}

void Usuario::set_cpf(std::string cpf)
{
	this->cpf.set_cpf(cpf);
}

std::string Usuario::get_nome()
{
	return this->nome.get_nome();
}

std::string Usuario::get_telefone()
{
	return this->telefone.get_telefone();
}

std::string Usuario::get_email()
{
	return this->email.get_email();
}

std::string Usuario::get_senha()
{
	return this->senha.get_senha();
}

std::string Usuario::get_cpf()
{
	return this->cpf.get_cpf();
}

Reserva::Reserva(std::string codigo_de_reserva, char assento, int bagagem)
{
	set_codigo_de_reserva(codigo_de_reserva);
	set_assento(assento);	
	set_bagagem(bagagem);
	
}

void Reserva::set_codigo_de_reserva(std::string codigo_de_reserva)
{
	this->codigo_de_reserva.set_codigo(codigo_de_reserva);
}

void Reserva::set_assento(char assento)
{
	this->assento.set_tipo_de_assento(assento);
}

void Reserva::set_bagagem(int bagagem)
{
	this->bagagem.set_numero_de_bagagem(bagagem);
}

std::string Reserva::get_codigo_de_reserva()
{
	return this->codigo_de_reserva.get_codigo();
}

char Reserva::get_assento()
{
	return this->assento.get_tipo_de_assento();
}

int Reserva::get_bagagem()
{
	return this->bagagem.get_numero_de_bagagem();
}



