// Multiplas váriaveis e constantes usando 'define'

#include <iostream>
using namespace std;

// Constantes
// Constantes são variáveis que não mudarão no tempo de execução.

#define pi 3.1415

// Definindo constantes com funções
#define canal cout << "Game Santos"

int main() {
	
	// Multiplas Variáveis
	
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
