#include <stdio.h>


typedef struct{
    int codigo;
    char nome[50];
    float preco;
}Produto;



void imprimir(Produto produto){
    printf("Codigo: %d\n",produto.codigo);
    printf("Nome: %s\n",produto.nome);
    printf("Preco: %.2f\n",produto.preco);
}

float media(Produto produto[],int n){
  int soma=0;
    for (int i=0; i<n; i++){
      
        soma+=produto[i].preco;

   
    }
      return soma/n;
}




int main(){

    int n;
    float mediaa=0;
    printf("\n digite quantos produtos");
    scanf("%d",&n);

    Produto produto[n];


    for(int i=0;i<n;i++){
        scanf("%d",&produto[i].codigo);
        scanf("%s",produto[i].nome);
        scanf("%f",&produto[i].preco);
    }
for(int i=0;i<n;i++){
    imprimir(produto[i]);
}
    mediaa=media(produto,n);

    printf("\n media dos produtos= %f",mediaa);


}










