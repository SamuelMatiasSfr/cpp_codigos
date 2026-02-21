#include<iostream>

#include "ContaBancaria.h" 	//Criar
#include "questoes.h" 	//Fornecido

//Main deve ser devolvido sem altera��es.
int main(int argc, char **argv) {

	std::cout << "Prova Mensal Pr�tica 2� Bimestre (PMP2B)" << std::endl;
	std::cout << std::string(40, '_') << std::endl;

	questao1();

	questao2();

	questao3();

	std::cout << "Fim da prova." << std::endl;
	std::cout << std::string(40, '_') << std::endl;

	return 0;
}
