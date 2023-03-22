/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int contador = 0;
  int a;
  do
    {
      printf ("\n digite os numeros");
      scanf ("%i", &a);
      
      if (a == 5)
	{
	  contador++;
	}
	
    } while (a != -1);

  printf ("\n numero de vezes que o numero 5 foi digitada =%i", contador);
  return 0;
} 


