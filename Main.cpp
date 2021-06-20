#include "Vendedor.hpp"
#include "Operario.hpp"
#include "Administrador.hpp"
#include "Fornecedor.hpp"
#include "Empresa.hpp"
#include "Utils.hpp"

#include "Testes.hpp"

#include <iostream>



int main()
{
	// Testes
	/*Testes::FonecedoresRun();
	Testes::OperariosRun();
	Testes::VendedoresRun();
	Testes::AdministradoresRun();*/

	Empresa dunder_mifflin = Empresa();

#pragma region Insercao Pessoas
	
	Fornecedor forn1 = Fornecedor("Paper Shop", "Glenmaura national, 2, , Scranton - PA", "+1 570-969-3100", 20000);
	forn1.SetValorDivida(4500);

	Fornecedor forn2 = Fornecedor("Pennsylvania paper & supply", "Vine st, Scranton - PA", "+1 570-343-1112", 22000);
	forn2.SetValorDivida(12000);

	Fornecedor forn3 = Fornecedor("XpedX", "Stafford Ave, 100, , Scranton - PA", "+1 570-347-5130", 18000);
	forn3.SetValorDivida(2000);

	Operario operario1 = Operario("Darryl Philbin", "S Main St, 730, Scranton - PA", "+1 570-112-3333", 2, 2000, 0.6);
	operario1.SetValorProducao(12000);
	Operario operario2 = Operario("Roy Anderson", "River St, 99, Scranton - PA", "+1 570-228-1155", 2, 2000, 0.6);
	operario2.SetValorProducao(8000);
	Operario operario3 = Operario("Val Johnson", "Elizabeth St, 134, Scranton - PA", "+1 570-552-1864", 2, 2000, 0.6);
	operario3.SetValorProducao(15000);
	Operario operario4 = Operario("Nate Nickerson", "Parnell St, 119, Scranton - PA", "+1 570-114-8585", 2, 2000, 0.6);
	operario4.SetValorProducao(3000);

	Vendedor vendedor1 = Vendedor("Dwight Schrute", "Layton rd 1697, Scranton - PA", "-", 1, 3100, 0.1);
	vendedor1.SetValorVendas(18000);
	Vendedor vendedor2 = Vendedor("Jim Halpert", "Redwood Dr, 39, Scranton - PA", "+1 570-335-1158", 1, 2800, 0.08);
	vendedor1.SetValorVendas(16000);
	Vendedor vendedor3 = Vendedor("Andy Bernard", "Salem Dr, 1697, Scranton - PA", "+1 570-886-115", 1, 2500, 0.08);
	vendedor1.SetValorVendas(8000);

	Administrador michael = Administrador("Michael Scott", "Sanderson Ave, 1798, , Scranton - PA", "555 3333 3333", 1, 10000, 3500);
	Administrador toby = Administrador("Toby Flenderson ", "1st St, 102", "555 4444 4444", 1, 6000, 2000);

	dunder_mifflin.AdicionarPessoa(forn1);
	dunder_mifflin.AdicionarPessoa(forn2);
	dunder_mifflin.AdicionarPessoa(forn3);

	dunder_mifflin.AdicionarPessoa(operario1);
	dunder_mifflin.AdicionarPessoa(operario2);
	dunder_mifflin.AdicionarPessoa(operario3);
	dunder_mifflin.AdicionarPessoa(operario4);

	dunder_mifflin.AdicionarPessoa(vendedor1);
	dunder_mifflin.AdicionarPessoa(vendedor2);
	dunder_mifflin.AdicionarPessoa(vendedor3);

	dunder_mifflin.AdicionarPessoa(michael);
	dunder_mifflin.AdicionarPessoa(toby);


#pragma endregion
	
	bool sair = false;
	Utils utils = Utils();
	string janela = "main";
	string digitado = "";
	int opcao = 0;
	int index_edicao = -1;

	while (!sair)
	{
		system("CLS ||clear");

		utils.Title("Dunder Mifflin Paper Company");

		if (janela == "main") {

			cout << "\n";

			cout << "Selecione Uma das opcoes abaixo.\n" << endl;

			cout << "1 - Relatorios" << endl;
			cout << "2 - Editar pessoa" << endl;
			cout << "3 - Incluir pessoa" << endl;

			cout << "\nDigite sua opcao ou \"S\" para sair: ";
			cin >> digitado;

			if (digitado == "S" || digitado == "s")
				break;

			else if (atoi(digitado.c_str()) == 1) {
				janela = "relatorios";
			}
			else if (atoi(digitado.c_str()) == 2) {
				janela = "editar";
			}
			else if (atoi(digitado.c_str()) == 3) {
				janela = "incluir";
			}
		}
		else if (janela == "relatorios") {
			utils.Title("RELATORIOS");
			cout << "\n";

			cout << "1 - Relatorio geral de pessoas" << endl;
			cout << "2 - Relatorio de fornecedores" << endl;
			cout << "3 - Relatorio de empregados" << endl;

			cout << "\nGidite sua opcao, \"S\" para sair ou \"V\" para voltar: ";
			cin >> digitado;

			if (digitado == "S" || digitado == "s")
				break;

			if (digitado == "v" || digitado == "V") {
				janela = "main";
			}
			else if (atoi(digitado.c_str()) == 1) {
				janela = "relatorios-pessoas";
			}
			else if (atoi(digitado.c_str()) == 2) {
				janela = "relatorios-fornecesores";
			}
			else if (atoi(digitado.c_str()) == 3) {
				janela = "relatorios-empregados";
			}

		}
		else if (janela == "relatorios-pessoas") {
			utils.Title("RELATORIO GERAL DE PESSOAS");
			dunder_mifflin.ListarPessoas();
			cout << "\nDigite \"S\" para sair ou \"V\" para voltar: ";
			cin >> digitado;

			//Sair da aplicação
			if (digitado == "S" || digitado == "s")
				break;

			if (digitado == "v" || digitado == "V") {
				janela = "relatorios";
			}
		}
		else if (janela == "relatorios-fornecesores") {
			utils.Title("RELATORIO DE FORNECEDORES");
			dunder_mifflin.ListarFornecedores();

			cout << "\nDigidite \"S\" para sair ou \"V\" para voltar: ";
			cin >> digitado;

			if (digitado == "S" || digitado == "s")
				break;

			if (digitado == "v" || digitado == "V") {
				janela = "relatorios";
			}
			else {

				int indice = atoi(digitado.c_str());

				if (indice > 0 && indice <= dunder_mifflin.GetFornecedores().size()) {

				}
			}
		}
		else if (janela == "relatorios-empregados") {
			utils.Title("RELATORIO DE EMPREGADOS");
			cout << "\n";
			cout << "1 - Relatorio geral de empregados" << endl;
			cout << "2 - Relatorio de Operarios" << endl;
			cout << "3 - Relatorio de Vendedores" << endl;
			cout << "4 - Relatorio de Administradores" << endl;

			cout << "\nDigite sua opcao, \"S\" para sair ou \"V\" para voltar: ";
			cin >> digitado;

			if (digitado == "S" || digitado == "s")
				break;

			if (digitado == "v" || digitado == "V") {
				janela = "relatorios";
			}
			else if (atoi(digitado.c_str()) == 1) {
				janela = "relatorios-geral-empregados";
			}
			else if (atoi(digitado.c_str()) == 2) {
				janela = "relatorios-operarios";
			}
			else if (atoi(digitado.c_str()) == 3) {
				janela = "relatorios-vendedores";
			}
			else if (atoi(digitado.c_str()) == 4) {
				janela = "relatorios-administradores";
			}
		}
		else if (janela == "relatorios-geral-empregados") {
			utils.Title("RELATORIO GERAL DE EMPREGADOS");
			dunder_mifflin.ListarEmpregados();

			cout << "\nDigite sua opcao, \"S\" para sair ou \"V\" para voltar: ";

			cin >> digitado;

			if (digitado == "S" || digitado == "s")
				break;

			if (digitado == "v" || digitado == "V") {
				janela = "relatorios-empregados";
			}
		}
		else if (janela == "relatorios-operarios") {
			utils.Title("RELATORIO DE OPERARIOS");
			dunder_mifflin.ListarOperarios();

			cout << "\nDigite sua opcao, \"S\" para sair ou \"V\" para voltar: ";

			cin >> digitado;

			if (digitado == "S" || digitado == "s")
				break;

			if (digitado == "v" || digitado == "V") {
				janela = "relatorios-empregados";
			}
		}
		else if (janela == "relatorios-vendedores") {
			utils.Title("RELATORIO DE VENDEDORES");
			dunder_mifflin.ListarVendedores();

			cout << "\nDigite sua opcao, \"S\" para sair ou \"V\" para voltar: ";

			cin >> digitado;

			if (digitado == "S" || digitado == "s")
				break;

			if (digitado == "v" || digitado == "V") {
				janela = "relatorios-empregados";
			}
		}
		else if (janela == "relatorios-administradores") {
			utils.Title("RELATORIO DE ADMINISTRADORES");
			dunder_mifflin.ListarAdministradores();

			cout << "\nDigite sua opcao, \"S\" para sair ou \"V\" para voltar: ";

			cin >> digitado;

			if (digitado == "S" || digitado == "s")
				break;

			if (digitado == "v" || digitado == "V") {
				janela = "relatorios-empregados";
			}
		}
		else if (janela == "editar") {
			utils.Title("EDITAR PESSOA");
			cout << "\n";

			cout << "Selecione Uma das opcoes abaixo.\n" << endl;

			cout << "1 - Editar fornecedores" << endl;
			cout << "2 - Editar empregados" << endl;

			cout << "\nDigite sua opcao, \"S\" para sair ou \"V\" para voltar: ";
			cin >> digitado;

			if (digitado == "S" || digitado == "s")
				break;

			if (digitado == "V" || digitado == "v")
				janela = "main";

			else if (atoi(digitado.c_str()) == 1) {
				janela = "editar-fornecedor";
			}
			else if (atoi(digitado.c_str()) == 2) {
				janela = "editar-empregados";
			}
		}
		else if (janela == "editar-fornecedor") {
			index_edicao = -1;
			utils.Title("EDITAR FORNECEDOR");
			dunder_mifflin.ListarFornecedores();

			cout << "Selecione o numero do fornecedor a editar, \"S\" para sair ou \"V\" para voltar.\n" << endl;

			cin >> digitado;

			if (digitado == "S" || digitado == "s")
				break;

			if (digitado == "V" || digitado == "v")
				janela = "editar";

			int index = atoi(digitado.c_str()) - 1;

			if (index >= 0 && index <= dunder_mifflin.GetFornecedores().size()) {
				index_edicao = index;
				janela = "editando-fornecedor";
			}
		}
		else if (janela == "editando-fornecedor") {
			if (index_edicao < 0 || index_edicao >= dunder_mifflin.GetFornecedores().size()) {
				janela = "editar-fornecedor";
			}
			else {
				bool voltar = false;
				Fornecedor f = dunder_mifflin.GetFornecedores()[index_edicao];
				utils.Title("EDITANDO " + f.GetNome());
				cout << "Digite os dados solicitados, \"S\" para sair ou \"V\" para voltar:" << endl;

				cout << "\nNome (" << f.GetNome() << "): ";
				string nome;
				string endereco;
				string telefone;
				string credito;

				cin.ignore();

				getline(cin, nome);

				if (nome == "S" || nome == "s")
					break;

				if (nome == "V" || nome == "v") {
					janela = "editar-fornecedor";
					voltar = true;
				}


				if (!voltar) {
					cout << "\nEndereco (" << f.GetEndereco() << "): ";
					getline(cin, endereco);

					if (endereco == "S" || endereco == "s")
						break;

					if (endereco == "V" || endereco == "v") {
						janela = "editar-fornecedor";
						voltar = true;
					}
				}

				if (!voltar) {
					cout << "\nTelefone (" << f.GetTelefone() << "): ";
					getline(cin, telefone);

					if (telefone == "S" || telefone == "s")
						break;

					if (telefone == "V" || telefone == "v") {
						janela = "editar-fornecedor";
						voltar = true;
					}
				}

				if (!voltar) {
					cout << "\nValor de credito: ";
					getline(cin, credito);

					if (credito == "S" || credito == "s")
						break;

					if (credito == "V" || credito == "v") {
						janela = "incluir";
						voltar = true;
					}
				}

				if (!voltar) {
					f.SetNome(nome);
					f.SetEndereco(endereco);
					f.SetTelefone(telefone);
					f.SetValorCredito(Utils::str_to_float(credito));
					dunder_mifflin.EditarPessoa(index_edicao, f);
					janela = "editar-fornecedor";
					index_edicao = -1;
				}
			}
		}
		else if (janela == "editar-empregados") {
			utils.Title("EDITAR EMPREGADO");
			cout << "\n";

			cout << "Selecione Uma das opcoes abaixo.\n" << endl;

			cout << "1 - Editar Operarios" << endl;
			cout << "2 - Editar Vendedores" << endl;
			cout << "3 - Editar Administradores" << endl;

			cout << "\nDigite sua opcao, \"S\" para sair ou \"V\" para voltar: ";
			cin >> digitado;

			if (digitado == "S" || digitado == "s")
				break;

			if (digitado == "V" || digitado == "v")
				janela = "editar";

			else if (atoi(digitado.c_str()) == 1) {
				janela = "editar-operario";
			}
			else if (atoi(digitado.c_str()) == 2) {
				janela = "editar-vendedor";
			}
			else if (atoi(digitado.c_str()) == 3) {
				janela = "editar-administrador";
			}
		}
		else if (janela == "editar-operario") {
			index_edicao = -1;
			utils.Title("EDITAR OPERARIO");
			dunder_mifflin.ListarOperarios();

			cout << "Selecione o numero do operario a editar, \"S\" para sair ou \"V\" para voltar.\n" << endl;

			cin >> digitado;

			if (digitado == "S" || digitado == "s")
				break;

			if (digitado == "V" || digitado == "v")
				janela = "editar";

			int index = atoi(digitado.c_str()) - 1;

			if (index >= 0 && index <= dunder_mifflin.GetOperarios().size()) {
				index_edicao = index;
				janela = "editando-operario";
			}
		}
		else if (janela == "editando-operario") {
			if (index_edicao < 0 || index_edicao >= dunder_mifflin.GetOperarios().size()) {
				janela = "editar-operario";
			}
			else {
				bool voltar = false;
				Operario o = dunder_mifflin.GetOperarios()[index_edicao];
				utils.Title("EDITANDO " + o.GetNome());
				cout << "Digite os dados solicitados, \"S\" para sair ou \"V\" para voltar:" << endl;

				cout << "\nNome (" << o.GetNome() << "): ";
				string nome;
				string endereco;
				string telefone;
				string setor;
				string salarioBase;
				string comissao;

				cin.ignore();

				getline(cin, nome);

				if (nome == "S" || nome == "s")
					break;

				if (nome == "V" || nome == "v") {
					janela = "editar-operario";
					voltar = true;
				}


				if (!voltar) {
					cout << "\nEndereco (" << o.GetEndereco() << "): ";
					getline(cin, endereco);

					if (endereco == "S" || endereco == "s")
						break;

					if (endereco == "V" || endereco == "v") {
						janela = "editar-operario";
						voltar = true;
					}
				}

				if (!voltar) {
					cout << "\nTelefone (" << o.GetTelefone() << "): ";
					getline(cin, telefone);

					if (telefone == "S" || telefone == "s")
						break;

					if (telefone == "V" || telefone == "v") {
						janela = "editar-operario";
						voltar = true;
					}
				}

				if (!voltar) {
					cout << "\nSetor (" << o.GetCodigoSetor() << "): ";
					getline(cin, setor);

					if (setor == "S" || setor == "s")
						break;

					if (setor == "V" || setor == "v") {
						janela = "editar-operario";
						voltar = true;
					}
				}

				if (!voltar) {
					cout << "\nSalario base (" << o.GetSalarioBase() << "): ";
					getline(cin, salarioBase);

					if (salarioBase == "S" || salarioBase == "s")
						break;

					if (salarioBase == "V" || salarioBase == "v") {
						janela = "editar-operario";
						voltar = true;
					}
				}

				if (!voltar) {
					cout << "\nPercentual Comissao (" << o.GetPeComissao() * 100 << '%' << "): ";
					getline(cin, comissao);

					if (comissao == "S" || comissao == "s")
						break;

					if (comissao == "V" || comissao == "v") {
						janela = "editar-operario";
						voltar = true;
					}
				}

				if (!voltar) {
					o.SetNome(nome);
					o.SetEndereco(endereco);
					o.SetTelefone(telefone);
					o.SetCodigoSetor(atoi(setor.c_str()));
					o.SetSalarioBase(Utils::str_to_float(salarioBase));
					o.SetPeComissao(Utils::str_to_float(comissao) / 100);
					dunder_mifflin.EditarPessoa(index_edicao, o);
					janela = "editar-operario";
					index_edicao = -1;
				}
			}
		}
		else if (janela == "editar-vendedor") {
			index_edicao = -1;
			utils.Title("EDITAR VENDEDOR");
			dunder_mifflin.ListarVendedores();

			cout << "Selecione o numero do vendedor a editar, \"S\" para sair ou \"V\" para voltar.\n" << endl;

			cin >> digitado;

			if (digitado == "S" || digitado == "s")
				break;

			if (digitado == "V" || digitado == "v")
				janela = "editar";

			int index = atoi(digitado.c_str()) - 1;

			if (index >= 0 && index <= dunder_mifflin.GetVendedores().size()) {
				index_edicao = index;
				janela = "editando-vendedor";
			}
		}
		else if (janela == "editando-vendedor") {
			if (index_edicao < 0 || index_edicao >= dunder_mifflin.GetVendedores().size()) {
				janela = "editar-vendedor";
			}
			else {
				bool voltar = false;
				Vendedor v = dunder_mifflin.GetVendedores()[index_edicao];
				utils.Title("EDITANDO " + v.GetNome());
				cout << "Digite os dados solicitados, \"S\" para sair ou \"V\" para voltar:" << endl;

				cout << "\nNome (" << v.GetNome() << "): ";
				string nome;
				string endereco;
				string telefone;
				string setor;
				string salarioBase;
				string comissao;

				cin.ignore();

				getline(cin, nome);

				if (nome == "S" || nome == "s")
					break;

				if (nome == "V" || nome == "v") {
					janela = "editar-vendedor";
					voltar = true;
				}


				if (!voltar) {
					cout << "\nEndereco (" << v.GetEndereco() << "): ";
					getline(cin, endereco);

					if (endereco == "S" || endereco == "s")
						break;

					if (endereco == "V" || endereco == "v") {
						janela = "editar-vendedor";
						voltar = true;
					}
				}

				if (!voltar) {
					cout << "\nTelefone (" << v.GetTelefone() << "): ";
					getline(cin, telefone);

					if (telefone == "S" || telefone == "s")
						break;

					if (telefone == "V" || telefone == "v") {
						janela = "editar-vendedor";
						voltar = true;
					}
				}

				if (!voltar) {
					cout << "\nSetor (" << v.GetCodigoSetor() << "): ";
					getline(cin, setor);

					if (setor == "S" || setor == "s")
						break;

					if (setor == "V" || setor == "v") {
						janela = "editar-vendedor";
						voltar = true;
					}
				}

				if (!voltar) {
					cout << "\nSalario base (" << v.GetSalarioBase() << "): ";
					getline(cin, salarioBase);

					if (salarioBase == "S" || salarioBase == "s")
						break;

					if (salarioBase == "V" || salarioBase == "v") {
						janela = "editar-vendedor";
						voltar = true;
					}
				}

				if (!voltar) {
					cout << "\nPercentual Comissao (" << v.GetPeComissao() * 100 << '%' << "): ";
					getline(cin, comissao);

					if (comissao == "S" || comissao == "s")
						break;

					if (comissao == "V" || comissao == "v") {
						janela = "editar-vendedor";
						voltar = true;
					}
				}

				if (!voltar) {
					v.SetNome(nome);
					v.SetEndereco(endereco);
					v.SetTelefone(telefone);
					v.SetCodigoSetor(atoi(setor.c_str()));
					v.SetSalarioBase(Utils::str_to_float(salarioBase));
					v.SetPeComissao(Utils::str_to_float(comissao) / 100);
					dunder_mifflin.EditarPessoa(index_edicao, v);
					janela = "editar-vendedor";
					index_edicao = -1;
				}
			}
		}
		else if (janela == "editar-administrador") {
			index_edicao = -1;
			utils.Title("EDITAR ADMINISTRADOR");
			dunder_mifflin.ListarAdministradores();

			cout << "Selecione o numero do vendedor a editar, \"S\" para sair ou \"V\" para voltar.\n" << endl;

			cin >> digitado;

			if (digitado == "S" || digitado == "s")
				break;

			if (digitado == "V" || digitado == "v")
				janela = "editar";

			int index = atoi(digitado.c_str()) - 1;

			if (index >= 0 && index <= dunder_mifflin.GetAdministradores().size()) {
				index_edicao = index;
				janela = "editando-administrador";
			}
		}
		else if (janela == "editando-administrador") {
			if (index_edicao < 0 || index_edicao >= dunder_mifflin.GetAdministradores().size()) {
				janela = "editar-administrador";
			}
			else {
				bool voltar = false;
				Administrador a = dunder_mifflin.GetAdministradores()[index_edicao];
				utils.Title("EDITANDO " + a.GetNome());
				cout << "Digite os dados solicitados, \"S\" para sair ou \"V\" para voltar:" << endl;

				cout << "\nNome (" << a.GetNome() << "): ";
				string nome;
				string endereco;
				string telefone;
				string salarioBase;
				string ajudaDeCusto;
				string setor;


				cin.ignore();

				getline(cin, nome);

				if (nome == "S" || nome == "s")
					break;

				if (nome == "V" || nome == "v") {
					janela = "editar-administrador";
					voltar = true;
				}


				if (!voltar) {
					cout << "\nEndereco (" << a.GetEndereco() << "): ";
					getline(cin, endereco);

					if (endereco == "S" || endereco == "s")
						break;

					if (endereco == "V" || endereco == "v") {
						janela = "editar-administrador";
						voltar = true;
					}
				}

				if (!voltar) {
					cout << "\nTelefone (" << a.GetTelefone() << "): ";
					getline(cin, telefone);

					if (telefone == "S" || telefone == "s")
						break;

					if (telefone == "V" || telefone == "v") {
						janela = "editar-administrador";
						voltar = true;
					}
				}

				if (!voltar) {
					cout << "\nSetor (" << a.GetCodigoSetor() << "): ";
					getline(cin, setor);

					if (setor == "S" || setor == "s")
						break;

					if (setor == "V" || setor == "v") {
						janela = "editar-administrador";
						voltar = true;
					}
				}

				if (!voltar) {
					cout << "\nSalario base (" << a.GetSalarioBase() << "): ";
					getline(cin, salarioBase);

					if (salarioBase == "S" || salarioBase == "s")
						break;

					if (salarioBase == "V" || salarioBase == "v") {
						janela = "editar-administrador";
						voltar = true;
					}
				}

				if (!voltar) {
					cout << "\nAjuda de custo (" << a.GetAjudaDeCusto() << "): ";
					getline(cin, ajudaDeCusto);

					if (ajudaDeCusto == "S" || ajudaDeCusto == "s")
						break;

					if (ajudaDeCusto == "V" || ajudaDeCusto == "v") {
						janela = "editar-administrador";
						voltar = true;
					}
				}

				if (!voltar) {
					a.SetNome(nome);
					a.SetEndereco(endereco);
					a.SetTelefone(telefone);
					a.SetCodigoSetor(atoi(setor.c_str()));
					a.SetSalarioBase(Utils::str_to_float(salarioBase));
					a.SetAjudaDeCusto(stof(ajudaDeCusto));
					dunder_mifflin.EditarPessoa(index_edicao, a);
					janela = "editar-administrador";
					index_edicao = -1;
				}
			}
		}
		else if (janela == "incluir") {
			utils.Title("INCLUIR");
			cout << "\n";

			cout << "Selecione Uma das opcoes abaixo.\n" << endl;

			cout << "1 - Incluir fornecedores" << endl;
			cout << "2 - Incluir empregados" << endl;

			cout << "\nDigite sua opcao, \"S\" para sair ou \"V\" para voltar: ";
			cin >> digitado;

			if (digitado == "S" || digitado == "s")
				break;

			if (digitado == "V" || digitado == "v")
				janela = "main";

			else if (atoi(digitado.c_str()) == 1) {
				janela = "incluindo-fornecedor";
			}
			else if (atoi(digitado.c_str()) == 2) {
				janela = "incluir-empregado";
			}
		}
		else if (janela == "incluindo-fornecedor") {
			bool voltar = false;
			utils.Title("INCLUINDO FORNECEDOR");
			cout << "Digite os dados solicitados, \"S\" para sair ou \"V\" para voltar:" << endl;

			cout << "\nNome: ";
			string nome;
			string endereco;
			string telefone;
			string credito;

			cin.ignore();

			getline(cin, nome);

			if (nome == "S" || nome == "s")
				break;

			if (nome == "V" || nome == "v") {
				janela = "incluir";
				voltar = true;
			}


			if (!voltar) {
				cout << "\nEndereco: ";
				getline(cin, endereco);

				if (endereco == "S" || endereco == "s")
					break;

				if (endereco == "V" || endereco == "v") {
					janela = "incluir";
					voltar = true;
				}
			}

			if (!voltar) {
				cout << "\nTelefone: ";
				getline(cin, telefone);

				if (telefone == "S" || telefone == "s")
					break;

				if (telefone == "V" || telefone == "v") {
					janela = "incluir";
					voltar = true;
				}
			}

			if (!voltar) {
				cout << "\nValor de credito: ";
				getline(cin, credito);

				if (credito == "S" || credito == "s")
					break;

				if (credito == "V" || credito == "v") {
					janela = "incluir";
					voltar = true;
				}
			}

			if (!voltar) {
				Fornecedor f = Fornecedor();
				f.SetNome(nome);
				f.SetEndereco(endereco);
				f.SetTelefone(telefone);
				f.SetValorCredito(Utils::str_to_float(credito));
				dunder_mifflin.AdicionarPessoa(f);
			}
		}
		else if (janela == "incluir-empregado") {
			utils.Title("INCLUIR EMPREGADO");
			cout << "\n";

			cout << "Selecione Uma das opcoes abaixo.\n" << endl;

			cout << "1 - Incluir Operario" << endl;
			cout << "2 - Incluir Vendedor" << endl;
			cout << "3 - Incluir Administrador" << endl;

			cout << "\nDigite sua opcao, \"S\" para sair ou \"V\" para voltar: ";
			cin >> digitado;

			if (digitado == "S" || digitado == "s")
				break;

			if (digitado == "V" || digitado == "v")
				janela = "main";

			else if (atoi(digitado.c_str()) == 1) {
				janela = "incluindo-operario";
			}
			else if (atoi(digitado.c_str()) == 2) {
				janela = "incluindo-vendedor";
			}
			else if (atoi(digitado.c_str()) == 3) {
				janela = "incluindo-administrador";
			}
		}
		else if (janela == "incluindo-operario") {
			bool voltar = false;
			utils.Title("INCLUINDO OPERARIO");
			cout << "Digite os dados solicitados, \"S\" para sair ou \"V\" para voltar:" << endl;

			cout << "\nNome : ";
			string nome;
			string endereco;
			string telefone;
			string setor;
			string salarioBase;
			string comissao;

			cin.ignore();

			getline(cin, nome);

			if (nome == "S" || nome == "s")
				break;

			if (nome == "V" || nome == "v") {
				janela = "incluir-empregado";
				voltar = true;
			}


			if (!voltar) {
				cout << "\nEndereco: ";
				getline(cin, endereco);

				if (endereco == "S" || endereco == "s")
					break;

				if (endereco == "V" || endereco == "v") {
					janela = "incluir-empregado";
					voltar = true;
				}
			}

			if (!voltar) {
				cout << "\nTelefone: ";
				getline(cin, telefone);

				if (telefone == "S" || telefone == "s")
					break;

				if (telefone == "V" || telefone == "v") {
					janela = "incluir-empregado";
					voltar = true;
				}
			}

			if (!voltar) {
				cout << "\nSetor: ";
				getline(cin, setor);

				if (setor == "S" || setor == "s")
					break;

				if (setor == "V" || setor == "v") {
					janela = "incluir-empregado";
					voltar = true;
				}
			}

			if (!voltar) {
				cout << "\nSalario base: ";
				getline(cin, salarioBase);

				if (salarioBase == "S" || salarioBase == "s")
					break;

				if (salarioBase == "V" || salarioBase == "v") {
					janela = "incluir-empregado";
					voltar = true;
				}
			}

			if (!voltar) {
				cout << "\nPercentual Comissao: ";
				getline(cin, comissao);

				if (comissao == "S" || comissao == "s")
					break;

				if (comissao == "V" || comissao == "v") {
					janela = "incluir-empregado";
					voltar = true;
				}
			}

			if (!voltar) {
				Operario o = Operario();
				o.SetNome(nome);
				o.SetEndereco(endereco);
				o.SetTelefone(telefone);
				o.SetCodigoSetor(atoi(setor.c_str()));
				o.SetSalarioBase(Utils::str_to_float(salarioBase));
				o.SetPeComissao(Utils::str_to_float(comissao) / 100);
				dunder_mifflin.AdicionarPessoa(o);
				index_edicao = -1;
			}
		}
		else if (janela == "incluindo-vendedor") {
			bool voltar = false;
			utils.Title("INCLUINDO VENDEDOR");
			cout << "Digite os dados solicitados, \"S\" para sair ou \"V\" para voltar:" << endl;

			cout << "\nNome: ";
			string nome;
			string endereco;
			string telefone;
			string setor;
			string salarioBase;
			string comissao;

			cin.ignore();

			getline(cin, nome);

			if (nome == "S" || nome == "s")
				break;

			if (nome == "V" || nome == "v") {
				janela = "incluir-empregado";
				voltar = true;
			}


			if (!voltar) {
				cout << "\nEndereco: ";
				getline(cin, endereco);

				if (endereco == "S" || endereco == "s")
					break;

				if (endereco == "V" || endereco == "v") {
					janela = "incluir-empregado";
					voltar = true;
				}
			}

			if (!voltar) {
				cout << "\nTelefone: ";
				getline(cin, telefone);

				if (telefone == "S" || telefone == "s")
					break;

				if (telefone == "V" || telefone == "v") {
					janela = "incluir-empregado";
					voltar = true;
				}
			}

			if (!voltar) {
				cout << "\nSetor: ";
				getline(cin, setor);

				if (setor == "S" || setor == "s")
					break;

				if (setor == "V" || setor == "v") {
					janela = "incluir-empregado";
					voltar = true;
				}
			}

			if (!voltar) {
				cout << "\nSalario base: ";
				getline(cin, salarioBase);

				if (salarioBase == "S" || salarioBase == "s")
					break;

				if (salarioBase == "V" || salarioBase == "v") {
					janela = "incluir-empregado";
					voltar = true;
				}
			}

			if (!voltar) {
				cout << "\nPercentual Comissao: ";
				getline(cin, comissao);

				if (comissao == "S" || comissao == "s")
					break;

				if (comissao == "V" || comissao == "v") {
					janela = "incluir-empregado";
					voltar = true;
				}
			}

			if (!voltar) {
				Vendedor v = Vendedor();
				v.SetNome(nome);
				v.SetEndereco(endereco);
				v.SetTelefone(telefone);
				v.SetCodigoSetor(atoi(setor.c_str()));
				v.SetSalarioBase(Utils::str_to_float(salarioBase));
				v.SetPeComissao(Utils::str_to_float(comissao) / 100);
				dunder_mifflin.AdicionarPessoa(v);
				index_edicao = -1;
			}
		}
		else if (janela == "incluindo-administrador") {
			bool voltar = false;
			utils.Title("INCLUINDO ADMINISTRADOR");
			cout << "Digite os dados solicitados, \"S\" para sair ou \"V\" para voltar:" << endl;

			cout << "\nNome: ";
			string nome;
			string endereco;
			string telefone;
			string salarioBase;
			string ajudaDeCusto;
			string setor;


			cin.ignore();

			getline(cin, nome);

			if (nome == "S" || nome == "s")
				break;

			if (nome == "V" || nome == "v") {
				janela = "incluir-empregado";
				voltar = true;
			}


			if (!voltar) {
				cout << "\nEndereco: ";
				getline(cin, endereco);

				if (endereco == "S" || endereco == "s")
					break;

				if (endereco == "V" || endereco == "v") {
					janela = "incluir-empregado";
					voltar = true;
				}
			}

			if (!voltar) {
				cout << "\nTelefone: ";
				getline(cin, telefone);

				if (telefone == "S" || telefone == "s")
					break;

				if (telefone == "V" || telefone == "v") {
					janela = "incluir-empregado";
					voltar = true;
				}
			}

			if (!voltar) {
				cout << "\nSetor: ";
				getline(cin, setor);

				if (setor == "S" || setor == "s")
					break;

				if (setor == "V" || setor == "v") {
					janela = "incluir-empregado";
					voltar = true;
				}
			}

			if (!voltar) {
				cout << "\nSalario base: ";
				getline(cin, salarioBase);

				if (salarioBase == "S" || salarioBase == "s")
					break;

				if (salarioBase == "V" || salarioBase == "v") {
					janela = "incluir-empregado";
					voltar = true;
				}
			}

			if (!voltar) {
				cout << "\nAjuda de custo: ";
				getline(cin, ajudaDeCusto);

				if (ajudaDeCusto == "S" || ajudaDeCusto == "s")
					break;

				if (ajudaDeCusto == "V" || ajudaDeCusto == "v") {
					janela = "incluir-empregado";
					voltar = true;
				}
			}

			if (!voltar) {
				Administrador a = Administrador();
				a.SetNome(nome);
				a.SetEndereco(endereco);
				a.SetTelefone(telefone);
				a.SetCodigoSetor(atoi(setor.c_str()));
				a.SetSalarioBase(Utils::str_to_float(salarioBase));
				a.SetAjudaDeCusto(stof(ajudaDeCusto));
				dunder_mifflin.AdicionarPessoa(a);
				index_edicao = -1;
			}
		}
	}
}



