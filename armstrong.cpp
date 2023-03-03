#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
    int num, original_num, resto, resultado = 0, n = 0;
    cout << "Digite um número inteiro: ";
    cin >> num;

    original_num = num;

    // Conta o número de dígitos
    while (original_num != 0)
    {
        original_num /= 10;
        n++;
    }

    original_num = num;

    // Calcula a soma dos cubos dos dígitos
    while (original_num != 0)
    {
        resto = original_num % 10;
        resultado += pow(resto, n);
        original_num /= 10;
    }

    // Verifica se é um número de Armstrong ou não
    if (resultado == num)
    {
        cout << num << " é um número de Armstrong." << endl;
    }
    else
    {
        cout << num << " não é um número de Armstrong." << endl;
    }

    return 0;
}
