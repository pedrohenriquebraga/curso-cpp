// Usando o (do while).
// Ele executa pelo menos uma vez antes de testar a condição.

#include <iostream>
using namespace std;

int main() {

	int cont = 20;

	/*
		Sintaxe: 
			do {

				alguma coisa

			} while(condição);
	*/

	do {
		cout << "Testando - " << cont << "\n";
		cont++;
	} while (cont < 20);

	cout << "\nRotina finalizada!\n";

	return 0;
}