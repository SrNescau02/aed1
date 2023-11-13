#include <stdio.h>
#include <stdlib.h>


void funcao(int n, int vetor1[n],int vetor2[n],int vetor3[n]){
    for(int i=0;i<n;i++){
        vetor3[i]=vetor1[i]+vetor2[i];
    }
}


int main(){

     int n=3;
  

    int *vetor1=(int *)malloc(n * sizeof(int));
    int *vetor2=(int *)malloc(n * sizeof(int));
    int *vetor3=(int *)malloc(n * sizeof(int));

     for(int i=0;i<n;i++){
        scanf("\n %i",&vetor1[i]);
     }

     for(int i=0;i<n;i++){
        scanf("\n %i",&vetor2[i]);
     }

     funcao(n,vetor1,vetor2,vetor3);

     for(int i=0;i<n;i++){
        printf("\n %i", vetor3[i]);
     }
  

    free(vetor1);
    free(vetor2);
    free(vetor3);


}