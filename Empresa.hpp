#pragma once
#ifndef Empresa_hpp
#define Empresa_hpp

#include <vector>
#include "Fornecedor.hpp"
#include "Administrador.hpp"
#include "Operario.hpp"
#include "Vendedor.hpp"
#include "Utils.hpp"

class Empresa {
public:
	void ListarPessoas();
	void ListarFornecedores();
	void ListarEmpregados();
	void ListarAdministradores();
	void ListarVendedores();
	void ListarOperarios();
	void AdicionarPessoa(Fornecedor p);
	void AdicionarPessoa(Administrador p);
	void AdicionarPessoa(Operario p);
	void AdicionarPessoa(Vendedor p);
	void EditarPessoa(int indice, Fornecedor p);
	void EditarPessoa(int indice, Administrador p);
	void EditarPessoa(int indice, Operario p);
	void EditarPessoa(int indice, Vendedor p);
	

	vector<Fornecedor> GetFornecedores();
	vector<Administrador> GetAdministradores();
	vector<Operario> GetOperarios();
	vector<Vendedor> GetVendedores();

private:	
	vector<Fornecedor> fornecedores;
	vector<Administrador> administradores;
	vector<Operario> operarios;
	vector<Vendedor> vendedores;

};

#endif // !Empresa_hpp
