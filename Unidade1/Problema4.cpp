/* Escreva um programa que receba dois numero, calcule e apresente o resultado do primeiro numero elevado ao segundo. */

#include <stdio.h>
#include <math.h>

int main ()
{
	float num1, num2, total;
	
	printf (" Informe o primeiro numero: ");
	scanf ("%f", &num1);
	printf ("\n Informe o segundo numero: ");
	scanf ("%f", &num2);
	
	total = pow(num1, num2);
	printf ("\n %.2f elevado a %.2f e: %.2f", num1, num2, total);
	return (0);
}
