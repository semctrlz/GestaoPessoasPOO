#include "Operario.hpp"

Operario::Operario(string nome, string endereco, string telefone, int setor, float salario, float comissao) {
	this->Empregado::Empregado(nome, endereco, telefone, setor, salario);
	this->comissao = comissao;
}

float Operario::GetValorProducao() {
	return this->valor_producao;
}

void Operario::SetValorProducao(float valor) {
	this->valor_producao = valor;
}

float Operario::GetPeComissao() {
	return this->comissao;
}

void Operario::SetPeComissao(float valor) {
	this->comissao = valor;
}

float Operario::CalculaSalario() {
	return this->Empregado::CalculaSalario() + (this->valor_producao * this->comissao);
}

void Operario::Editar(string nome, string telefone, string endereco, int setor, float salario, float Comissao, float valorProducao, float imposto) {
	this->Empregado::Editar(nome, endereco, telefone, setor, salario, imposto);
	this->comissao = Comissao >= 0 ? Comissao : this->comissao;
	this->valor_producao = valorProducao >= 0 ? valorProducao : this->valor_producao;
}

void Operario::Imprime() {
	this->Empregado::Imprime();
	cout << "Comissao: " << this->GetPeComissao() << endl;
	cout << "Valor Producao: " << this->GetValorProducao() << endl;
}