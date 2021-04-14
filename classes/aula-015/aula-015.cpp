// Usando o laço FOR
// Usado para fazer repetições com parada DETERMINADA.

#include <iostream>
using namespace std;

int main() {
	/*
		Sintaxe:
			for (contador; condição; incremento/decremento do contador) {
				alguma coisa
			};
	*/

	int x, y, z;

	//for (x = 0; x < 10; x++) {
	//	cout << x << "\n";
	//};

	/*
		for (x = 0, y = 1, z = 0; x <= 10 && z <= 6; x++, y += 2, z += 2) {
			cout << x << " - ";
			cout << y << " - ";
			cout << z << "\n";
		};
	*/

	for (int tmp = 0; tmp < 1000000000; tmp++); // Usado como pausa

	return 0;
};