#include <iostream>


using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");

	int p1,p2, p3, result;
	
	cout << "Informe a Primeira Nota";
	cin >> p1;
	
	cout << "Informe a Segunda Nota";
	cin >> p2;
	
	cout << "Informe a Terceira Nota";
	cin >> p3;
	
	result = (p1+p2+p3) / 3;
	
	if(result >= 7){
		cout << "voc� passou seu buxa, sua nota foi:" << result << " parab�ns";
	}
	if(result >= 5 && result <= 6){
		cout << "Est� de recupera��o";
	}
		if(result < 5){
		cout << "Est� reprovado";
	}
	
}
