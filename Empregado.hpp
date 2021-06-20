#pragma once
#ifndef Empregado_hpp
#define Empregado_hpp

#include "Pessoa.hpp"
using namespace std;

class Empregado : public Pessoa {

public:	
	Empregado() :Pessoa() {};
	Empregado(string nome, string endereco, string telefone, int setor, float salario_base);
	int GetCodigoSetor();
	void SetCodigoSetor(int codigo);
	float GetSalarioBase();
	void SetSalarioBase(float salario);
	float GetValorImposto();
	float GetImposto();
	void SetImposto(float imposto);
	virtual float CalculaSalario();
	virtual void Editar(string nome, string endereco, string telefone, int setor, float salario_base, float imposto);
	virtual void Imprime();

protected:
	int codigo_setor = 0;
	float salario_base = 0.0f;
	float imposto = 0.2f;
};

#endif // !Empregado_hpp
