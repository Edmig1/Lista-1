#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float sb, sa, d;
	cout << "Informe o sa�rio base";
	cin >> sb;
	
	
	if(sb <=1500){
		sa= sb* 1.10;
		d = sa-sb;
		cout << "seu sal�rio � de " <<sa<< " reais e a diferen�a foi de " <<d<< " reais";
		
	}
	
		if(sb >1500){
		sa= sb* 1.05;
		d = sa-sb;
		cout << "seu sal�rio � de " <<sa<< " reais e a diferen�a foi de " <<d<< " reais";
	}
}	


