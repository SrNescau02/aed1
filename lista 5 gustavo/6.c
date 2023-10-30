#include <stdio.h>
#include <stdlib.h>

int** funcao(int** matriz1, int** matriz2, int l, int c){
    int** matriz3=(int**)malloc(l*sizeof(int*));

    for(int i=0;i<l;i++){
        matriz3[i]=(int*)malloc(c * sizeof(int));
    

    for(int j=0;j<l;j++){
        matriz3[i][j]=0;
        for(int k=0;k<c;k++){
            matriz3[i][j]=matriz1[i][k] * matriz2[k][j];
        }
    }

}
return matriz3;
}

int main(){
    int l,c;

    printf("\n digite o tamanho da linha e da coluna");
    scanf("\n %i %i", &l,&c);

    int** matriz1 =(int**)malloc(l * sizeof(int*));
    int** matriz2 = (int**)malloc(l * sizeof(int*));

    printf("\n digite os valores da primeira matriz");
    for( int i=0;i<l;i++){
        matriz1[i]=(int*)malloc(c * sizeof(int));
        for( int j=0;j<c;j++){
            scanf("%i",&matriz1[i][j]);

        }
    }

    printf("\n digite os valores da segunda matriz");
    for( int i=0;i<l;i++){
        matriz2[i]=(int*)malloc(c * sizeof(int));
        for( int j=0;j<c;j++){
            scanf("%i",&matriz2[i][j]);

        }
    }

    int** resultado=funcao(matriz1,matriz2,l,c);


   for( int i=0;i<l;i++){
        for( int j=0;j<c;j++){
          printf("%i",resultado[i][j]);

        }
    }


 for (int i = 0; i < l; i++) {
        free(matriz1[i]);
    }
    free(matriz1);

     for (int i = 0; i < l; i++) {
        free(matriz2[i]);
    }
    free(matriz2);
     for (int i = 0; i < l; i++) {
        free(resultado[i]);
    }
    free(resultado);


}

    



