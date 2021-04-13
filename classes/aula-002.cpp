#include <iostream>
using namespace std;

// Variáveis são valores guardados na memória

int main() {
	
	// Deve conter o TIPO e o NOME da variável e opcionalmente o valor inicial
	
	/*
		TIPOS em C++:
			int = valor inteiro (0, 1, 6, 9233463, 123, -167)
			char = para caractere com 1 Byte (ou seja, 1 letra/número) DEVEM SER USADO COM ' 
			string = Mais caracteres que o char DEVE SER USADO COM "
			double = número com casas decimais (0,78366; 9,39236; -1,2304483)
			float = número com casas decimais com menos precisão (1,9; 2,5; -9,3, 1,3)
			bool = TRUE ou FALSE
	*/
	
	int vidas = 0;
	char letra = 'P';
	double decimal = 5.98738734;
	float decimal2 = 5.2;
	bool vivo = true;
	string nome = "Pedro";
	
	// cout << = Usado para mostrar na tela
	// cin >> = Usado para ler valores do teclado
	
	cout << "Digite o numero de vidas: ";
	cin >> vidas;
	
	cout << "Digite uma letra: ";
	cin >> letra;
	
	cout << "Digite um numero decimal: ";
	cin >> decimal;
	
	cout << "Digite um nome: ";
	cin >> nome;
	
	cout << vidas << " Vidas\n";
	cout << letra << "\n";
	cout << decimal << "\n";
	cout << nome << "\n";
	return 0;
}

