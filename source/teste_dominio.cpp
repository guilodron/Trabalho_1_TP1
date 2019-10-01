#include "../include/teste_dominio.hpp"
#include <stdexcept>
#include <iostream>

void TUAssento::set_up()
{
	assento = new Assento();
	estado = SUCESSO;
}

void TUAssento::tear_down()
{
	delete assento;
}

void TUAssento::testar_cenario_sucesso()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE SUCESSO" << std::endl;
	try {
		assento->set_tipo_de_assento(VALOR_VALIDO);
		if (assento->get_tipo_de_assento() != VALOR_VALIDO) {
			std::cout << "Falha no get cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso" << std::endl;
		}
	}
	catch (std::invalid_argument e) {
		std::cout << "Falha no set!" << std::endl;
	}
}

void TUAssento::testar_cenario_falha()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE FALHA" << std::endl;
	try {
		assento->set_tipo_de_assento(VALOR_INVALIDO);
		std::cout << "Falha no cenario invalido!" << std::endl;
		estado = FALHA;

	}
	catch(std::invalid_argument e){
		std::cout << "Passou no cenario invalido" << std::endl;
	}
}

int TUAssento::run()
{
	std::cout << "TESTANDO DOMINIO ASSENTO" << std::endl;
	set_up();
	testar_cenario_sucesso();
	testar_cenario_falha();
	tear_down();
	std::cout << "--------------------------" << std::endl << std::endl;
	return estado;
}

//---------------------------------------------------------------------------

void TUBagagem::set_up()
{
	bagagem = new Bagagem();
	estado = SUCESSO;
}

void TUBagagem::tear_down()
{
	delete bagagem;
}

void TUBagagem::testar_cenario_sucesso()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE SUCESSO" << std::endl;
	try {
		bagagem->set_numero_de_bagagem(VALOR_VALIDO);
		if (bagagem->get_numero_de_bagagem() != VALOR_VALIDO) {
			std::cout << "Falha no get cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso" << std::endl;
		}
	}
	catch (std::invalid_argument e) {
		std::cout << "Falha no set!" << std::endl;
	}
}

void TUBagagem::testar_cenario_falha()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE FALHA" << std::endl;
	try {
		bagagem->set_numero_de_bagagem(VALOR_INVALIDO);
		std::cout << "Falha no cenario invalido!" << std::endl;
		estado = FALHA;

	}
	catch (std::invalid_argument e) {
		std::cout << "Passou no cenario invalido" << std::endl;
	}
}

int TUBagagem::run()
{
	std::cout << "TESTANDO DOMINIO BAGAGEM" << std::endl;
	set_up();
	testar_cenario_sucesso();
	testar_cenario_falha();
	tear_down();
	std::cout << "--------------------------" << std::endl << std::endl;
	return estado;
}

//---------------------------------------------------------------------------

void TUCodigo_de_Banco::set_up()
{
	codigo_de_banco = new Codigo_de_Banco();
	estado = SUCESSO;
}

void TUCodigo_de_Banco::tear_down()
{
	delete codigo_de_banco;
}

void TUCodigo_de_Banco::testar_cenario_sucesso()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE SUCESSO" << std::endl;
	try {
		codigo_de_banco->set_codigo(VALOR_VALIDO);
		if (codigo_de_banco->get_codigo() != VALOR_VALIDO) {
			std::cout << "Falha no get cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso" << std::endl;
		}
	}
	catch (std::invalid_argument e) {
		std::cout << "Falha no set!" << std::endl;
	}
}

void TUCodigo_de_Banco::testar_cenario_falha()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE FALHA" << std::endl;
	try {
		codigo_de_banco->set_codigo(VALOR_INVALIDO);
		std::cout << "Falha no cenario invalido!" << std::endl;
		estado = FALHA;

	}
	catch (std::invalid_argument e) {
		std::cout << "Passou no cenario invalido" << std::endl;
	}
}

