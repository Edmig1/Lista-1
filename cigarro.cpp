#include <iostream>

using namespace std;

int main()
{
    int idade, qtd_cigarros;
    cout << "Digite a idade da pessoa: ";
    cin >> idade;
    cout << "Digite a quantidade de cigarros que a pessoa fuma por dia: ";
    cin >> qtd_cigarros;

    int dias_perdidos = (qtd_cigarros * 10 * 365) / (24 * 60);
    cout << "Essa pessoa perdeu aproximadamente " << dias_perdidos << " dias de vida devido ao hábito de fumar." << endl;

    return 0;
}
