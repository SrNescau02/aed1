#include <stdio.h>

int
main ()
{
  float soma = 0;
  int a;
  int b;
  printf ("\n digite quantos numeros quer digitar");
  scanf ("\n %i", &a);

  for (int i = 0; i < a; i++)
    {

      scanf ("\n %i", &b);


      soma = soma + b;
    }
  printf ("\n soma dos numeros =%f", soma);


  return 0;
}