int TUCodigo_de_Banco::run()
{
	std::cout << "TESTANDO DOMINIO CODIGO DE BANCO" << std::endl;
	set_up();
	testar_cenario_sucesso();
	testar_cenario_falha();
	tear_down();
	std::cout << "--------------------------" << std::endl << std::endl;
	return estado;
}

//---------------------------------------------------------------------------

void TUCodigo_de_Carona::set_up()
{
	codigo_de_carona = new Codigo_de_Carona();
	estado = SUCESSO;
}

void TUCodigo_de_Carona::tear_down()
{
	delete codigo_de_carona;
}

void TUCodigo_de_Carona::testar_cenario_sucesso()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE SUCESSO" << std::endl;
	try {
		codigo_de_carona->set_codigo(VALOR_VALIDO);
		if (codigo_de_carona->get_codigo() != VALOR_VALIDO) {
			std::cout << "Falha no get cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso" << std::endl;
		}
	}
	catch (std::invalid_argument e) {
		std::cout << "Falha no set!" << std::endl;
	}
}

void TUCodigo_de_Carona::testar_cenario_falha()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE FALHA" << std::endl;
	try {
		codigo_de_carona->set_codigo(VALOR_INVALIDO);
		std::cout << "Falha no cenario invalido!" << std::endl;
		estado = FALHA;

	}
	catch (std::invalid_argument e) {
		std::cout << "Passou no cenario invalido" << std::endl;
	}
}

int TUCodigo_de_Carona::run()
{
	std::cout << "TESTANDO DOMINIO CODIGO DE CARONA	" << std::endl;
	set_up();
	testar_cenario_sucesso();
	testar_cenario_falha();
	tear_down();
	std::cout << "--------------------------" << std::endl << std::endl;
	return estado;
}

//---------------------------------------------------------------------------

void TUCodigo_de_Reserva::set_up()
{
	codigo_de_reserva = new Codigo_de_Reserva();
	estado = SUCESSO;
}

void TUCodigo_de_Reserva::tear_down()
{
	delete codigo_de_reserva;
}

void TUCodigo_de_Reserva::testar_cenario_sucesso()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE SUCESSO" << std::endl;
	try {
		codigo_de_reserva->set_codigo(VALOR_VALIDO);
		if (codigo_de_reserva->get_codigo() != VALOR_VALIDO) {
			std::cout << "Falha no get cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso" << std::endl;
		}
	}
	catch (std::invalid_argument e) {
		std::cout << "Falha no set!" << std::endl;
	}
}

void TUCodigo_de_Reserva::testar_cenario_falha()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE FALHA" << std::endl;
	try {
		codigo_de_reserva->set_codigo(VALOR_INVALIDO);
		std::cout << "Falha no cenario invalido!" << std::endl;
		estado = FALHA;

	}
	catch (std::invalid_argument e) {
		std::cout << "Passou no cenario invalido" << std::endl;
	}
}

int TUCodigo_de_Reserva::run()
{
	std::cout << "TESTANDO DOMINIO CODIGO DE RESERVA" << std::endl;
	set_up();
	testar_cenario_sucesso();
	testar_cenario_falha();
	tear_down();
	std::cout << "--------------------------" << std::endl << std::endl;
	return estado;
}

//---------------------------------------------------------------------------

void TUCidade::set_up()
{
	cidade = new Cidade();
	estado = SUCESSO;
}

void TUCidade::tear_down()
{
	delete cidade;
}

void TUCidade::testar_cenario_sucesso()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE SUCESSO" << std::endl;
	try {
		cidade->set_nome_cidade(VALOR_VALIDO);
		if (cidade->get_nome_cidade() != VALOR_VALIDO) {
			std::cout << "Falha no get cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso" << std::endl;
		}
	}
	catch (std::invalid_argument e) {
		std::cout << "Falha no set!" << std::endl;
	}
}

