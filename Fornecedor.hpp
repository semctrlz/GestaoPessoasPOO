#pragma once
#ifndef Fornecedor_hpp
#define Fornecedor_hpp

#include "Pessoa.hpp"
using namespace std;

class Fornecedor : public Pessoa {
public:
	using Pessoa::Pessoa;
	Fornecedor() {};
	Fornecedor(string nome, string endereco, string telefone, float credito);
	float GetValorCredito();
	void SetValorCredito(float valor);
	float GetValorDivida();
	void SetValorDivida(float valor);
	float ObterSaldo();
	void Editar(string nome, string endereco, string telefone, float credito, float divida);
	void Imprime();
private:
	float valor_credito = 0.0f;
	float valor_divida = 0.0f;
	
};

#endif // !fornecedor_hpp
