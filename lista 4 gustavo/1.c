#include <stdio.h>


int main(){

    int vetor [10];
    int maior;


     printf("\n digite 10 valores");
    for(int i=0; i<10;i++){
    scanf("\n %i",&vetor[i]);

    maior=vetor[0];
    if( vetor[i]>maior){
        maior=vetor[i];
    }

    }

    printf("\n maior numero = %i",maior);



    return 0;
}