#pragma once
#ifndef Pessoa_hpp
#define Pessoa_hpp

#include <iostream>
#include <stdio.h>
using namespace std;

class Pessoa {
public:
	Pessoa() {};
	Pessoa(string nome, string endereco = "", string telefone = "");
	string GetNome();
	void SetNome(string nome);
	string GetEndereco();
	void SetEndereco(string endereco);
	string GetTelefone();
	void SetTelefone(string telefone);
	virtual void Editar(string nome, string telefone, string endereco);
	virtual void Imprime();
protected:
	string nome = "";
	string endereco = "";
	string telefone = "";
};


#endif // !pessoa_hpp


