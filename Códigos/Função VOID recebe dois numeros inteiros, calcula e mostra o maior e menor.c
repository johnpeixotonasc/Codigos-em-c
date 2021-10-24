/*
Atividades funções void e Tipadas:

01 - Faça uma função void que receba dois números inteiros, calcule e mostre o maior e menor.

02 - Faça uma função void que receba três números inteiros, mostre os números em ordem decrescente.

03 - Faça uma função tipada que receba três números inteiros, calcule e mostre o dobro dos números.

04 - Utilizando funções tipadas, faça um programa que calcule e mostre os resultados da formula de baskara.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

void calculo (int maior, int menor);

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	int a, b;
	printf ("Digite doi números inteiros: ");
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
