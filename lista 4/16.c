#include <stdio.h>



int main(){

  int numero;
  int soma=1;

     printf("\n digite um numero");
     scanf("\n %i",&numero);

     for(int i=1;i<=numero;i++){

         printf("\n sequencia = a 1/ %i",i);

         soma+=i;
     }

     printf("\n soma = a 1/ %i",soma);

     return 0;
}