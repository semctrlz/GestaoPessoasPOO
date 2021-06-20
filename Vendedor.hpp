#pragma once
#ifndef Vendedor_hpp
#define Vendedor_hpp

#include "Empregado.hpp"
using namespace std;

class Vendedor : public Empregado {
public:
	using Empregado::Empregado;
	Vendedor() {};
	Vendedor(string nome, string telefone, string endereco, int setor, float salario, float Comissao);
	float GetValorVendas();
	void SetValorVendas(float valor);
	float GetPeComissao();
	void SetPeComissao(float valor);
	float CalculaSalario();
	void Editar(string nome, string telefone, string endereco, int setor, float salario, float Comissao, float valorVenda, float imposto);
	void Imprime();
private:
	float valor_vendas = 0.0f;
	float comissao = 0.1f;
};



#endif // !Vendedor_hpp

