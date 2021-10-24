#include<stdio.h>
#include<math.h>
#include<locale.h>

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	int n1, n2;
	char nome[40];
	float calc;
	
	printf ("Digite o nome do aluno: ");
		scanf ("%s", &nome);
	printf ("Digite a primeira nota: ");
		scanf ("%i", &n1);
	printf ("Digite a segunda nota: ");
		scanf ("%i", &n2);
	
	calc = (n1 + n2)/2;
		printf ("A média do aluno %s é: %.2f", nome, calc);
	
	return 0;
	
}