//Sistema Gestão de Pessoas
//Orientação a Objetos, Herança e Polimorfismo
//Para o desenvolvimento deste sistema, utilize C++ e siga os passos detalhados a seguir :
//
//  1. Criar uma Classe Pessoa contendo :
//      a.Os atributos com seus respectivos seletores(getters) e modificadores(setters),
//      b.Construtor padrão e pelo menos mais uma opção de construtor conforme sua
//        percepção.
//      c.Atributos :
//          i.String nome;
//          ii.String endereço;
//          iii.String telefone;

//  2. Considere, como subclasse da classe Pessoa(desenvolvida no exercício anterior) a classe Fornecedor.Considere:
//      a.Cada instância da classe Fornecedor tem, para além dos atributos que caracterizam a classe Pessoa, os atributos :
//          i.ValorCredito(correspondente ao crédito máximo atribuído ao fornecedor)
//          ii.ValorDivida(montante da dívida para com o fornecedor).
//          b.Implemente, além dos usuais métodos seletores e modificadores, um método obterSaldo() que devolve a 
//            diferença entre os valores dos atributos valorCredito e valorDivida.
//          c.Depois de implementada a classe Fornecedor, crie um programa de teste adequado que lhe 
//            permita verificar o funcionamento dos métodos implementados na classe Fornecedor e os herdados da classe Pessoa.

