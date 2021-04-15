// Matriz/Array bidimensionais

/*
	Basicamente são como arrays dentro de arrays.
	Funciona como uma tabela.
	
	SINTAXE:
	int matriz[tamanho das linhas][tamanho das colunas];	
	
	EXEMPLO:
	int matriz[3][4];

	matriz[0][0] = 5
	matriz[2][1] = 3
*/

#include <iostream>
using namespace std;

int main() {
  
	int matriz[3][4];
	
	//	matriz[0][0] = 0;
	//	matriz[0][1] = 0;
	//	matriz[0][2] = 0;
	//	matriz[0][3] = 0;	
	//	matriz[1][0] = 1;
	//	matriz[1][1] = 1;
	//	matriz[1][2] = 1;
	//	matriz[1][3] = 1;
	//	matriz[2][0] = 2;
	//	matriz[2][1] = 2;
	//	matriz[2][2] = 2;
	//	matriz[2][3] = 2;

	for (int l = 0; l < 3; l++) {
		for (int c = 0; c < 4; c++) {
			cout << "Adicione um valor na coluna " << c << " na linha " << l << ": ";
			cin >> matriz[l][c]; 
		};
	};
	
	for (int l = 0; l < 3; l++) {
		for (int c = 0; c < 4; c++) {
			cout << "[ " << matriz[l][c] << " ]" << " ";
		};
		cout << "\n";
	};
	
	return 0;
}

