#include "Empresa.hpp"


void Empresa::AdicionarPessoa(Fornecedor p) {
	this->fornecedores.push_back(p);
}

void Empresa::AdicionarPessoa(Administrador p) {
	this->administradores.push_back(p);
}

void Empresa::AdicionarPessoa(Operario p) {
	this->operarios.push_back(p);
}

void Empresa::AdicionarPessoa(Vendedor p) {
	this->vendedores.push_back(p);
}

void Empresa::ListarPessoas() {

	Utils u = Utils();

	vector <Pessoa> pessoas;

	for (Pessoa p : this->fornecedores) {
		pessoas.push_back(p);
	}

	for (Pessoa p : this->administradores) {
		pessoas.push_back(p);
	}

	for (Pessoa p : this->operarios) {
		pessoas.push_back(p);
	}

	for (Pessoa p : this->vendedores) {
		pessoas.push_back(p);
	}


	int index = 1;
	for (Pessoa p : pessoas) {
		cout << "\n" << index << "a pessoa" << endl;
		p.Imprime();
		index++;
	}

	u.PrintLine('=');
}

void Empresa::ListarFornecedores() {

	Utils u = Utils();

	int index = 1;
	for (Fornecedor f : this->fornecedores) {
		cout << "\n" << index << "o Fornecedor(a)" << endl;
		f.Imprime();
		index++;
	}

	u.PrintLine('=');
}

void Empresa::ListarEmpregados() {

	Utils u = Utils();


	int index = 1;

	for (Operario e : this->operarios) {
		cout << "\n" << index << "o Empregado(a) (Operario)" << endl;
		e.Imprime();
		index++;
	}

	for (Vendedor e : this->vendedores) {
		cout << "\n" << index << "o Empregado(a) (Vendedor)" << endl;
		e.Imprime();
		index++;
	}

	for (Administrador e : this->administradores) {
		cout << "\n" << index << "o Empregado(a) (Administrador)" << endl;
		e.Imprime();
		index++;
	}

	u.PrintLine('=');
}

void Empresa::ListarAdministradores() {
	Utils u = Utils();

	int index = 1;

	for (Administrador e : this->administradores) {
		cout << "\n" << index << "o Administrador(a)" << endl;
		e.Imprime();
		index++;
	}

	u.PrintLine('=');
}

void Empresa::ListarOperarios() {
	Utils u = Utils();

	int index = 1;

	for (Operario e : this->operarios) {
		cout << "\n" << index << "o Operario(a)" << endl;
		e.Imprime();
		index++;
	}

	u.PrintLine('=');
}

void Empresa::ListarVendedores() {
	Utils u = Utils();

	int index = 1;

	for (Vendedor e : this->vendedores) {
		cout << "\n" << index << "o Vendedor(a)" << endl;
		e.Imprime();
		index++;
	}

	u.PrintLine('=');
}

vector<Fornecedor> Empresa::GetFornecedores() {
	return this->fornecedores;
}

vector<Administrador> Empresa::GetAdministradores() {
	return this->administradores;
}

vector<Operario> Empresa::GetOperarios() {
	return this->operarios;
}

vector<Vendedor> Empresa::GetVendedores() {
	return this->vendedores;
}

void Empresa::EditarPessoa(int index, Fornecedor f) {
	Fornecedor forn = this->GetFornecedores()[index];
	forn.Pessoa::Editar(f.GetNome(), f.GetEndereco(), f.GetTelefone());

	this->fornecedores[index] = forn;
}

void Empresa::EditarPessoa(int index, Operario o) {
	Operario oper = this->GetOperarios()[index];
	oper.Empregado::Editar(o.GetNome(), o.GetEndereco(), o.GetTelefone(), o.GetCodigoSetor(), o.GetSalarioBase(), oper.GetImposto());	
	oper.SetPeComissao(o.GetPeComissao());

	this->operarios[index] = oper;
}

void Empresa::EditarPessoa(int index, Vendedor v) {
	Vendedor vend = this->GetVendedores()[index];
	vend.Empregado::Editar(v.GetNome(), v.GetEndereco(), v.GetTelefone(), v.GetCodigoSetor(), v.GetSalarioBase(), vend.GetImposto());
	vend.SetPeComissao(v.GetPeComissao());

	this->vendedores[index] = vend;
}

void Empresa::EditarPessoa(int index, Administrador a) {
	Administrador adm = this->GetAdministradores()[index];
	adm.Empregado::Editar(a.GetNome(), a.GetEndereco(), a.GetTelefone(), a.GetCodigoSetor(), a.GetSalarioBase(), adm.GetImposto());	
	adm.SetAjudaDeCusto(a.GetAjudaDeCusto());

	this->administradores[index] = adm;
}