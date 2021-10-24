#include<stdio.h>
#include<locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
    int c, k;
    
    printf("Digite o valor em Celsius\n");
    scanf("%i", &c);
    
    k = 273 + c;
    
    printf ("O Valor de Celsius em Kelvin :\n%i", k);
    
    
    return 0;
    
    
}
