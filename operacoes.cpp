#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, rm, rme, rv, rd;
	string o;
	
	cout << "Informe o primeiro n�mero: ";
	cin >> n1;
	system("cls");
	
	cout << "Informe o segundo n�mero: ";
	cin >> n2;
	system("cls");
	
	rm= n1+n2;
	
	rme= n1-n2;
	
	rv= n1*n2;
	
	rd= n1/n2;
	
	cout<< "Opera��es: add, sub, mult e div\n";
	cout<< "Selecione uma das 4 opera��oes b�sicas: ";
	cin >> o;
	system("cls");
	
	if(o== "add"){
		cout << "o resultado � " <<rm;
	}
	
	if(o== "sub"){
		cout << "o resultado � " <<rme;
	}
	
	if(o== "mult"){
		cout << "o resultado � " <<rv;
	}
	
	if(o== "div"){
		cout << "o resultado � " <<rd;
	}
	
	
	
	
}