void TUCidade::testar_cenario_falha()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE FALHA" << std::endl;
	try {
		cidade->set_nome_cidade(VALOR_INVALIDO);
		std::cout << "Falha no cenario invalido!" << std::endl;
		estado = FALHA;

	}
	catch (std::invalid_argument e) {
		std::cout << "Passou no cenario invalido" << std::endl;
	}
}

int TUCidade::run()
{
	std::cout << "TESTANDO DOMINIO CIDADE" << std::endl;
	set_up();
	testar_cenario_sucesso();
	testar_cenario_falha();
	tear_down();
	std::cout << "--------------------------" << std::endl << std::endl;
	return estado;
}

//---------------------------------------------------------------------------

void TUCpf::set_up()
{
	cpf = new Cpf();
	estado = SUCESSO;
}

void TUCpf::tear_down()
{
	delete cpf;
}

void TUCpf::testar_cenario_sucesso()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE SUCESSO" << std::endl;
	try {
		cpf->set_cpf(VALOR_VALIDO);
		if (cpf->get_cpf() != VALOR_VALIDO) {
			std::cout << "Falha no get cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso" << std::endl;
		}
	}
	catch (std::invalid_argument e) {
		std::cout << "Falha no set!" << std::endl;
	}
}

void TUCpf::testar_cenario_falha()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE FALHA" << std::endl;
	try {
		cpf->set_cpf(VALOR_INVALIDO);
		std::cout << "Falha no cenario invalido!" << std::endl;
		estado = FALHA;

	}
	catch (std::invalid_argument e) {
		std::cout << "Passou no cenario invalido" << std::endl;
	}
}

int TUCpf::run()
{
	std::cout << "TESTANDO DOMINIO CPF" << std::endl;
	set_up();
	testar_cenario_sucesso();
	testar_cenario_falha();
	tear_down();
	std::cout << "--------------------------" << std::endl << std::endl;
	return estado;
}

//---------------------------------------------------------------------------

void TUData::set_up()
{
	data = new Data();
	estado = SUCESSO;
}

void TUData::tear_down()
{
	delete data;
}

void TUData::testar_cenario_sucesso()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE SUCESSO" << std::endl;
	try {
		data->set_data(VALOR_VALIDO);
		if (data->get_data() != VALOR_VALIDO) {
			std::cout << "Falha no get cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso" << std::endl;
		}
	}
	catch (std::invalid_argument e) {
		std::cout << "Falha no set!" << std::endl;
	}
}

void TUData::testar_cenario_falha()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE FALHA" << std::endl;
	try {
		data->set_data(VALOR_INVALIDO);
		std::cout << "Falha no cenario invalido!" << std::endl;
		estado = FALHA;

	}
	catch (std::invalid_argument e) {
		std::cout << "Passou no cenario invalido" << std::endl;
	}
}

int TUData::run()
{
	std::cout << "TESTANDO DOMINIO DATA" << std::endl;
	set_up();
	testar_cenario_sucesso();
	testar_cenario_falha();
	tear_down();
	std::cout << "--------------------------" << std::endl << std::endl;
	return estado;
}

//---------------------------------------------------------------------------

void TUDuracao::set_up()
{
	duracao = new Duracao();
	estado = SUCESSO;
}

void TUDuracao::tear_down()
{
	delete duracao;
}

void TUDuracao::testar_cenario_sucesso()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE SUCESSO" << std::endl;
	try {
		duracao->set_duracao(VALOR_VALIDO);
		if (duracao->get_duracao() != VALOR_VALIDO) {
			std::cout << "Falha no get cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso" << std::endl;
		}
	}
	catch (std::invalid_argument e) {
		std::cout << "Falha no set!" << std::endl;
	}
}

void TUDuracao::testar_cenario_falha()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE FALHA" << std::endl;
	try {
		duracao->set_duracao(VALOR_INVALIDO);
		std::cout << "Falha no cenario invalido!" << std::endl;
		estado = FALHA;

	}
	catch (std::invalid_argument e) {
		std::cout << "Passou no cenario invalido" << std::endl;
	}
}

