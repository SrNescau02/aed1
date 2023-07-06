#include <stdio.h>




int main(){


    struct carro{
        char marca[20];
        char modelo[20];
        int ano;
        int preco;

    };

    struct carro carro[2];

    for(int i=0; i<2; i++){
        printf("Digite a marca do carro %i: ",i+1);
        scanf("%s",carro[i].marca);

        printf("Digite o modelo do carro %i: ",i+1);
        scanf("%s",carro[i].modelo);

        printf("Digite o ano do carro %i: ",i+1);
        scanf("%i",&carro[i].ano);

        printf("Digite o preco do carro %i: ",i+1);
        scanf("%i",&carro[i].preco);
    }

 FILE* file = fopen("file.txt","w");

 if(file==NULL){
     printf("Erro ao abrir o arquivo");

 }

 for(int i=0;i<2;i++){
 fprintf(file,"%s ",carro[i].marca);
 fprintf(file,"%s ",carro[i].modelo);
 fprintf(file,"%i ",carro[i].ano);
 fprintf(file,"%i ",carro[i].preco);
 fprintf(file,"\n");
 }
 fclose(file);

    return 0;
}