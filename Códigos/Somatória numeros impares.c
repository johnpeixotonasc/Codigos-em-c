/*
Crie uma fun��o com parametro 
que fa�a o somatorio de numeros 
impares de um intervalo informado pelo usu�rio.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

// declarando o prot�tipo da fun��o
void somaimpar(int a, int b);

main()
{
    setlocale(LC_ALL,"Portuguese");

	int n1, n2;

   printf("Digite o 1� Valor para o Intervalo: ");
   scanf("%i",&n1);
   printf("Digite o 2� Valor para o Intervalo: ");
   scanf("%i",&n2);
// chamando a fun��o
   somaimpar(n1,n2);

}
//implementando a fun��o

void somaimpar(int a, int b)
{
	int i, sm;
	sm = 0;

// implementando o tratamento de Erros
   if(a < b)
   {
   	  for(i=a; i<=b; i++)
   	  {
   	  	// calculando os valores pares
   	  	 if(i%2 != 0)//dividindo por 2 se resto != 0 � impar
   	  	    sm+=i;// sm = sm + i;
	  }
      printf("\n\t O Resultado do Somat�rio �: %i.",sm) ;
   } 
   else if(b < a)
         {
          for(i=b; i<=a; i++)
   	      {
   	     	// calculando os valores pares
   	  	    if(i%2 != 0)//dividindo por 2 se resto != 0 � impar
   	  	       sm+=i;// sm = sm + i;
	      }  
          printf("\n\t O Resultado do Somat�rio �: %i.",sm) ;  	
	     }
	     else
	       printf("\n\n\n\t\t \" N�meros Iguais\" ");

}

