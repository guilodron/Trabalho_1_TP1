#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "entidade.hpp"

using namespace std;

class TUUsuario {
private:
// Defini��es de constantes para evitar numeros m�gicos.
    const static char VALOR_VALIDO_NOME = 'Marcos';
    const static char VALOR_INVALIDO_NOME = 'ABC!!@';
	const static char VALOR_VALIDO_TELEFONE = 'Marcos';
    const static char VALOR_INVALIDO_TELEFONE = 'ABC!!@';
	const static char VALOR_VALIDO_EMAIL = 'Marcos';
    const static char VALOR_INVALIDO_EMAIL = 'ABC!!@';
	const static char VALOR_VALIDO_SENHA = 'Marcos';
    const static char VALOR_INVALIDO_SENHA = 'ABC!!@';
	const static char VALOR_VALIDO_CPF = 'Marcos';
    const static char VALOR_INVALIDO_CPF = 'ABC!!@';
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
	const static int SUCESSO = 1;
	const static int FALHA = 0;
	int run();
};

class TUReserva {
private:
// Defini��es de constantes para evitar numeros m�gicos.
    const static char VALOR_VALIDO_CODIGO = 'Marcos';  // Usar em set_nome.
    const static char VALOR_INVALIDO_CODIGO = 'ABC!!@';
	const static char VALOR_VALIDO_ASSENTO = 'Marcos';
    const static char VALOR_INVALIDO_ASSENTO = 'ABC!!@';
	const static char VALOR_VALIDO_BAGAGEM = 'Marcos';
    const static char VALOR_INVALIDO_BAGAGEM = 'ABC!!@';
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
	const static int SUCESSO = 1;
	const static int FALHA = 0;
	int run();
};

class TUCarona {
private:
// Defini��es de constantes para evitar numeros m�gicos.
    const static char VALOR_VALIDO_CODIGO = 'Marcos';  // Usar em set_nome.
    const static char VALOR_INVALIDO_CODIGO = 'ABC!!@';\
	const static char VALOR_VALIDO_CIDADE_ORIGEM = 'Marcos';  // Usar em set_nome.
    const static char VALOR_INVALIDO_CIDADE_ORIGEM = 'ABC!!@';
	const static char VALOR_VALIDO_ESTADO_ORIGEM = 'Marcos';  // Usar em set_nome.
    const static char VALOR_INVALIDO_ESTADO_ORIGEM = 'ABC!!@';
	const static char VALOR_VALIDO_CIDADE_DESTINO = 'Marcos';  // Usar em set_nome.
    const static char VALOR_INVALIDO_CIDADE_DESTINO = 'ABC!!@';
	const static char VALOR_VALIDO_ESTADO_DESTINO = 'Marcos';  // Usar em set_nome.
    const static char VALOR_INVALIDO_ESTADO_DESTINO = 'ABC!!@';
	const static char VALOR_VALIDO_DATA = 'Marcos';  // Usar em set_nome.
    const static char VALOR_INVALIDO_DATA = 'ABC!!@';
	const static char VALOR_VALIDO_DURACAO = 'Marcos';  // Usar em set_nome.
    const static char VALOR_INVALIDO_DURACAO = 'ABC!!@';
	const static char VALOR_VALIDO_VAGAS = 'Marcos';  // Usar em set_nome.
    const static char VALOR_INVALIDO_VAGAS = 'ABC!!@';
	const static char VALOR_VALIDO_PRECO = 'Marcos';  // Usar em set_nome.
    const static char VALOR_INVALIDO_PRECO = 'ABC!!@';
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
	const static int SUCESSO = 1;
	const static int FALHA = 0;
	int run();
};

class TUConta {
private:
// Defini��es de constantes para evitar numeros m�gicos.
    const static char VALOR_VALIDO_CODIGO = 'Marcos';  // Usar em set_nome.
    const static char VALOR_INVALIDO_CODIGO = 'ABC!!@';
	const static char VALOR_VALIDO_AGENCIA = 'Marcos';  // Usar em set_nome.
    const static char VALOR_INVALIDO_AGENCIA = 'ABC!!@';
	const static char VALOR_VALIDO_CONTA = 'Marcos';  // Usar em set_nome.
    const static char VALOR_INVALIDO_CONTA = 'ABC!!@';
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
	const static int SUCESSO = 1;
	const static int FALHA = 0;
	int run();
};
