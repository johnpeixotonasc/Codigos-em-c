#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
    int not1, not2;
    float mp;
    
    printf("Digite a primeira nota: ");
    scanf("%i",&not1);
    printf("Digite a segunda nota: ");
    scanf("%i",&not2);
    
    mp = ((not1*3)+(not2*7))/10;
    
    printf("A m�dia ponderada �: %.2f",mp);
    
    return 0;
    
}
