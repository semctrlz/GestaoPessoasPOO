#include "Pessoa.hpp"

Pessoa::Pessoa(string nome, string endereco, string telefone) {
	this->nome = nome;
	this->endereco = endereco;
	this->telefone = telefone;
}

string Pessoa::GetNome() {
	return this->nome;
}

void Pessoa::SetNome(string nome) {
	this->nome = nome;
}

string Pessoa::GetEndereco() {
	return this->endereco;
}

void Pessoa::SetEndereco(string endereco) {
	this->endereco = endereco;
}

string Pessoa::GetTelefone() {
	return this->telefone;
}

void Pessoa::SetTelefone(string telefone) {
	this->telefone = telefone;
}

void Pessoa::Editar(string nome, string endereco, string telefone) {
	this->nome = nome != "" ? nome : this->nome;
	this->endereco = endereco != "" ? endereco : this->endereco;
	this->telefone = telefone != "" ? telefone : this->telefone;
}

void Pessoa::Imprime() {	
	cout << "Nome: " << this->nome << endl;
	cout << "Endereco: " << this->endereco << endl;
	cout << "Telefone: " << this->telefone << endl;
}
