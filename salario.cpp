#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float sb, sa, d;
	cout << "Informe o saário base";
	cin >> sb;
	
	
	if(sb <=1500){
		sa= sb* 1.10;
		d = sa-sb;
		cout << "seu salário é de " <<sa<< " reais e a diferença foi de " <<d<< " reais";
		
	}
	
		if(sb >1500){
		sa= sb* 1.05;
		d = sa-sb;
		cout << "seu salário é de " <<sa<< " reais e a diferença foi de " <<d<< " reais";
	}
}	


