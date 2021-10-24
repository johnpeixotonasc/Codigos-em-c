/*
   Funções Tipadas
   
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>


int    soma(int a, int b);
float  teste(int a, int b, int soma);

main()
{
	int a, b, r_soma;
	float r_teste;
	
   printf("Digite o 1º Valor para o Intervalo: ");
   scanf("%i",&a);
   printf("Digite o 2º Valor para o Intervalo: ");
   scanf("%i",&b);

// fazendo a chamada das funções
   r_soma   = soma(a,b);
   r_teste  = teste(a,b,r_soma);
   
// mostrando os resultados
  printf("\n\t O Resultado da Soma é: %i",r_soma );
  printf("\m\t O Resultado do Teste é %f.",r_teste);
	
}
// implementando as funções
int soma(int a, int b)
{
	int sm;
	
	sm = a+ b;
	
   return sm;
}

float teste(int a, int b, int soma)
{
	float resp;
	
	resp = (a*b)/soma;
	
	return resp;
}
