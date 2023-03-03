#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	string n;
	int i;
	
	cout << "Informe seu nome: ";
	cin >> n;
	
	system ("cls");
		
	cout << "Agora nos informe sua idade por favor: ";
	cin >> i;
	
	if(i<18){
		cout << n << ", você é menor de idade";
	}
	
	if(i>=18 && i<65){
		cout << n << ", você é adulto";
	}
	
	if(i>=65){
		cout << n << ", você é idoso";
	}
}
