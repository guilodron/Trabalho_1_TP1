#include "../include/teste_entidade.hpp"
#include <exception>
#include <iostream>

void TUUsuario::set_up()
{
	usuario = new Usuario();
	estado = SUCESSO;
}

void TUUsuario::tear_down()
{
	delete usuario;
}

void TUUsuario::testar_cenario_sucesso()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE SUCESSO" << std::endl;
	try {
		usuario->set_nome(VALOR_VALIDO_NOME);
		if (usuario->get_nome() != VALOR_VALIDO_NOME) {
			std::cout << "Falha no get nome cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso de nome" << std::endl;
		}

		usuario->set_telefone(VALOR_VALIDO_TELEFONE);
		if (usuario->get_telefone() != VALOR_VALIDO_TELEFONE) {
			std::cout << "Falha no get telefone cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso de telefone" << std::endl;
		}

		usuario->set_email(VALOR_VALIDO_EMAIL);
		if (usuario->get_email() != VALOR_VALIDO_EMAIL) {
			std::cout << "Falha no get email cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso de email" << std::endl;
		}

		usuario->set_senha(VALOR_VALIDO_SENHA);
		if (usuario->get_senha() != VALOR_VALIDO_SENHA) {
			std::cout << "Falha no get senha cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso de senha" << std::endl;
		}

		usuario->set_cpf(VALOR_VALIDO_CPF);
		if (usuario->get_cpf() != VALOR_VALIDO_CPF) {
			std::cout << "Falha no get cpf cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso de cpf" << std::endl;
		}
	}
	catch (std::invalid_argument& e) {
		std::cout << "Falha no set!" << std::endl;
	}
}

void TUUsuario::testar_cenario_falha()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE FALHA" << std::endl;
	try {
		usuario->set_nome(VALOR_INVALIDO_NOME);
		usuario->set_telefone(VALOR_INVALIDO_TELEFONE);
		usuario->set_email(VALOR_INVALIDO_EMAIL);
		usuario->set_senha(VALOR_INVALIDO_SENHA);
		usuario->set_cpf(VALOR_INVALIDO_CPF);
		std::cout << "Falha no cenario invalido!" << std::endl;
		estado = FALHA;

	}
	catch (std::invalid_argument& e) {
		std::cout << "Passou no cenario invalido" << std::endl;
	}
}

int TUUsuario::run()
{
	std::cout << "TESTANDO ENTIDADE USUARIO" << std::endl;
	set_up();
	testar_cenario_sucesso();
	testar_cenario_falha();
	tear_down();
	std::cout << "--------------------------" << std::endl << std::endl;
	return estado;
}

//---------------------------------------------------------------------------

void TUReserva::set_up()
{
	reserva = new Reserva();
	estado = SUCESSO;
}

void TUReserva::tear_down()
{
	delete reserva;
}

void TUReserva::testar_cenario_sucesso()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE SUCESSO" << std::endl;
	try {
		reserva->set_codigo_de_reserva(VALOR_VALIDO_CODIGO);
		if (reserva->get_codigo_de_reserva() != VALOR_VALIDO_CODIGO) {
			std::cout << "Falha no get codigo cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso de codigo" << std::endl;
		}

		reserva->set_assento(VALOR_VALIDO_ASSENTO);
		if (reserva->get_assento() != VALOR_VALIDO_ASSENTO) {
			std::cout << "Falha no get assento cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso de assento" << std::endl;
		}

		reserva->set_bagagem(VALOR_VALIDO_BAGAGEM);
		if (reserva->get_bagagem() != VALOR_VALIDO_BAGAGEM) {
			std::cout << "Falha no get bagagem cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso de bagagem" << std::endl;
		}

	}
	catch (std::invalid_argument& e) {
		std::cout << "Falha no set!" << std::endl;
	}
}

void TUReserva::testar_cenario_falha()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE FALHA" << std::endl;
	try {
		reserva->set_codigo_de_reserva(VALOR_INVALIDO_CODIGO);
		reserva->set_assento(VALOR_INVALIDO_ASSENTO);
		reserva->set_bagagem(VALOR_INVALIDO_BAGAGEM);
		std::cout << "Falha no cenario invalido!" << std::endl;
		estado = FALHA;

	}
	catch (std::invalid_argument& e) {
		std::cout << "Passou no cenario invalido" << std::endl;
	}
}

int TUReserva::run()
{
	std::cout << "TESTANDO ENTIDADE RESERVA" << std::endl;
	set_up();
	testar_cenario_sucesso();
	testar_cenario_falha();
	tear_down();
	std::cout << "--------------------------" << std::endl << std::endl;
	return estado;
}

//---------------------------------------------------------------------------

void TUCarona::set_up()
{
	carona = new Carona();
	estado = SUCESSO;
}

void TUCarona::tear_down()
{
	delete carona;
}

