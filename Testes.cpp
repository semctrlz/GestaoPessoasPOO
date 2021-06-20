#include "Testes.hpp"

void Testes::FonecedoresRun() {
	Fornecedor dunder = Fornecedor("Dunder Mifflin", "Slough Avenue 1725, Scranton - PA", "800-627-0114", 5000.0f);
	dunder.SetValorDivida(3500.0f);

	cout << "Nome: " << dunder.GetNome() << endl;
	cout << "Endereco: " << dunder.GetEndereco() << endl;
	cout << "Telefone: " << dunder.GetTelefone() << endl;

	cout << "Credito: " << dunder.GetValorCredito() << endl;
	cout << "Divida: " << dunder.GetValorDivida() << endl;
	cout << "Saldo: " << dunder.ObterSaldo() << endl;

	Fornecedor pennsylvania = Fornecedor("Pennsylvania paper", "Vine st, Scranton - PA", "570-343-1112", 2000);
	pennsylvania.SetValorDivida(1800);
	pennsylvania.SetNome("Pennsylvania paper & supply");
	pennsylvania.SetEndereco("Vine street, Scranton - PA");
	pennsylvania.SetTelefone("-1 570-343-1112");
	pennsylvania.SetValorCredito(2200);

	cout << "\n\nPennsylvania paper" << endl;
	cout << "Nome: " << pennsylvania.GetNome() << endl;
	cout << "Endereco: " << pennsylvania.GetEndereco() << endl;
	cout << "Telefone: " << pennsylvania.GetTelefone() << endl;

	cout << "Credito: " << pennsylvania.GetValorCredito() << endl;
	cout << "Divida: " << pennsylvania.GetValorDivida() << endl;
	cout << "Saldo: " << pennsylvania.ObterSaldo() << endl;

	system("pause");
}

void Testes::OperariosRun() {
	Operario derryl = Operario("Darryl", "Vine st, Scranton - PA", "570-343-1112", 2, 1200, 0.05);
	derryl.SetValorProducao(5000);

	derryl.SetNome("Darryl Philbin");
	derryl.SetEndereco("Vine street, Scranton - PA");
	derryl.SetTelefone("-1 570-343-1112");
	derryl.SetCodigoSetor(3);
	derryl.SetSalarioBase(1800);
	derryl.SetPeComissao(0.07);
	derryl.SetImposto(0.16);

	cout << "\n\nDerryl Philbin" << endl;
	cout << "Nome: " << derryl.GetNome() << endl;
	cout << "Endereco: " << derryl.GetEndereco() << endl;
	cout << "Telefone: " << derryl.GetTelefone() << endl;

	cout << "Setor: " << derryl.GetCodigoSetor() << endl;
	cout << "Salario base: " << "$" << derryl.GetSalarioBase() << endl;
	cout << "Valor Producao: " << derryl.GetValorProducao() << endl;
	cout << "Pe comissao: " << derryl.GetPeComissao() * 100 << "%" << endl;
	cout << "Valor imposto: " << "$" << derryl.GetImposto() * 100 << "%" << endl;
	cout << "Imposto: " << derryl.GetValorImposto() << endl;
	cout << "Salario Liquido: " << "$" << derryl.CalculaSalario() << endl;

	system("pause");

}

void Testes::VendedoresRun() {
	Vendedor dwight = Vendedor("Dwight", "Layton rd 1697", "555 11112222", 1, 2000, 0.1);
	dwight.SetValorVendas(10000);

	dwight.SetNome("Dwight Schrute");
	dwight.SetEndereco("Layton road, 1697");
	dwight.SetTelefone("-1 555 11112222");
	dwight.SetCodigoSetor(2);
	dwight.SetSalarioBase(2500);
	dwight.SetPeComissao(0.08);
	dwight.SetImposto(0.18);

	cout << "\n\nDwight Schrute" << endl;
	cout << "Nome: " << dwight.GetNome() << endl;
	cout << "Endereco: " << dwight.GetEndereco() << endl;
	cout << "Telefone: " << dwight.GetTelefone() << endl;

	cout << "Setor: " << dwight.GetCodigoSetor() << endl;
	cout << "Salario base: " << "$" << dwight.GetSalarioBase() << endl;
	cout << "Valor Producao: " << "$" << dwight.GetValorVendas() << endl;
	cout << "Pe comissao: " << dwight.GetPeComissao() * 100 << "%" << endl;
	cout << "Pe imposto: " << dwight.GetImposto() * 100 << "%" << endl;
	cout << "Valor imposto: " << "$" << dwight.GetValorImposto() << endl;
	cout << "Salario Liquido: " << "$" << dwight.CalculaSalario() << endl;

	system("pause");
}

void Testes::AdministradoresRun() {
	Administrador michael = Administrador("Michael ", "Sanderson Ave, 1798", "555 3333 3333", 1, 10000, 3500);

	michael.SetNome("Michael Scott");
	michael.SetEndereco("Sanderson Avenue, 1798");
	michael.SetTelefone("-1 555 3333 3333");
	michael.SetCodigoSetor(2);
	michael.SetSalarioBase(12000);
	michael.SetAjudaDeCusto(2000);
	michael.SetImposto(0.15);

	cout << "\n\nMichael Scott" << endl;
	cout << "Nome: " << michael.GetNome() << endl;
	cout << "Endereco: " << michael.GetEndereco() << endl;
	cout << "Telefone: " << michael.GetTelefone() << endl;

	cout << "Setor: " << michael.GetCodigoSetor() << endl;
	cout << "Salario base: " << "$" << michael.GetSalarioBase() << endl;
	cout << "Ajuda de custo: " << "$" << michael.GetAjudaDeCusto() << endl;
	cout << "Pe imposto: " << michael.GetImposto() * 100 << "%" << endl;
	cout << "Valor imposto: " << "$" << michael.GetValorImposto() << endl;
	cout << "Salario Liquido: " << "$" << michael.CalculaSalario() << endl;

	system("pause");
}