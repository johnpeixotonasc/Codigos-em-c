#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
	/*09 - Faça um algoritmo que receba o valor de uma camiseta,
	 calcule e mostre o novo valor com um desconto de 10%.*/

	setlocale(LC_ALL, "Portuguese");
    
    float vm, calc;
    
    printf ("Informe o valor da camiseta:\n");
    scanf ("%f", &vm);
    
    calc = vm*0.9;
    
    printf ("O valor da camiseta com desconto é:\n%.2f", calc);
    
    return 0;
    
    
}
