// Array/vetor
// É uma coleção de variáveis de mesmo tipo

#include <iostream>
using namespace std;

int main() {
	
	int vetor[5] = {10, 20, 30, 40, 50}; // Com limite de 5 elementos
	
	for (int i = 0; i < sizeof(vetor)/4; i++) {
		cout << "The value position of " << vetor[i] << " is " << i << "\n";
	};
	
	return 0;
}
