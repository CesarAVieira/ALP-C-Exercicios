/* Escreva um programa que leia um numero inteiro e apresente seu antecessor e seu sucessor */

#include <stdio.h>

int main ()
{
	int num, ant, suc;
	
	printf (" Digite o numero: ");
	scanf ("%d", &num);
	
	ant = num - 1;
	suc = num + 1;
	
	printf ("\n O antecessor e: %d", ant);
	printf ("\n O sucessor e: %d", suc);
	
/* Outra alternativa */

	printf ("\n\n Digite o numero: ");
	scanf ("%d", &num);
	printf ("\n O ntecessor e: %d", num-1);
	printf ("\n O sucessor e: %d", num+1);
	
	return (0);
}
