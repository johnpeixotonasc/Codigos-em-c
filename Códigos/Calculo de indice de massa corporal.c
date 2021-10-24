#include<stdio.h>
#include<math.h>

int main (){
	
	float imc, peso, alt;
	char nome[20];
	
	printf("Informe o nome do paciente:\n");
	scanf("%s",&nome);
	printf("\nInforme o peso:\n");
	scanf("%f",&peso);
	printf("\nInfome a altura:\n");
	scanf("%f",&alt);
	
	imc = peso/pow(alt,2);
		printf("\nO indice de IMC do paciente %s e: %.2f", nome ,imc);
}
