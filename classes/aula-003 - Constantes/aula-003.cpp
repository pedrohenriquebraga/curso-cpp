// Multiplas v�riaveis e constantes usando 'define'

#include <iostream>
using namespace std;

// Constantes
// Constantes s�o vari�veis que n�o mudar�o no tempo de execu��o.

#define pi 3.1415

// Definindo constantes com fun��es
#define canal cout << "Game Santos"

int main() {
	
	// Multiplas Vari�veis
	
	/* 
		Forma tradicional usada:
			int vidas;
			int tiros;
			int life;
	*/
	
	// Forma reduzida
	int vidas = 3, tiros = 500, life = 100;
	
	// Constantes
	cout << pi << "\n";
	canal;
	
	return 0;
}
