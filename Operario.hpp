#pragma once
#ifndef Operario_hpp
#define Operadop_hpp

#include "Empregado.hpp"
using namespace std;

class Operario : public Empregado {
public:
	using Empregado::Empregado;
	Operario() {};
	Operario(string nome, string telefone, string endereco, int setor, float salario, float Comissao);
	float GetValorProducao();
	void SetValorProducao(float valor);
	float GetPeComissao();
	void SetPeComissao(float valor);
	float CalculaSalario();
	void Editar(string nome, string telefone, string endereco, int setor, float salario, float Comissao, float valorProducao, float imposto);
	void Imprime();

private:
	float valor_producao = 0.0f;
	float comissao = 0.05f;
};


#endif // !Operario_hpp

