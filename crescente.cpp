#include <iostream>


using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3;
	
	cout<< "----AVISO---- TODOS OS N�MEROS DEVEM SER DIFERENTES ----AVISO----\n";
	
	cout << "Digite o primeiro n�mero: ";
	cin >> n1;
	
	cout << "Digite o segundo n�mero: ";
	cin >> n2;
	
	cout << "Digite o terceiro n�mero: ";
	cin >> n3;
	
	
	if(n1> n2 && n1>n3 && n2>n3){
		cout << " A sequ�ncia crescente � " << n3 << ", " << n2 << " e "  << n1;
	}
	
		if(n1> n2 && n1>n3 && n3>n2){
		cout << " A sequ�ncia crescente � " << n2 << ", " << n3 << " e "  << n1;
	}
//	n2 maior
		if(n2> n1 && n2>n3 && n1>n3){
		cout << " A sequ�ncia crescente � " << n3 << ", " << n1 << " e "  << n2;
	}
	
		if(n2> n1 && n2>n3 && n3>n1){
		cout << " A sequ�ncia crescente � " << n1 << ", " << n3 << " e "  << n2;
	}
//	n3 maior
	if(n3> n1 && n3>n2 && n2>n1){
		cout << " A sequ�ncia crescente � " << n1 << ", " << n3 << " e "  << n2;
	}
	
		if(n3> n1 && n3>n2 && n1>n2){
		cout << " A sequ�ncia crescente � " << n1 << ", " << n3 << " e "  << n2;
	}
	
}
