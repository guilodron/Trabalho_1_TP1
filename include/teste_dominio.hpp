#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominio.hpp"

using namespace std;

class TUAssento {
private:
	// Defini��es de constantes para evitar numeros m�gicos.
	const static char VALOR_VALIDO = 'D';
	const static char VALOR_INVALIDO = 'x';
	// Refer�ncia para o objeto a ser testado.
	Assento* assento;
	// Estado do teste.
	int estado;
	// Declara��es de m�todos.
	void set_up();
	void tear_down();
	void testar_cenario_sucesso();
	void testar_cenario_falha();
public:
	// Defini��es de constantes para reportar resultado do teste.
	const static int SUCESSO = 1;
	const static int FALHA = 0;
	int run();
};


class TUBagagem {
private:
	// Defini��es de constantes para evitar numeros m�gicos.
	const static char VALOR_VALIDO = 4;
	const static char VALOR_INVALIDO = 5;
	// Refer�ncia para o objeto a ser testado.
	Bagagem* bagagem;
	// Estado do teste.
	int estado;
	// Declara��es de m�todos.
	void set_up();
	void tear_down();
	void testar_cenario_sucesso();
	void testar_cenario_falha();
public:
	// Defini��es de constantes para reportar resultado do teste.
	const static int SUCESSO = 1;
	const static int FALHA = 0;
	int run();
};

class TUCodigo_de_Banco {
private:
	// Defini��es de constantes para evitar numeros m�gicos.
	const std::string VALOR_VALIDO = "123";
	const std::string VALOR_INVALIDO = "12";
	// Refer�ncia para o objeto a ser testado.
	Codigo_de_Banco* codigo_de_banco;
	// Estado do teste.
	int estado;
	// Declara��es de m�todos.
	void set_up();
	void tear_down();
	void testar_cenario_sucesso();
	void testar_cenario_falha();
public:
	// Defini��es de constantes para reportar resultado do teste.
	const static int SUCESSO = 1;
	const static int FALHA = 0;
	int run();
};

class TUCodigo_de_Carona {
private:
	// Defini��es de constantes para evitar numeros m�gicos.
	const std::string VALOR_VALIDO = "1234";
	const std::string VALOR_INVALIDO = "123x";
	// Refer�ncia para o objeto a ser testado.
	Codigo_de_Carona* codigo_de_carona;
	// Estado do teste.
	int estado;
	// Declara��es de m�todos.
	void set_up();
	void tear_down();
	void testar_cenario_sucesso();
	void testar_cenario_falha();
public:
	// Defini��es de constantes para reportar resultado do teste.
	const static int SUCESSO = 1;
	const static int FALHA = 0;
	int run();
};

class TUCodigo_de_Reserva {
private:
	// Defini��es de constantes para evitar numeros m�gicos.
	const std::string VALOR_VALIDO = "12345";
	const std::string VALOR_INVALIDO = "abcde";
	// Refer�ncia para o objeto a ser testado.
	Codigo_de_Reserva* codigo_de_reserva;
	// Estado do teste.
	int estado;
	// Declara��es de m�todos.
	void set_up();
	void tear_down();
	void testar_cenario_sucesso();
	void testar_cenario_falha();
public:
	// Defini��es de constantes para reportar resultado do teste.
	const static int SUCESSO = 1;
	const static int FALHA = 0;
	int run();
};

class TUCidade {
private:
	// Defini��es de constantes para evitar numeros m�gicos.
	const std::string VALOR_VALIDO = "Brasilia";
	const std::string VALOR_INVALIDO = "Goi  ania";
	// Refer�ncia para o objeto a ser testado.
	Cidade* cidade;
	// Estado do teste.
	int estado;
	// Declara��es de m�todos.
	void set_up();
	void tear_down();
	void testar_cenario_sucesso();
	void testar_cenario_falha();
public:
	// Defini��es de constantes para reportar resultado do teste.
	const static int SUCESSO = 1;
	const static int FALHA = 0;
	int run();
};

class TUCpf {
private:
	// Defini��es de constantes para evitar numeros m�gicos.
	const std::string VALOR_VALIDO = "034.869.281-12";
	const std::string VALOR_INVALIDO = "034.689.281-13";
	// Refer�ncia para o objeto a ser testado.
	Cpf* cpf;
	// Estado do teste.
	int estado;
	// Declara��es de m�todos.
	void set_up();
	void tear_down();
	void testar_cenario_sucesso();
	void testar_cenario_falha();
public:
	// Defini��es de constantes para reportar resultado do teste.
	const static int SUCESSO = 1;
	const static int FALHA = 0;
	int run();
};

class TUData {
private:
	// Defini��es de constantes para evitar numeros m�gicos.
	const std::string VALOR_VALIDO = "22/11/2001";
	const std::string VALOR_INVALIDO = "31/02/2004";
	// Refer�ncia para o objeto a ser testado.
	Data* data;
	// Estado do teste.
	int estado;
	// Declara��es de m�todos.
	void set_up();
	void tear_down();
	void testar_cenario_sucesso();
	void testar_cenario_falha();
public:
	// Defini��es de constantes para reportar resultado do teste.
	const static int SUCESSO = 1;
	const static int FALHA = 0;
	int run();
};

class TUDuracao {
private:
	// Defini��es de constantes para evitar numeros m�gicos.
	const int VALOR_VALIDO = 10;
	const int VALOR_INVALIDO = 500;
	// Refer�ncia para o objeto a ser testado.
	Duracao* duracao;
	// Estado do teste.
	int estado;
	// Declara��es de m�todos.
	void set_up();
	void tear_down();
	void testar_cenario_sucesso();
	void testar_cenario_falha();
public:
	// Defini��es de constantes para reportar resultado do teste.
	const static int SUCESSO = 1;
	const static int FALHA = 0;
	int run();
};

