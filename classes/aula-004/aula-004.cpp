// Vari�veis globais e locais e Operadores L�gicos

#include <iostream>
using namespace std;

// == Vari�veis Globais ==
// Podem ser usadas em qualquer lugar do c�digo
int n1, n2;

int main() {
	// == Vari�veis Locais ==
	// S� podem ser utilizadas dentro de onde foram declaradas
	int n3, n4;
	
	// Operadores L�gicos (matem�ticos)
	/*
		OPERADORES:
			Multipli��o = *
			Divis�o = / 	
			Adi��o = +
			Subtra��o = -
			Resto da divis�o = %
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
