#pragma once
#ifndef Administrador_hpp
#define Administrador_hpp

#include "Empregado.hpp"
using namespace std;

class Administrador : public Empregado {
public:
	using Empregado::Empregado;
	Administrador() {};
	Administrador(string nome, string telefone, string endereco, int setor, float salario, float ajudaDeCusto);
	float GetAjudaDeCusto();
	void SetAjudaDeCusto(float ajudaDeCusto);
	float CalculaSalario();
	void Editar(string nome, string telefone, string endereco, int setor, float salario, float ajudaDeCusto, float imposto);
	void Imprime();

private:
	float ajuda_de_custo = 0.0f;
};


#endif // !Administrador_hpp
