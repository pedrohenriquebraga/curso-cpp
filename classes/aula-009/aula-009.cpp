// Operadores l�gicos
// Retornam verdadeiro ou falso

#include <iostream>
using namespace std;

int main() {
	
	/* 
		Combina��es que retornam true:
		
		and ou && = TRUE e TRUE
		or ou || = TRUE e FALSE
							 TRUE e TRUE
		not ou ! = Inverte valores, ent�o FALSE � TRUE e TRUE � FAlSE
	*/
	
	int num = 12;
	
	if ((num >= 3 && num <= 6) || (num > 9 && num < 15) || (num > 15 && num < 20)) {
		cout << "Valor aceito\n";
	} else {
		cout << "Valor recusado\n";
	}
	
	return 0;
}

