#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
//Exercicio 3 do livro
/* Escreva um programa que leia um numero positivo inteiro e apresente o quadrado
e a raiz quadrada deste numero. */
	int numint, raiz;
	
	printf ("\n Digite um numero: ");
	scanf ("%d", &numint);
	
	raiz = sqrt(numint);
	
	printf ("A raiz quadrada de %d e %d", numint, raiz);
	return (0);
}
