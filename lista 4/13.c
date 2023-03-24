#include <stdio.h>

int main(){

int numero;
int primo;
int contador=0;



printf("\n digite um numero a ser testado");
scanf("\n %i",&numero);


for(int i=2;i<=numero/2;i++){

    if(numero%i==0){

       contador ++;
    }
  

}
     
    if(contador==0){

        printf("\n numero primo");

    }else

        printf("\n numero nao primo");

return 0;
}