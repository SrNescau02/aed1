#include <stdio.h>
void fibonacci(int n){
    int sequencia2=1;
int sequencia1=1;
int sequencia=1;
     printf(" %i " , sequencia);
    for( int i=1; i<=n;i++){
        printf(" %i ", sequencia);
       sequencia=sequencia1+sequencia2;
       sequencia2=sequencia1;
       sequencia1=sequencia;

    }

}


int main(){
int n;

    printf("\n digite um numero");
    scanf("\n %i",&n);
    fibonacci(n);
  

}