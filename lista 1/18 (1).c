

#include <stdio.h>
#include <math.h>

int
main ()
{
    float x1,x2,y1,y2;
    float d;
  printf ("digite o valor de x1 e x2");
  scanf ("\n %f %f", &x1, &x2);
  printf ("digite o valor de y1 e y2");
  scanf ("\n %f %f", &y1 ,&y2);
  
  d=pow(pow(x2-x1,2)+pow(y2-y1,2),1/2.0);
  printf("\n o valor é=%f",d);

  return 0;
}

