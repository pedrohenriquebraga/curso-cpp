// Continuando o IF e ELSE e também GOTO
// NÃO USE MUITOS GOTO, isso é gambiarra :)

#include <iostream>
#include <cstdlib> // Usado para o cls funcionar
using namespace std;

int main() {
	
	int n1, n2, res = 0;
	char opc = 'N';
	
	
	// USADO GOTO
	
	// LABEL
	inicio: 
	
	system("cls");
	
	cout << "Digite o valor da primeira nota: ";
	cin >> n1;
	
	cout << "Digite o valor da segunda nota: ";
	cin >> n2;
	
	res = n1 + n2;
	
	/*
		>= 60: ALUNO APROVADO
		>= 40 E < 60: ALUNO EM RECUPERAÇÃO
		< 40: ALUNO REPROVADO
	*/
	
	if (res >= 60) {
		cout << "\n<< Aluno APROVADO >>\n";
	} else if (res >= 40) {
		cout << "<< Aluno EM RECUPERACAO >>";
	} else {
		cout << "<< Aluno REPROVADO >>";
	};
	
	cout << "\n\nDigitar outras notas? [s/n]: ";
	cin >> opc;
	
	if (opc == 's' or opc == 'S') {
		goto inicio;
	};
		
	return 0;
}

