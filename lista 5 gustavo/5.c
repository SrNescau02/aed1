#include <stdio.h>
#include <stdlib.h>


int* funcao(int n,int vetor1[], int vetor2[]){
     int *vetor3=(int *)malloc( n * sizeof(int));
       if (vetor3 == NULL) {
        perror("Erro na alocação de memória.");
        exit(1);
    }
    for( int i=0; i < n; i++){
        vetor3[i]=vetor1[i]+vetor2[i];
    }
    return vetor3;

}


int main(){
    int n=3;
     int vetor1[3]={1,1,1};
    int  vetor2[3]={1,1,1};

 int* resultado = funcao(n, vetor1, vetor2);

 for (int i = 0; i < n; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

     free(resultado);
     
     return 0;

}