// Operador ternário

#include <iostream>
using namespace std;

int main() {
	
	// SINTAXE: (teste lógico) ? (se verdadeiro) : (se falso)
	
	int n1, n2, nota = 0;
	string res;
	
	cout << "Digite o valor da primeira nota: ";
	cin >> n1;
	
	cout << "Digite o valor da segunda nota: ";
	cin >> n2;
	
	nota = n1 + n2;
	//	(nota >= 60) ? res = "APROVADO" : res = "REPROVADO";
	res = (nota >= 60) ? "APROVADO" : "REPROVADO";

	cout << "Situacao do aluno: " << res;
	
	return 0;
}

