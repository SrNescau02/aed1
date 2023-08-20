#include <stdio.h>


typedef struct{
    int codigo;
    char nome[50];
    float preco;
}Produto;

void imprimeProduto(Produto p[], int n){
    printf("Codigo: %d\n", p[n].codigo);
    printf("Nome: %s\n", p[n].nome);
    printf("Preco: %.2f\n", p[n].preco);
}

//Crie uma função que recebe as informações do produto e retorna produto corresponde (estrutura).
float retornaprduto(int p.codigo, char p.nome, float p.preco){
    return p;
}
   



   



