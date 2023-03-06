/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int
main ()
{
    float numero=0;
    printf("\n digite um valor");
    scanf("\n &f",&numero);
    printf("\n o numero ao cubo é %2.f",pow(numero,3.0));
    printf("\n a raiz quadrada do numero  %2.f",pow(numero,1/2.0));
    printf("\n  a raiz cubica do numero %2.f",pow(numero,1/3.0));
    printf("\n  o seno do numero %2.f",sin(numero));
    printf("\n  o coseno do numero %2.f",cos(numero));
    

  return 0;
}
