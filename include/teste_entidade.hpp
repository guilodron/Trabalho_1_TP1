#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "entidade.hpp"

using namespace std;

class TUUsuario {
private:
// Defini��es de constantes para evitar numeros m�gicos.
    // const static char VALOR_VALIDO = 'Marcos';  // Usar em set_nome.
    // const static char VALOR_INVALIDO = 'ABC!!@';
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
    // const static char VALOR_VALIDO = 'Marcos';  // Usar em set_nome.
    // const static char VALOR_INVALIDO = 'ABC!!@';
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
    // const static char VALOR_VALIDO = 'Marcos';  // Usar em set_nome.
    // const static char VALOR_INVALIDO = 'ABC!!@';
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
    // const static char VALOR_VALIDO = 'Marcos';  // Usar em set_nome.
    // const static char VALOR_INVALIDO = 'ABC!!@';
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
