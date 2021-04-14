// Incremento e decremento de variáveis com operadores pós e pré-incremento/decremento

#include <iostream>
using namespace std;

int main() {
	
	int n1 = 0;
	
	/* -=-=-= Incremento -=-=-= */
						
	// Forma tradicional de incremento: n1 = n1 + 1;
	// Forma reduzida: n1 += 1;
	// Forma usando ++: n1++;

	/* -=-=-= Decremento -=-=-= */
	
	// Forma tradicional de decremento: n1 = n1 - 1;
	// Forma reduzida: n1 -= 1;
	// Forma usando --: n1--;
		
	/* -=-=-= Pós e Pré -=-=-= */
		
	// O ++ e o -- podem ser usados antes ou depois da variável.
	// Isso indica se o programa deve incrementar/decrementar a variável antes ou depois de guardar/usar o novo valor.
	// Exemplo: n1--; ou --n1;
		
	cout << n1;
	
	return 0;
}

