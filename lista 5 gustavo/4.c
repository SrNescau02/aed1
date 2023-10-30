#include <stdio.h>
#include <stdlib.h>



void funcao(int n,int vetor1[n], int vetor2[n], int vetor3[n] ){

    for(int i=0;i<n;i++){
        vetor3[i]=vetor1[i]+vetor2[i];
    }

}

int main(){
    int n;
    printf("\n digite a quntidade de termos");
    scanf("\n %i",&n);

    int *vetor1=(int *)malloc( n * sizeof(int));
    int *vetor2=(int *)malloc( n * sizeof(int));
    int *vetor3=(int *)malloc( n * sizeof(int));

        if (vetor1 == NULL || vetor2 == NULL || vetor3 == NULL) {
        perror("Erro na alocação de memória.");
        exit(1);
    }

    printf("Digite os valores do primeiro vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os valores do segundo vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor2[i]);
    }

    funcao(n,vetor1,vetor2,vetor3);

     printf("Resultado da soma dos vetores:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor3[i]);
    }

}