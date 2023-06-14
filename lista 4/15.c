#include <stdio.h>



int main(){

int numero;
int sequencia1;

int a=0;
int b=1;
   printf("\n digite um valor");
   scanf("\n %i",&numero);


    for(int i=1;i<=numero;i++){
    
        sequencia1=a+b;
        a=b;
        b=sequencia1;

       
    printf("\n valor sequencial \n %i",sequencia1);
}



}