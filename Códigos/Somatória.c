/*
Crie uma fun��o sem parametro
que fa�a o somat�rio dos numeros pares de um 
intervalo informado pelo usu�rio.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

// declarando os prot�tipos das fun��es
void somatorio();

main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("###################################\n\n");
    somatorio();
    printf("\n\n###################################");

}
// implementando a fun��o
void somatorio()
{
	int n1, n2, sm, i;
	sm = 0;

   printf("Digite o 1� Valor para o Intervalo: ");
   scanf("%i",&n1);
   printf("Digite o 2� Valor para o Intervalo: ");
   scanf("%i",&n2);

   //system("cls");
// implementando o tratamento de Erros
   if(n1 < n2)
   {
   	  for(i=n1; i<=n2; i++)
   	  {
   	  	// calculando os valores pares
   	  	 if(i%2 == 0)//dividindo por 2 se resto == 0 � par
   	  	    sm+=i;// sm = sm + i;
	  }
      printf("\n\t O Resultado do Somat�rio �: %i.",sm) ;
   } 
   else if(n2 < n1)
         {
          for(i=n2; i<=n1; i++)
   	      {
   	     	// calculando os valores pares
   	  	    if(i%2 == 0)//dividindo por 2 se resto == 0 � par
   	  	       sm+=i;// sm = sm + i;
	      }  
          printf("\n\t O Resultado do Somat�rio �: %i.",sm) ;  	
		 }
}


