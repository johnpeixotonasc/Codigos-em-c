/*
Atividades fun��es void e Tipadas:

01 - Fa�a uma fun��o void que receba dois n�meros inteiros, calcule e mostre o maior e menor.

02 - Fa�a uma fun��o void que receba tr�s n�meros inteiros, mostre os n�meros em ordem decrescente.

03 - Fa�a uma fun��o tipada que receba tr�s n�meros inteiros, calcule e mostre o dobro dos n�meros.

04 - Utilizando fun��es tipadas, fa�a um programa que calcule e mostre os resultados da formula de baskara.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

void calculo (int maior, int menor);

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	int a, b;
	printf ("Digite doi n�meros inteiros: ");
	scanf ("%i%i", &a, &b);
		calculo (a,b);
	
}

void calculo (int maior, int menor)

{
	if (maior>menor){
	printf ("\n MAIOR => %i \n MENOR => %i", maior, menor);
}
	else if (menor > menor){
		printf ("\n MAIOR => %i \n MENOR => %i", maior, menor);
	}
	else{
		printf ("\n IGUAIS %i = %i", maior, menor);
	}
	
	
}