int TUDuracao::run()
{
	std::cout << "TESTANDO DOMINIO DURACAO" << std::endl;
	set_up();
	testar_cenario_sucesso();
	testar_cenario_falha();
	tear_down();
	std::cout << "--------------------------" << std::endl << std::endl;
	return estado;
}

//---------------------------------------------------------------------------

void TUEstado::set_up()
{
	state = new Estado();
	estado = SUCESSO;
}

void TUEstado::tear_down()
{
	delete state;
}

void TUEstado::testar_cenario_sucesso()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE SUCESSO" << std::endl;
	try {
		state->set_estado(VALOR_VALIDO);
		if (state->get_estado() != VALOR_VALIDO) {
			std::cout << "Falha no get cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso" << std::endl;
		}
	}
	catch (std::invalid_argument e) {
		std::cout << "Falha no set!" << std::endl;
	}
}

void TUEstado::testar_cenario_falha()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE FALHA" << std::endl;
	try {
		state->set_estado(VALOR_INVALIDO);
		std::cout << "Falha no cenario invalido!" << std::endl;
		estado = FALHA;

	}
	catch (std::invalid_argument e) {
		std::cout << "Passou no cenario invalido" << std::endl;
	}
}

int TUEstado::run()
{
	std::cout << "TESTANDO DOMINIO ESTADO" << std::endl;
	set_up();
	testar_cenario_sucesso();
	testar_cenario_falha();
	tear_down();
	std::cout << "--------------------------" << std::endl << std::endl;
	return estado;
}

//---------------------------------------------------------------------------

void TUEmail::set_up()
{
	email = new Email();
	estado = SUCESSO;
}

void TUEmail::tear_down()
{
	delete email;
}

void TUEmail::testar_cenario_sucesso()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE SUCESSO" << std::endl;
	try {
		email->set_email(VALOR_VALIDO);
		if (email->get_email() != VALOR_VALIDO) {
			std::cout << "Falha no get cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso" << std::endl;
		}
	}
	catch (std::invalid_argument e) {
		std::cout << "Falha no set!" << std::endl;
	}
}

void TUEmail::testar_cenario_falha()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE FALHA" << std::endl;
	try {
		email->set_email(VALOR_INVALIDO);
		std::cout << "Falha no cenario invalido!" << std::endl;
		estado = FALHA;

	}
	catch (std::invalid_argument e) {
		std::cout << "Passou no cenario invalido" << std::endl;
	}
}

int TUEmail::run()
{
	std::cout << "TESTANDO DOMINIO EMAIL" << std::endl;
	set_up();
	testar_cenario_sucesso();
	testar_cenario_falha();
	tear_down();
	std::cout << "--------------------------" << std::endl << std::endl;
	return estado;
}

//---------------------------------------------------------------------------

void TUNome::set_up()
{
	nome = new Nome();
	estado = SUCESSO;
}

void TUNome::tear_down()
{
	delete nome;
}

void TUNome::testar_cenario_sucesso()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE SUCESSO" << std::endl;
	try {
		nome->set_nome(VALOR_VALIDO);
		if (nome->get_nome() != VALOR_VALIDO) {
			std::cout << "Falha no get cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso" << std::endl;
		}
	}
	catch (std::invalid_argument e) {
		std::cout << "Falha no set!" << std::endl;
	}
}

void TUNome::testar_cenario_falha()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE FALHA" << std::endl;
	try {
		nome->set_nome(VALOR_INVALIDO);
		std::cout << "Falha no cenario invalido!" << std::endl;
		estado = FALHA;

	}
	catch (std::invalid_argument e) {
		std::cout << "Passou no cenario invalido" << std::endl;
	}
}

int TUNome::run()
{
	std::cout << "TESTANDO DOMINIO NOME" << std::endl;
	set_up();
	testar_cenario_sucesso();
	testar_cenario_falha();
	tear_down();
	std::cout << "--------------------------" << std::endl << std::endl;
	return estado;
}

//---------------------------------------------------------------------------

