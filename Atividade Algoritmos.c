#include<stdio.h>
#include<math.h>
#include<locale.h>

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	float m, trab_lab, ava_sem, exa_fin;
		
	printf("\nInsira a nota de trabalho em laboratório: ");
		scanf("%f", &trab_lab);
	
	printf("\nInsira a nota de avaliação semestral: ");
		scanf("%f", &ava_sem);
	
	printf("\nInsira a nota do exame final: ");
		scanf("%f", &exa_fin);
	
	m = ((trab_lab*2)+(ava_sem*3)+(exa_fin*5))/10;
		printf("\nA média ponderada do aluno é: %.2f",m);
	
	if (m >= 80 && m <= 100){
		printf("\n******************a******************");
	}
		
	else if ( m >= 70 && m <= 80){
		printf("\n******************B******************");
	}
		
	else if (m >= 60 && m <= 70){
		printf("\n******************C******************");
	}
		
	else if (m >= 50 && m <= 60){
		printf("\n******************D******************");
	}
	else{
		printf ("\n******************E******************");
	}
	
	return 0;
}
