#include <stdio.h>

  struct data {
       
        int dia;
        int mes;
        int ano;

    };

struct data datavalida(struct data x){
    if(x.dia<0 || x.dia>31){
        x.dia=0;

    }
 if(x.mes<0 || x.mes>12){
        x.mes=0;

    }
     if(x.ano<0){
        x.ano=0;

    }
    return x;
}


int main(){

    struct data dataf;
    scanf("\n %i",&dataf.dia);
     scanf("\n %i",&dataf.mes);
      scanf("\n %i",&dataf.ano);


     dataf=datavalida(dataf);

     printf("\n %i",dataf.dia);
       printf("\n %i",dataf.mes);
         printf("\n %i",dataf.ano);
     



    
}