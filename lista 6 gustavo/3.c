struct data{
    int dia;
    int mes;
    int ano;
};

struct data dataa(struct data x, int y){
    x.dia+=y;
while(x.dia>31){

    if(x.dia>31){

        int soma=x.dia-31;
        x.dia=soma;
        x.mes++;

        if(x.mes>12){

            x.mes=1;
            x.ano++;
            
            
        }
    }
};
return x;

}




int main(){
    struct data novadata;
    int y=0;

    printf("\n digite uma data");
    scanf("\n %i",&novadata.dia);
    scanf("\n %i",&novadata.mes);
    scanf("\n %i",&novadata.ano);

      printf("\n digite a quantidade de dias a ser somada");
      scanf("\n %i",&y);

      novadata=dataa(novadata,y);

    printf(" %i:",novadata.dia);
    printf(" %i:",novadata.mes);
    printf(" %i",novadata.ano);
     


}