void TUNumero_de_Agencia::set_up()
{
	numero_de_agencia = new Numero_de_Agencia();
	estado = SUCESSO;
}

void TUNumero_de_Agencia::tear_down()
{
	delete numero_de_agencia;
}

void TUNumero_de_Agencia::testar_cenario_sucesso()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE SUCESSO" << std::endl;
	try {
		numero_de_agencia->set_numero_de_agencia(VALOR_VALIDO);
		if (numero_de_agencia->get_numero_de_agencia() != VALOR_VALIDO) {
			std::cout << "Falha no get cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso" << std::endl;
		}
	}
	catch (std::invalid_argument e) {
		std::cout << "Falha no set!" << std::endl;
	}
}

void TUNumero_de_Agencia::testar_cenario_falha()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE FALHA" << std::endl;
	try {
		numero_de_agencia->set_numero_de_agencia(VALOR_INVALIDO);
		std::cout << "Falha no cenario invalido!" << std::endl;
		estado = FALHA;

	}
	catch (std::invalid_argument e) {
		std::cout << "Passou no cenario invalido" << std::endl;
	}
}

int TUNumero_de_Agencia::run()
{
	std::cout << "TESTANDO DOMINIO NUMERO DE AGENCIA" << std::endl;
	set_up();
	testar_cenario_sucesso();
	testar_cenario_falha();
	tear_down();
	std::cout << "--------------------------" << std::endl << std::endl;
	return estado;
}

//---------------------------------------------------------------------------

void TUNumero_de_Conta::set_up()
{
	numero_de_conta = new Numero_de_Conta();
	estado = SUCESSO;
}

void TUNumero_de_Conta::tear_down()
{
	delete numero_de_conta;
}

void TUNumero_de_Conta::testar_cenario_sucesso()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE SUCESSO" << std::endl;
	try {
		numero_de_conta->set_numero_de_conta(VALOR_VALIDO);
		if (numero_de_conta->get_numero_de_conta() != VALOR_VALIDO) {
			std::cout << "Falha no get cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso" << std::endl;
		}
	}
	catch (std::invalid_argument e) {
		std::cout << "Falha no set!" << std::endl;
	}
}

void TUNumero_de_Conta::testar_cenario_falha()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE FALHA" << std::endl;
	try {
		numero_de_conta->set_numero_de_conta(VALOR_INVALIDO);
		std::cout << "Falha no cenario invalido!" << std::endl;
		estado = FALHA;

	}
	catch (std::invalid_argument e) {
		std::cout << "Passou no cenario invalido" << std::endl;
	}
}

int TUNumero_de_Conta::run()
{
	std::cout << "TESTANDO DOMINIO NUMERO DE CONTA" << std::endl;
	set_up();
	testar_cenario_sucesso();
	testar_cenario_falha();
	tear_down();
	std::cout << "--------------------------" << std::endl << std::endl;
	return estado;
}

//---------------------------------------------------------------------------

void TUPreco::set_up()
{
	preco = new Preco();
	estado = SUCESSO;
}

void TUPreco::tear_down()
{
	delete preco;
}

void TUPreco::testar_cenario_sucesso()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE SUCESSO" << std::endl;
	try {
		preco->set_preco(VALOR_VALIDO);
		if (preco->get_preco() != VALOR_VALIDO) {
			std::cout << "Falha no get cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso" << std::endl;
		}
	}
	catch (std::invalid_argument e) {
		std::cout << "Falha no set!" << std::endl;
	}
}

void TUPreco::testar_cenario_falha()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE FALHA" << std::endl;
	try {
		preco->set_preco(VALOR_INVALIDO);
		std::cout << "Falha no cenario invalido!" << std::endl;
		estado = FALHA;

	}
	catch (std::invalid_argument e) {
		std::cout << "Passou no cenario invalido" << std::endl;
	}
}