void TUCarona::testar_cenario_sucesso()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE SUCESSO" << std::endl;
	try {
		carona->set_codigo_de_carona(VALOR_VALIDO_CODIGO);
		if (carona->get_codigo_de_carona() != VALOR_VALIDO_CODIGO) {
			std::cout << "Falha no get codigo cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso de codigo" << std::endl;
		}

		carona->set_cidade_de_origem(VALOR_VALIDO_CIDADE_ORIGEM);
		if (carona->get_cidade_de_origem() != VALOR_VALIDO_CIDADE_ORIGEM) {
			std::cout << "Falha no get cidade origem cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso de cidade origem" << std::endl;
		}

		carona->set_estado_de_origem(VALOR_VALIDO_ESTADO_ORIGEM);
		if (carona->get_estado_de_origem() != VALOR_VALIDO_ESTADO_ORIGEM) {
			std::cout << "Falha no get estado origem cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso de estado origem" << std::endl;
		}

		carona->set_cidade_de_destino(VALOR_VALIDO_CIDADE_DESTINO);
		if (carona->get_cidade_de_destino() != VALOR_VALIDO_CIDADE_DESTINO) {
			std::cout << "Falha no get cidade destino cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso de cidade destino" << std::endl;
		}

		carona->set_estado_de_destino(VALOR_VALIDO_ESTADO_DESTINO);
		if (carona->get_estado_de_destino() != VALOR_VALIDO_ESTADO_DESTINO) {
			std::cout << "Falha no get estado destino cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso de estado destino" << std::endl;
		}

		carona->set_data(VALOR_VALIDO_DATA);
		if (carona->get_data() != VALOR_VALIDO_DATA) {
			std::cout << "Falha no get data cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso de data" << std::endl;
		}

		carona->set_duracao(VALOR_VALIDO_DURACAO);
		if (carona->get_duracao() != VALOR_VALIDO_DURACAO) {
			std::cout << "Falha no get duracao cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso de duracao" << std::endl;
		}

		carona->set_vagas(VALOR_VALIDO_VAGAS);
		if (carona->get_vagas() != VALOR_VALIDO_VAGAS) {
			std::cout << "Falha no get vagas cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso de vagas" << std::endl;
		}

		carona->set_preco(VALOR_VALIDO_PRECO);
		if (carona->get_preco() != VALOR_VALIDO_PRECO) {
			std::cout << "Falha no get preco cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso de preco" << std::endl;
		}

	}
	catch (std::invalid_argument& e) {
		std::cout << "Falha no set!" << std::endl;
	}
}

void TUCarona::testar_cenario_falha()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE FALHA" << std::endl;
	try {
		carona->set_codigo_de_carona(VALOR_INVALIDO_CODIGO);
		carona->set_cidade_de_origem(VALOR_INVALIDO_CIDADE_ORIGEM);
		carona->set_estado_de_origem(VALOR_INVALIDO_ESTADO_ORIGEM);
		carona->set_cidade_de_destino(VALOR_INVALIDO_CIDADE_DESTINO);
		carona->set_estado_de_destino(VALOR_INVALIDO_ESTADO_DESTINO);
		carona->set_data(VALOR_INVALIDO_DATA);
		carona->set_duracao(VALOR_INVALIDO_DURACAO);
		carona->set_vagas(VALOR_INVALIDO_VAGAS);
		carona->set_preco(VALOR_INVALIDO_PRECO);
		std::cout << "Falha no cenario invalido!" << std::endl;
		estado = FALHA;

	}
	catch (std::invalid_argument& e) {
		std::cout << "Passou no cenario invalido" << std::endl;
	}
}

int TUCarona::run()
{
	std::cout << "TESTANDO ENTIDADE CARONA" << std::endl;
	set_up();
	testar_cenario_sucesso();
	testar_cenario_falha();
	tear_down();
	std::cout << "--------------------------" << std::endl << std::endl;
	return estado;
}

//---------------------------------------------------------------------------

void TUConta::set_up()
{
	conta = new Conta();
	estado = SUCESSO;
}

void TUConta::tear_down()
{
	delete conta;
}

void TUConta::testar_cenario_sucesso()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE SUCESSO" << std::endl;
	try {
		conta->set_codigo_de_banco(VALOR_VALIDO_CODIGO);
		if (conta->get_codigo_de_banco() != VALOR_VALIDO_CODIGO) {
			std::cout << "Falha no get codigo cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso de codigo" << std::endl;
		}

		conta->set_numero_de_agencia(VALOR_VALIDO_AGENCIA);
		if (conta->get_numero_de_agencia() != VALOR_VALIDO_AGENCIA) {
			std::cout << "Falha no get agencia cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso de agencia" << std::endl;
		}

		conta->set_numero_de_conta(VALOR_VALIDO_CONTA);
		if (conta->get_numero_de_conta() != VALOR_VALIDO_CONTA) {
			std::cout << "Falha no get conta cenario de sucesso!" << std::endl;
			estado = FALHA;
		}
		else {
			cout << "Passou no cenario de sucesso de conta" << std::endl;
		}

	}
	catch (std::invalid_argument& e) {
		std::cout << "Falha no set!" << std::endl;
	}
}

void TUConta::testar_cenario_falha()
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "CENARIO DE FALHA" << std::endl;
	try {
		conta->set_codigo_de_banco(VALOR_INVALIDO_CODIGO);
		conta->set_numero_de_agencia(VALOR_INVALIDO_AGENCIA);
		conta->set_numero_de_conta(VALOR_INVALIDO_CONTA);
		std::cout << "Falha no cenario invalido!" << std::endl;
		estado = FALHA;

	}
	catch (std::invalid_argument& e) {
		std::cout << "Passou no cenario invalido" << std::endl;
	}
}

int TUConta::run()
{
	std::cout << "TESTANDO ENTIDADE CONTA" << std::endl;
	set_up();
	testar_cenario_sucesso();
	testar_cenario_falha();
	tear_down();
	std::cout << "--------------------------" << std::endl << std::endl;
	return estado;
}