//  3. Desenvolva, como subclasse da classe Pessoa, a classe Empregado.Considere que :
//      a.Cada instância da classe Empregado tem, para além dos atributos que caracterizam a classe Pessoa, os atributos :
//          i.CodigoSetor(inteiro)
//          ii.SalarioBase(vencimento base)
//          iii.Imposto(porcentagem retida dos impostos).
//      b.Implemente um método calcularSalario().
//      c.Escreva um programa de teste adequado para a classe Empregado.

//  4. Implemente a classe Administrador como subclasse da classe Empregado.
//      a.Um determinado administrador tem como atributos, para além dos atributos da classe Pessoa e da classe Empregado, 
//        o atributo ajudaDeCusto(ajudas referentes a viagens, estadias, ...).
//      b.Note que deverá redefinir na classe Administrador o método herdado calcularSalario : o salário de um administrador 
//        é equivalente ao salário de um empregado usual acrescido da ajuda de custo).
//      c.Escreva um programa de teste adequado para esta classe.

//  5. Implemente a classe Operario como subclasse da classe Empregado.
//      a.Um determinado operário tem como atributos, para além dos atributos da classe Pessoa e da classe Empregado :
//          i.ValorProducao(que corresponde ao valor monetário dos artigos efetivamente produzidos pelo operário)
//          ii.Comissao(que corresponde à porcentagem do valorProducao que será adicionado ao vencimento base do operário).
//      b.Redefinir nesta subclasse o método herdado calcularSalario : o salário de um operário é equivalente ao 
//        salário de um empregado usual acrescido da referida comissão.
//      c.Escreva um programa de teste adequado para esta classe.

//  6. Implemente a classe Vendedor como subclasse da classe Empregado.
//      a.Um determinado vendedor tem como atributos, para além dos atributos da classe Pessoa e da 
//       classe Empregado, os atributos :
//          i.ValorVendas(correspondente ao valor monetário dos artigos vendidos)
//          ii.Comissao(porcentagem do valorVendas que será adicionado ao vencimento base do Vendedor).
//      b.Redefinir nesta subclasse o método herdado calcularSalario(o salário de um vendedor é equivalente 
//        ao salário de um empregado usual acrescido da referida comissão).
//      c.Escreva um programa de teste adequado para esta classe.

//  7. Implemente um sistema que permita trabalhar com empregados de diferentes tipos e tenha as opções de :
//      a.Incluir Pessoa
//      b.Atualizar Pessoa
//      c.Relatórios :
//          i.Pessoas : Listagem de todas as pessoas cadastradas no sistema, apresentando nome, endereço e telefone
//          ii.Fornecedores : Listagem de todos fornecedores e seus detalhes
//          iii.Empregados :
//              1. Todos : Listar todos empregados e seus salários calculados
//              2. Administradores e seus atributos específicos
//              3. Operários e seus atributos específicos
//              4. Vendedores e seus atributos específicos