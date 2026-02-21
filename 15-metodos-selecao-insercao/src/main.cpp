/*

Descrição da tarefa:

1) Implementar ordena��o por sele��o e inser��o
a) Verificar cada algoritmo
b) Modificar a entrada e verificar o tempo de compilamento (entrada: 1000)
c) Verficar o exemplo do livro: ordena -> adenor

*/

#include "funcoes.h"

//ATIVIDADES DE SELE��O
void atividade1Selecao(){
	int vetor[1000];
	int tam=1000;

	for(int i=0; i<tam; i++){
		vetor[i] = i+1;
	}

	permut(vetor, tam);

	cout << "\nDesordenado: ";
	imprime(vetor, tam);

	cout << "\nSelec�o:\n";
	selecao(vetor, tam);
	cout << "Vetor: ";
	imprime(vetor, tam);
}

void atividade2Selecao(){
	string palavra = "ordena";

	int tam = palavra.length();

	cout << "\nDesordenado: ";
	imprimeString(palavra, tam);

	cout << "\nSelec�o:\n";
	selecaoString(palavra, tam);
	cout << "Palavra: ";
	imprimeString(palavra, tam);
}


//ATIVIDADES DE INSERC�O
void atividade1Insercao(){
	int vetor[1000];
	int tam=1000;

	for(int i=0; i<tam; i++){
		vetor[i] = i+1;
	}

	permut(vetor, tam);

	cout << "\nDesordenado: ";
	imprime(vetor, tam);

	cout << "\nInserc�o:\n";
	insercao(vetor, tam);
	cout << "Vetor: ";
	imprime(vetor, tam);
}

void atividade2Insercao(){
	string palavra = "ordena";

	int tam = palavra.length();

	cout << "\nDesordenado: ";
	imprimeString(palavra, tam);

	cout << "\nInserc�o:\n";
	insercaoString(palavra, tam);
	cout << "Palavra: ";
	imprimeString(palavra, tam);
}


int main(){
	setlocale(LC_ALL, "Portuguese");

	atividade1Selecao();
	atividade2Selecao();

	atividade1Insercao();
	atividade2Insercao();

	return 0;
}
