#include "Fornecedor.hpp"

Fornecedor::Fornecedor(string nome, string endereco, string telefone, float credito) {
	this->Pessoa::Pessoa(nome, endereco, telefone);
	this->valor_credito = credito;
}

float Fornecedor::GetValorCredito() {
	return this->valor_credito;
}

void Fornecedor::SetValorCredito(float valor_credito) {
	this->valor_credito = valor_credito;
}

float Fornecedor::GetValorDivida() {
	return this->valor_divida;
}

void Fornecedor::SetValorDivida(float valor_divida) {
	this->valor_divida = valor_divida;
}

float Fornecedor::ObterSaldo() {
	return this->valor_credito - this->valor_divida;
}

void Fornecedor::Editar(string nome, string endereco, string telefone, float credito, float divida) {
	this->Pessoa::Editar(nome, endereco, telefone);
	this->valor_credito = credito >= 0 ? credito : this->valor_credito;
	this->valor_divida = divida >= 0 ? divida : this->valor_divida;
}

void Fornecedor::Imprime() {
	this->Pessoa::Imprime();
	cout << "Credito: " << this->GetValorCredito() << endl;
	cout << "Divida: " << this->GetValorDivida() << endl;
	cout << "Saldo: "<<this->ObterSaldo() << endl;
}

