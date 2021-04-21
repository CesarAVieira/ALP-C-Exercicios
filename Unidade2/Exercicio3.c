/* Um programa para identificar se um n�mero � par ou �mpar.
Se o n�mero for par, ir� apresentar sua raiz quadrada e, se
for �mpar, devemos apresentar o n�mero elevado ao quadrado.*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int quadrado, num;
	float raiz;
	
	printf ("\nDigite um n�mero inteiro: ");
	scanf ("%d", &num);
	
	if (num % 2 == 0)
	{
		raiz = sqrt(num);
		printf ("\nO n�mero � par.");
		printf ("\nA raiz quadrada �: %.3f", raiz);
	}
	else
	{
		quadrado = num * num;
		printf ("\nO n�mero � impar.");
		printf ("\nO n�mero ao quadrado �: %d", quadrado);
	}
	return (0);
}
