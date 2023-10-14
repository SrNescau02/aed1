#include <stdio.h>




int main(){

    float vetor [3];
    float maior;


 
    for(int i=0; i<3;i++){
           printf("\n digite 3 valores");
    scanf("\n %f",&vetor[i]);

    vetor[0]=maior;
    if( vetor [i]>maior){
        maior=vetor[i];
    }

    }

    printf("\n maior numero = %f",maior);











    return 0;
}