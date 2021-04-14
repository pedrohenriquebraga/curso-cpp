// Variáveis globais e locais e Operadores Lógicos

#include <iostream>
using namespace std;

// == Variáveis Globais ==
// Podem ser usadas em qualquer lugar do código
int n1, n2;

int main() {
	// == Variáveis Locais ==
	// Só podem ser utilizadas dentro de onde foram declaradas
	int n3, n4;
	
	// Operadores Lógicos (matemáticos)
	/*
		OPERADORES:
			Multiplição = *
			Divisão = / 	
			Adição = +
			Subtração = -
			Resto da divisão = %
	*/
	
	int result;
	int result2;
	
	n1 = 1;
	n2 = 5;
	n3 = 34;
	n4 = 2;
	
	//	result = (n1 + n2) * n4;
	result = n3 / n2;
	result2 = n3 % n2;
	
	cout << "O resultado = " << result << "\nE o resto = " << result2 << "\n";
	
	return 0;
}
