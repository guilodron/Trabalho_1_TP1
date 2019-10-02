#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "entidade.hpp"

using namespace std;

class TUUsuario {
private:
	// Defini��es de constantes para evitar numeros m�gicos.
	const std::string VALOR_VALIDO_NOME = "Marcos";
	const std::string VALOR_INVALIDO_NOME = "ABC!!@";
	const std::string VALOR_VALIDO_TELEFONE = "11-11-111111111";
	const std::string VALOR_INVALIDO_TELEFONE = "123";
	const std::string VALOR_VALIDO_EMAIL = "joao@email.com";
	const std::string VALOR_INVALIDO_EMAIL = ".joao.@..com";
	const std::string VALOR_VALIDO_SENHA = "#la$b";
	const std::string VALOR_INVALIDO_SENHA = "12345";
	const std::string VALOR_VALIDO_CPF = "034.869.281-12";
	const std::string VALOR_INVALIDO_CPF = "123.456.789-111";
	// Refer�ncia para o objeto a ser testado.
	Usuario* usuario;
	// Estado do teste.
	int estado;
	// Declara��es de m�todos.
	void set_up();
	void tear_down();
	void testar_cenario_sucesso();
	void testar_cenario_falha();
public:
	// Defini��es de constantes para reportar resultado do teste.
	const  int SUCESSO = 1;
	const  int FALHA = 0;
	int run();
};

class TUReserva {
private:
	// Defini��es de constantes para evitar numeros m�gicos.
	const std::string VALOR_VALIDO_CODIGO = "12345";
	const std::string VALOR_INVALIDO_CODIGO = "123AB";
	const char VALOR_VALIDO_ASSENTO = 'D';
	const char VALOR_INVALIDO_ASSENTO = 'Z';
	const int VALOR_VALIDO_BAGAGEM = 4;
	const int VALOR_INVALIDO_BAGAGEM = 5;
	// Refer�ncia para o objeto a ser testado.
	Reserva* reserva;
	// Estado do teste.
	int estado;
	// Declara��es de m�todos.
	void set_up();
	void tear_down();
	void testar_cenario_sucesso();
	void testar_cenario_falha();
public:
	// Defini��es de constantes para reportar resultado do teste.
	const  int SUCESSO = 1;
	const  int FALHA = 0;
	int run();
};

class TUCarona {
private:
	// Defini��es de constantes para evitar numeros m�gicos.
	const std::string VALOR_VALIDO_CODIGO = "1234";
	const std::string VALOR_INVALIDO_CODIGO = "123x";
	const std::string VALOR_VALIDO_CIDADE_ORIGEM = "Brasilia";
	const std::string VALOR_INVALIDO_CIDADE_ORIGEM = "Bras  ilia";
	const std::string VALOR_VALIDO_ESTADO_ORIGEM = "SP";
	const std::string VALOR_INVALIDO_ESTADO_ORIGEM = "XX";
	const std::string VALOR_VALIDO_CIDADE_DESTINO = "Ilheus";
	const std::string VALOR_INVALIDO_CIDADE_DESTINO = "Ilh  eus";
	const std::string VALOR_VALIDO_ESTADO_DESTINO = "RJ";
	const std::string VALOR_INVALIDO_ESTADO_DESTINO = "LL";
	const std::string VALOR_VALIDO_DATA = "22/11/2001";
	const std::string VALOR_INVALIDO_DATA = "31/02/2004";
	const int VALOR_VALIDO_DURACAO = 10;
	const int VALOR_INVALIDO_DURACAO = 500;
	const int VALOR_VALIDO_VAGAS = 3;
	const int VALOR_INVALIDO_VAGAS = 10;
	const float VALOR_VALIDO_PRECO = 50.00;
	const float VALOR_INVALIDO_PRECO = 6000;
	// Refer�ncia para o objeto a ser testado.
	Carona* carona;
	// Estado do teste.
	int estado;
	// Declara��es de m�todos.
	void set_up();
	void tear_down();
	void testar_cenario_sucesso();
	void testar_cenario_falha();
public:
	// Defini��es de constantes para reportar resultado do teste.
	const  int SUCESSO = 1;
	const  int FALHA = 0;
	int run();
};

class TUConta {
private:
	// Defini��es de constantes para evitar numeros m�gicos.
	const std::string VALOR_VALIDO_CODIGO = "123";
	const std::string VALOR_INVALIDO_CODIGO = "12";
	const std::string VALOR_VALIDO_AGENCIA = "6938-5";
	const std::string VALOR_INVALIDO_AGENCIA = "6938-4";
	const std::string VALOR_VALIDO_CONTA = "452765-1";
	const std::string VALOR_INVALIDO_CONTA = "452765-2";
	// Refer�ncia para o objeto a ser testado.
	Conta* conta;
	// Estado do teste.
	int estado;
	// Declara��es de m�todos.
	void set_up();
	void tear_down();
	void testar_cenario_sucesso();
	void testar_cenario_falha();
public:
	// Defini��es de constantes para reportar resultado do teste.
	const  int SUCESSO = 1;
	const  int FALHA = 0;
	int run();
};

#endif
