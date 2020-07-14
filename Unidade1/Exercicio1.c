#include <stdio.h>

int main ()
{
//Exercicio 2 do livro
/* Escreva um programa que leia o nome de uma pessoa e imprima a seguinte mensagem,
na tela: "Bem-vindo(a) a disciplina de Algoritmos e Logica de Programacao II, "<nome>";
onde o campo <nome> deve ser substituido pelo nome informado pelo usuario. */
	char nome[30];
	
	printf ("Qual e o seu nome: ");
	scanf ("%s", nome);
	
	printf ("Bem-vindo(a) a disciplina de Algoritmos e Logica de Programacao II, %s!", nome);
	return (0);
}
