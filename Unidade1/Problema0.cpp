/* insere o conteudo do arquivo stdio.h */
#include <stdio.h>
int main()
{ 		/* DECLARACAO DAS VARIAVEIS */
	int idade, ano;
	float altura;
	char nome[30];
		/* ENTRADA DE DADOS */
	/* mensagem ao usuario */
	printf ("Digite o seu nome: ");
	scanf ("%s", nome); /* leitura do nome */
	/* mensagem ao usuario */
	printf ("Digite a idade: ");
	scanf ("%d", &idade); /* leitura da idade */
	/* mensagem ao usuario */
	printf ("Digite a altura: ");
	scanf ("%f", &altura); /* leitura da altura */
		/* PROCESSAMENTO */
	/* calculo do ano de nascimento */
	ano = 2020 - idade;
		/* SAIDA DE DADOS */
	printf ("\nO nome e: %s", nome);
	printf ("\nA altura e: %.2f", altura);
	printf ("\nA idade e: %d", idade);
	printf ("\nO ano de nascimento e: %d", ano);
	return (0);
}
