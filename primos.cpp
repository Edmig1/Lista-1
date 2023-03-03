#include <iostream>
 
int main() {
 setlocale(LC_ALL, "Portuguese");
 int num, i, resultado = 0;
 
 printf("Digite um número: ");
 scanf("%d", &num);
 
 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0)
    printf("%d é um número primo\n", num);
 else
    printf("%d não é um número primo\n", num);
 
 return 0;
}
