#include "../include/entidade.hpp"

// Usuario.

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

// Reserva.

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

// Carona.

Carona::Carona(std::string codigo_de_carona, std::string cidade_de_origem, std::string estado_de_origem,std::string cidade_de_destino, std::string estado_de_destino, std::string data, int duracao, int vagas, float preco)
{
	set_codigo_de_carona(codigo_de_carona);
	set_cidade_de_origem(cidade_de_origem);
	set_estado_de_origem(estado_de_origem);
	set_cidade_de_destino(cidade_de_destino);
	set_estado_de_destino(estado_de_destino);
	set_data(data);
	set_duracao(duracao);
	set_vagas(vagas);
	set_preco(preco);
}

void Carona::set_codigo_de_carona(std::string codigo_de_carona)
{
	this->codigo_de_carona.set_codigo(codigo_de_carona);
}

void Carona::set_cidade_de_origem(std::string cidade_de_origem)
{
	this->cidade_de_origem.set_nome_cidade(cidade_de_origem);	
}

void Carona::set_estado_de_origem(std::string estado_de_origem)
{
	this->estado_de_origem.set_estado(estado_de_origem);	
}

void Carona::set_cidade_de_destino(std::string cidade_de_destino)
{
	this->cidade_de_destino.set_nome_cidade(cidade_de_destino);	
}

void Carona::set_estado_de_destino(std::string estado_de_destino)
{
	this->estado_de_destino.set_estado(estado_de_destino);	
}

void Carona::set_data(std::string data)
{
	this->data.set_data(data);	
}

void Carona::set_duracao(int duracao)
{
	this->duracao.set_duracao(duracao);	
}

void Carona::set_vagas(int vagas)
{
	this->vagas.set_vagas(vagas);	
}

void Carona::set_preco(float preco)
{
	this->preco.set_preco(preco);	
}

std::string Carona::get_codigo_de_carona()
{
	return this->codigo_de_carona.get_codigo();
}

std::string Carona::get_cidade_de_origem()
{
	return this->cidade_de_origem.get_nome_cidade();
}

std::string Carona::get_estado_de_origem()
{
	return this->estado_de_origem.get_estado();
}

std::string Carona::get_cidade_de_destino()
{
	return this->cidade_de_destino.get_nome_cidade();
}

std::string Carona::get_estado_de_destino()
{
	return this->estado_de_destino.get_estado();
}

std::string Carona::get_data()
{
	return this->data.get_data();
}

int Carona::get_duracao()
{
	return this->duracao.get_duracao();
}

int Carona::get_vagas()
{
	return this->vagas.get_vagas();
}

float Carona::get_preco()
{
	return this->preco.get_preco();
}

// Conta.

Conta::Conta(std::string codigo_de_banco, std::string numero_de_agencia, std::string numero_de_conta)
{
	set_codigo_de_banco(codigo_de_banco);
	set_numero_de_agencia(numero_de_agencia);
	set_numero_de_conta(numero_de_conta);
}

void Conta::set_codigo_de_banco(std::string codigo_de_banco)
{
	this->codigo_de_banco.set_codigo(codigo_de_banco);
}

void Conta::set_numero_de_agencia(std::string numero_de_agencia)
{
	this->numero_de_agencia.set_numero_de_agencia(numero_de_agencia);
}

void Conta::set_numero_de_conta(std::string numero_de_conta)
{
	this->numero_de_conta.set_numero_de_conta(numero_de_conta);
}

std::string Conta::get_codigo_de_banco()
{
	return this->codigo_de_banco.get_codigo();
}

std::string Conta::get_numero_de_agencia()
{
	return this->numero_de_agencia.get_numero_de_agencia();
}

std::string Conta::get_numero_de_conta()
{
	return this->numero_de_conta.get_numero_de_conta();
}
