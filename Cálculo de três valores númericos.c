#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int v1, v2, calc;
	
	printf ("Digite o primeiro valor: ");
		scanf ("%i", &v1);
	printf ("Digite o segundo valor: ");
		scanf ("%i", &v2);

	
	calc = v1 * v2;
	
	printf ("O resultado da somatória dos valores é: %i", calc);
	
	
}
