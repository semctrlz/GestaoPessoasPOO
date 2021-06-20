#include "Utils.hpp"

Utils::Utils(int largura) {
	this->largura = largura;
}

// Imprime o título do relatório
void Utils::Title(string title) {

	string espacoE = "";
	string espacoD = "";

	int esquerda = (this->largura - (title.length() + 2)) / 2;
	espacoE.resize(esquerda, ' ');

	int direita = this->largura - esquerda - title.length() - 2;
	espacoD.resize(direita, ' ');

	string separador = "";
	separador.resize(this->largura, '=');

	cout << separador << endl;
	cout << "|" << espacoE << title << espacoD << "|" << endl;
	cout << separador << endl;
}

void Utils::PrintLine(char s) {
	string linha = "";
	linha.resize(this->largura, s);
	cout << linha << endl;
}

float Utils::str_to_float(string& s) {
	if (!s.empty() && std::find_if(s.begin(), s.end(), [](unsigned char c) { return !std::isdigit(c); }) == s.end()) {
		return stof(s);
	}
	else {
		return 0.0f;
	}
}