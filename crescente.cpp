#include <iostream>


using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3;
	
	cout<< "----AVISO---- TODOS OS NÚMEROS DEVEM SER DIFERENTES ----AVISO----\n";
	
	cout << "Digite o primeiro número: ";
	cin >> n1;
	
	cout << "Digite o segundo número: ";
	cin >> n2;
	
	cout << "Digite o terceiro número: ";
	cin >> n3;
	
	
	if(n1> n2 && n1>n3 && n2>n3){
		cout << " A sequência crescente é " << n3 << ", " << n2 << " e "  << n1;
	}
	
		if(n1> n2 && n1>n3 && n3>n2){
		cout << " A sequência crescente é " << n2 << ", " << n3 << " e "  << n1;
	}
//	n2 maior
		if(n2> n1 && n2>n3 && n1>n3){
		cout << " A sequência crescente é " << n3 << ", " << n1 << " e "  << n2;
	}
	
		if(n2> n1 && n2>n3 && n3>n1){
		cout << " A sequência crescente é " << n1 << ", " << n3 << " e "  << n2;
	}
//	n3 maior
	if(n3> n1 && n3>n2 && n2>n1){
		cout << " A sequência crescente é " << n1 << ", " << n3 << " e "  << n2;
	}
	
		if(n3> n1 && n3>n2 && n1>n2){
		cout << " A sequência crescente é " << n1 << ", " << n3 << " e "  << n2;
	}
	
}
