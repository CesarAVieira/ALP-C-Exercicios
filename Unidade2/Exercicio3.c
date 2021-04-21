/* Um programa para identificar se um número é par ou ímpar.
Se o número for par, irá apresentar sua raiz quadrada e, se
for ímpar, devemos apresentar o número elevado ao quadrado.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int quadrado, num;
	float raiz;
	
	printf ("\nDigite um número inteiro: ");
	scanf ("%d", &num);
	
	if (num % 2 == 0)
	{
		raiz = sqrt(num);
		printf ("\nO número é par.");
		printf ("\nA raiz quadrada é: %.3f", raiz);
	}
	else
	{
		quadrado = num * num;
		printf ("\nO número é impar.");
		printf ("\nO número ao quadrado é: %d", quadrado);
	}
	return (0);
}
