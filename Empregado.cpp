#include "Empregado.hpp"

Empregado::Empregado(string nome, string endereco, string telefone, int setor, float salario) {
	this->Pessoa::Pessoa(nome, endereco, telefone);
	this->codigo_setor = setor;
	this->salario_base = salario;
}

int Empregado::GetCodigoSetor() {
	return this->codigo_setor;
}

void Empregado::SetCodigoSetor(int codigo) {
	this->codigo_setor = codigo;
}

float Empregado::GetSalarioBase() {
	return this->salario_base;
}

void Empregado::SetSalarioBase(float salario) {
	this->salario_base = salario;
}

float Empregado::GetImposto() {
	return this->imposto;
}

void Empregado::SetImposto(float imposto) {
	this->imposto = imposto;
}

float Empregado::CalculaSalario() {
	return this->salario_base - (this->salario_base * this->imposto);
}

float Empregado::GetValorImposto() {
	return this->salario_base * this->imposto;
}

void Empregado::Editar(string nome, string endereco, string telefone, int setor, float salario_base, float imposto) {
	this->Pessoa::Editar(nome, endereco, telefone);
	this->codigo_setor = setor > 0 ? setor : this->codigo_setor;
	this->salario_base = salario_base > 0 ? salario_base : this->salario_base;
	this->imposto = imposto > 0 ? imposto : this->imposto;
}

void Empregado::Imprime() {
	this->Pessoa::Imprime();
	cout << "Setor: " << this->GetCodigoSetor() << endl;
	cout << "Salario base: " << this->GetSalarioBase() << endl;
	cout << "Impostos: " << this->GetImposto() << endl;
	cout << "Salario Liquido: " << this->CalculaSalario() << endl;
}