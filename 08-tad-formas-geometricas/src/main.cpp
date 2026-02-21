#include <cstdio>
#include <iostream>
#include <clocale>
#include "Cubo.hpp"
#include "Cilindro.hpp"

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese.UTF-8");

	Cubo cubo(2.0);
	Cilindro cilindro(2.0, 2.0);

	cout << "O lado do cubo �: " <<	cubo.getXYZ() << endl;
	cout << "A �rea do cubo �: " << cubo.calcularArea() << endl;
	cout << "A �rea do cubo �: " << cubo.calcularVolume() << endl;
	cout << "O raio do cilindro �: " <<	cilindro.getRaio() << endl;
	cout << "O altura do cilindro �: " <<	cilindro.getAltura() << endl;
	cout << "A �rea do cilindro �: " << cilindro.calcularArea() << endl;
	cout << "A �rea do cilindro �: " << cilindro.calcularVolume() << endl;

	return 0;
}
