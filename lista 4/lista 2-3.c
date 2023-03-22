/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int a = 0;
  float menor = 0;
  float maior = 0;
  for (int i = 0; i < 2; i++)
    {
      printf ("\n digite 10 numeros");
      scanf ("\n %i", &a);
      if(i==0){
          menor=a;
      }
      
      
      if (a > maior)
	{
	  maior = a;
	}
       if (a < menor)
	{
	  menor = a;
	}



    }
  printf ("\n maior numero =%f e menor numero=%f", maior, menor);
}
