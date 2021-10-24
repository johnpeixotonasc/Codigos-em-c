/*10 - Faça um algoritmo que receba o 
tempo em horas, calcule e mostre o 
mesmo tempo em segundos.*/

#include<stdio.h>
#include<math.h>
#include<locale.h>

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	int temp, calc;
	
	printf("Informe o tempo em horas: ");	
	 scanf("%i", &temp);
	 
	calc = temp * 3600;
	
	printf("\nAs horas informadas em segundos é: %i", calc);
	
}