class TUEstado {
private:
	// Defini��es de constantes para evitar numeros m�gicos.
	const std::string VALOR_VALIDO = "DF";
	const std::string VALOR_INVALIDO = "XY";
	// Refer�ncia para o objeto a ser testado.
	Estado* state;
	// Estado do teste.
	int estado;
	// Declara��es de m�todos.
	void set_up();
	void tear_down();
	void testar_cenario_sucesso();
	void testar_cenario_falha();
public:
	// Defini��es de constantes para reportar resultado do teste.
	const static int SUCESSO = 1;
	const static int FALHA = 0;
	int run();
};

class TUEmail {
private:
	// Defini��es de constantes para evitar numeros m�gicos.
	const std::string VALOR_VALIDO = "guilodron@gmail.com";
	const std::string VALOR_INVALIDO = ".alo@..com";
	// Refer�ncia para o objeto a ser testado.
	Email* email;
	// Estado do teste.
	int estado;
	// Declara��es de m�todos.
	void set_up();
	void tear_down();
	void testar_cenario_sucesso();
	void testar_cenario_falha();
public:
	// Defini��es de constantes para reportar resultado do teste.
	const static int SUCESSO = 1;
	const static int FALHA = 0;
	int run();
};

class TUNome {
private:
	// Defini��es de constantes para evitar numeros m�gicos.
	const std::string VALOR_VALIDO = "Guilherme";
	const std::string VALOR_INVALIDO = "gui  lherme";
	// Refer�ncia para o objeto a ser testado.
	Nome* nome;
	// Estado do teste.
	int estado;
	// Declara��es de m�todos.
	void set_up();
	void tear_down();
	void testar_cenario_sucesso();
	void testar_cenario_falha();
public:
	// Defini��es de constantes para reportar resultado do teste.
	const static int SUCESSO = 1;
	const static int FALHA = 0;
	int run();
};

class TUNumero_de_Agencia {
private:
	// Defini��es de constantes para evitar numeros m�gicos.
	const std::string VALOR_VALIDO = "6938-5";
	const std::string VALOR_INVALIDO = "6938-4";
	// Refer�ncia para o objeto a ser testado.
	Numero_de_Agencia* numero_de_agencia;
	// Estado do teste.
	int estado;
	// Declara��es de m�todos.
	void set_up();
	void tear_down();
	void testar_cenario_sucesso();
	void testar_cenario_falha();
public:
	// Defini��es de constantes para reportar resultado do teste.
	const static int SUCESSO = 1;
	const static int FALHA = 0;
	int run();
};

class TUNumero_de_Conta {
private:
	// Defini��es de constantes para evitar numeros m�gicos.
	const std::string VALOR_VALIDO = "452765-1";
	const std::string VALOR_INVALIDO = "452765-2";
	// Refer�ncia para o objeto a ser testado.
	Numero_de_Conta* numero_de_conta;
	// Estado do teste.
	int estado;
	// Declara��es de m�todos.
	void set_up();
	void tear_down();
	void testar_cenario_sucesso();
	void testar_cenario_falha();
public:
	// Defini��es de constantes para reportar resultado do teste.
	const static int SUCESSO = 1;
	const static int FALHA = 0;
	int run();
};

class TUPreco {
private:
	// Defini��es de constantes para evitar numeros m�gicos.
	const float VALOR_VALIDO = 50.00;
	const float VALOR_INVALIDO = 6000 ;
	// Refer�ncia para o objeto a ser testado.
	Preco* preco;
	// Estado do teste.
	int estado;
	// Declara��es de m�todos.
	void set_up();
	void tear_down();
	void testar_cenario_sucesso();
	void testar_cenario_falha();
public:
	// Defini��es de constantes para reportar resultado do teste.
	const static int SUCESSO = 1;
	const static int FALHA = 0;
	int run();
};

class TUTelefone {
private:
	// Defini��es de constantes para evitar numeros m�gicos.
	const std::string VALOR_VALIDO = "55-61-999717293";
	const std::string VALOR_INVALIDO = "55-61-000000000";
	// Refer�ncia para o objeto a ser testado.
	Telefone* telefone;
	// Estado do teste.
	int estado;
	// Declara��es de m�todos.
	void set_up();
	void tear_down();
	void testar_cenario_sucesso();
	void testar_cenario_falha();
public:
	// Defini��es de constantes para reportar resultado do teste.
	const static int SUCESSO = 1;
	const static int FALHA = 0;
	int run();
};

class TUSenha {
private:
	// Defini��es de constantes para evitar numeros m�gicos.
	const std::string VALOR_VALIDO = "#1a$b";
	const std::string VALOR_INVALIDO = "12341";
	// Refer�ncia para o objeto a ser testado.
	Senha* senha;
	// Estado do teste.
	int estado;
	// Declara��es de m�todos.
	void set_up();
	void tear_down();
	void testar_cenario_sucesso();
	void testar_cenario_falha();
public:
	// Defini��es de constantes para reportar resultado do teste.
	const static int SUCESSO = 1;
	const static int FALHA = 0;
	int run();
};

class TUVagas {
private:
	// Defini��es de constantes para evitar numeros m�gicos.
	const static int VALOR_VALIDO = 3;
	const static int VALOR_INVALIDO = 10;
	// Refer�ncia para o objeto a ser testado.
	Vagas* vagas;
	// Estado do teste.
	int estado;
	// Declara��es de m�todos.
	void set_up();
	void tear_down();
	void testar_cenario_sucesso();
	void testar_cenario_falha();
public:
	// Defini��es de constantes para reportar resultado do teste.
	const static int SUCESSO = 1;
	const static int FALHA = 0;
	int run();
};

#endif