#include <stdio.h>
#include <stdlib.h>

int **funcao(int l, int c, int **matriz1,int **matriz2){
    int **matriz3=(int**)malloc(l * sizeof(int*));
    for(int i=0;i<l;i++){
        matriz3[i]=(int *)malloc(c * sizeof(int));
    }

     for(int j=0;j<l;j++){
           for(int k=0;k<c;k++){
            matriz3[j][k]=matriz1[j][k] * matriz2[j][k];
       
    }
       
    }
return matriz3;
}



int main(){
int l,c;
scanf("\n %i %i",&l,&c);


    int **matriz1 = (int **)malloc(l * sizeof(int *));
    int **matriz2 = (int **)malloc(l * sizeof(int *));

    for (int i = 0; i < l; i++) {
        matriz1[i] = (int *)malloc(c * sizeof(int));
        matriz2[i] = (int *)malloc(c * sizeof(int));
    }
printf(" digie a matriz 1 \n ");

     for(int j = 0; j < l; j++){
           for(int k = 0; k < c; k++){
      scanf("%i", &matriz1[j][k]);
       
    }
     }
   
printf("digie a matriz 2 \n");

      for(int j = 0; j < l; j++){
           for(int k = 0; k < c; k++){
      scanf("%i", &matriz2[j][k]);
       
    }
     }
   



int **resultado=funcao(l,c,matriz1,matriz2);
 for(int j=0;j<l;j++){
           for(int k=0;k<c;k++){
         printf(" %i",resultado[j][k]);
       
    }


}
for (int i = 0; i < l; i++) {
        free(matriz1[i]);
        free(matriz2[i]);
        free(resultado[i]);
    }
    free(matriz1);
    free(matriz2);
    free(resultado);

}