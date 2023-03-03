#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int mes;
	
	do{
		cout << "informe um numero de 1 a 12: ";
		cin >> mes;
		switch(mes){
			case 0: cout << "burro dms";
			break;
			case 1: cout << "janeiro\n";
			break;
			case 2: cout << "fevereiro\n";
			break;
			case 3: cout << "março\n";
			break;
			case 4: cout << "abril\n";
			break;
			case 5: cout << "maio\n";
			break;
			case 6: cout << "junho\n";
			break;
			case 7: cout << "julho\n";
			break;
			case 8: cout << "agosto\n";
			break;
			case 9: cout << "setembro\n";
			break;
			case 10: cout << "outubro\n";
			break;
			case 11: cout << "novembro\n";
			break;
			case 12: cout << "dezembro\n";
			break;
		}
			break;
		}
		while(mes< 13 && mes>0);
		if (mes>=13 or mes<1){
			cout << "número inválido";
		}
		
	} 
