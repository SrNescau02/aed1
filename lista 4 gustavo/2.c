#include <stdio.h>


int main(){

int vetor[3];
int n,contador=0;

     printf("\n digite 10 valores");
    for(int i=0; i<3;i++){
    scanf("\n %i",&vetor[i]);
    }

    printf("digite um valor");
    scanf("\n %i",&n);

    for(int i=0;i<3;i++){
        if( n==vetor[i]){
            printf(" \n posicao %i",i);
            contador++;
        }
    }
    printf("\n numero de ocorrencias %i",contador);


return 0;

}