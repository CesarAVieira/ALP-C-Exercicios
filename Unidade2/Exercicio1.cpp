/* Desenvolva um algoritmo que, com base no valor IMC de uma pessoa,
imprima na tela a classificacao da pessoa, de acordo com a formula e a
tabela a seguir:

Formula:
IMC = PESO / ALTURA²

Tabela:
Menor que 21,0		-	Abaixo do peso
Entre 21,0 e 30,75	-	Peso padrao
Superior a 30,75	-	Obeso */
#include <stdio.h>
#include <stdlib.h>
int main(){
	float peso;
	float altura;
	float IMC;
	
	printf("Insira o peso: \n");
	scanf("%f", &peso);
	printf("Insira a altura:\n");
	scanf("%f",	&altura);
	
	IMC = peso/(altura*altura);
	printf("IMC: %.2f\n", IMC);
	
	if(IMC < 21.0){ 
		printf("Abaixo do peso.\n");
	}
	else{ 
		if(IMC > 30.75){
			printf("Obeso.\n");
		}
		else{ // Entre 21.0 e 30.75
			printf("Peso padrao. \n");
		}
	}
}
