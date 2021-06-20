#include "Vendedor.hpp"

Vendedor::Vendedor(string nome, string endereco, string telefone, int setor, float salario, float comissao) {
	this->Empregado::Empregado(nome, endereco, telefone, setor, salario);
	this->comissao = comissao;
}

float Vendedor::GetValorVendas() {
	return this->valor_vendas;
}

void Vendedor::SetValorVendas(float valor) {
	this->valor_vendas = valor;
}

float Vendedor::GetPeComissao() {
	return this->comissao;
}

void Vendedor::SetPeComissao(float valor) {
	this->comissao = valor;
}

float Vendedor::CalculaSalario() {
	return this->Empregado::CalculaSalario() + (this->valor_vendas * this->comissao);
}

void Vendedor::Editar(string nome, string telefone, string endereco, int setor, float salario, float Comissao, float valorVendas, float imposto) {
	this->Empregado::Editar(nome, endereco, telefone, setor, salario, imposto);
	this->comissao = Comissao >= 0 ? Comissao : this->comissao;
	this->valor_vendas = valorVendas >= 0 ? valorVendas : this->valor_vendas;
}

void Vendedor::Imprime() {
	this->Empregado::Imprime();
	cout << "Comissao: " << this->GetPeComissao() << endl;
	cout << "Valor vendas: " << this->GetValorVendas() << endl;
}