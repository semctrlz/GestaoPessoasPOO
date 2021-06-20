#include "Administrador.hpp"

Administrador::Administrador(string nome, string endereco, string telefone, int setor, float salario, float ajudaDeCusto) {
	this->Empregado::Empregado(nome, endereco, telefone, setor, salario);
	this->ajuda_de_custo = ajudaDeCusto;
}

float Administrador::GetAjudaDeCusto() {
	return this->ajuda_de_custo;
}

void Administrador::SetAjudaDeCusto(float ajudaDeCusto) {
	this->ajuda_de_custo = ajudaDeCusto;
}

float Administrador::CalculaSalario() {
	return this->Empregado::CalculaSalario() + this->ajuda_de_custo;
}

void Administrador::Editar(string nome, string endereco, string telefone, int setor, float salario, float ajudaDeCusto, float imposto) {
	this->Empregado::Editar(nome, endereco, telefone, setor, salario, imposto);	
	this->ajuda_de_custo = ajudaDeCusto >= 0 ? ajudaDeCusto : this->ajuda_de_custo;	
}

void Administrador::Imprime() {	
	this->Empregado::Imprime();
	cout << "Ajuda de custo: " << this->ajuda_de_custo << endl;
}