int TUPreco::run()
{
	std::cout << "TESTANDO DOMINIO PRECO" << std::endl;
	set_up();
	testar_cenario_sucesso();
	testar_cenario_falha();
	tear_down();
	std::cout << "--------------------------" << std::endl << std::endl;
	return estado;
}

//---------------------------------------------------------------------------

void TUTelefone::set_up()
{
	telefone = new Telefone();
	estado = SUCESSO;
}

void TUTelefone::tear_down()
{
	delete telefone;
}

void TUTelefone::testar_cenario_sucesso()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE SUCESSO" << std::endl;
	try {
		telefone->set_telefone(VALOR_VALIDO);
		if (telefone->get_telefone() != VALOR_VALIDO) {
			std::cout << "Falha no get cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso" << std::endl;
		}
	}
	catch (std::invalid_argument e) {
		std::cout << "Falha no set!" << std::endl;
	}
}

void TUTelefone::testar_cenario_falha()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE FALHA" << std::endl;
	try {
		telefone->set_telefone(VALOR_INVALIDO);
		std::cout << "Falha no cenario invalido!" << std::endl;
		estado = FALHA;

	}
	catch (std::invalid_argument e) {
		std::cout << "Passou no cenario invalido" << std::endl;
	}
}

int TUTelefone::run()
{
	std::cout << "TESTANDO DOMINIO TELEFONE" << std::endl;
	set_up();
	testar_cenario_sucesso();
	testar_cenario_falha();
	tear_down();
	std::cout << "--------------------------" << std::endl << std::endl;
	return estado;
}

//---------------------------------------------------------------------------

void TUSenha::set_up()
{
	senha = new Senha();
	estado = SUCESSO;
}

void TUSenha::tear_down()
{
	delete senha;
}

void TUSenha::testar_cenario_sucesso()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE SUCESSO" << std::endl;
	try {
		senha->set_senha(VALOR_VALIDO);
		if (senha->get_senha() != VALOR_VALIDO) {
			std::cout << "Falha no get cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso" << std::endl;
		}
	}
	catch (std::invalid_argument e) {
		std::cout << "Falha no set!" << std::endl;
	}
}

void TUSenha::testar_cenario_falha()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE FALHA" << std::endl;
	try {
		senha->set_senha(VALOR_INVALIDO);
		std::cout << "Falha no cenario invalido!" << std::endl;
		estado = FALHA;

	}
	catch (std::invalid_argument e) {
		std::cout << "Passou no cenario invalido" << std::endl;
	}
}

int TUSenha::run()
{
	std::cout << "TESTANDO DOMINIO SENHA" << std::endl;
	set_up();
	testar_cenario_sucesso();
	testar_cenario_falha();
	tear_down();
	std::cout << "--------------------------" << std::endl << std::endl;
	return estado;
}

//---------------------------------------------------------------------------

void TUVagas::set_up()
{
	vagas = new Vagas();
	estado = SUCESSO;
}

void TUVagas::tear_down()
{
	delete vagas;
}

void TUVagas::testar_cenario_sucesso()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE SUCESSO" << std::endl;
	try {
		vagas->set_vagas(VALOR_VALIDO);
		if (vagas->get_vagas() != VALOR_VALIDO) {
			std::cout << "Falha no get cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso" << std::endl;
		}
	}
	catch (std::invalid_argument e) {
		std::cout << "Falha no set!" << std::endl;
	}
}

void TUVagas::testar_cenario_falha()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE FALHA" << std::endl;
	try {
		vagas->set_vagas(VALOR_INVALIDO);
		std::cout << "Falha no cenario invalido!" << std::endl;
		estado = FALHA;

	}
	catch (std::invalid_argument e) {
		std::cout << "Passou no cenario invalido" << std::endl;
	}
}

int TUVagas::run()
{
	std::cout << "TESTANDO DOMINIO VAGAS" << std::endl;
	set_up();
	testar_cenario_sucesso();
	testar_cenario_falha();
	tear_down();
	std::cout << "--------------------------" << std::endl << std::endl;
	return estado;
}

//---------------------------------------------------------------------------