/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int soma = 1;
  for (int i = 1; i <= 20; i++)

    soma=soma* i;

  printf ("\n soma dos numeros =%i", soma);


  return 0;
}
