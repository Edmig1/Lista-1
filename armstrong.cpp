#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
    int num, original_num, resto, resultado = 0, n = 0;
    cout << "Digite um n�mero inteiro: ";
    cin >> num;

    original_num = num;

    // Conta o n�mero de d�gitos
    while (original_num != 0)
    {
        original_num /= 10;
        n++;
    }

    original_num = num;

    // Calcula a soma dos cubos dos d�gitos
    while (original_num != 0)
    {
        resto = original_num % 10;
        resultado += pow(resto, n);
        original_num /= 10;
    }

    // Verifica se � um n�mero de Armstrong ou n�o
    if (resultado == num)
    {
        cout << num << " � um n�mero de Armstrong." << endl;
    }
    else
    {
        cout << num << " n�o � um n�mero de Armstrong." << endl;
    }

    return 0;
}
