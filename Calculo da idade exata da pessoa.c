#include<stdio.h>
#include<math.h>
#include<locale.h>

int main (){
	/*08 - Faça um algoritmo que receba o ano 
	de nascimento de uma pessoa, o ano atual, 
	calcule e mostre, quantos anos essa pessoa tem. */
	
	setlocale (LC_ALL, "Portuguese");
	
	int nasc, ano_atual, calc;
	char nome[40];
	
	printf("Digite o nome da pessoa: ");
		scanf("%s", &nome);
	printf("\nDigite o ano de nascimento da pessoa: ");
		scanf("%i", &nasc);
	printf("\nDigite o ano atual: ");
		scanf("%i", &ano_atual);
	
	calc = (nasc-ano_atual)*(-1);
		printf("A idade do(a) %s é: %i", nome, calc);
		
	return 0;
}
