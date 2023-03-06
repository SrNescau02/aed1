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
    float a,b,c;
    float delta;
    float baskara;
    float baskara2;
    printf("\n digite os valores de a,b e c");
    scanf("\n %f %f %f",&a,&b,&c);
    delta=pow(b,2)-4*a*c;
    baskara=(-b+pow(delta,1/2.0))/(2.0*a);
     baskara=(-b-pow(delta,1/2.0))/(2.0*a);
    printf("\n o valor é %f",baskara);
    printf("\n o valor é %f",baskara2);


  return 0;
}
