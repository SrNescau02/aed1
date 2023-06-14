#include <stdio.h>


int main(){


int voto,votostotais;
int bolsonaro=0,lula=0,danilogentili=0,ciro=0,nulo=0,branco=0;


 printf("\n digite quantos votos serao");
 scanf("\n %i",votostotais);

 printf("digite seu voto de seu candidato \n 1 para lula \n 2 para bolsonaro \n 3 para ciro \n 4 para danilo gentili \n 5  para voto nulo \n 6 para voto em branco");
  for(int i=1;i<=votostotais;i++){
    printf("digtite o voto %i",i);
    scanf("\n %i",voto);

    if(voto==1){
        lula++;

    }else if(voto==2){

        bolsonaro++;

    }else if(voto==2){

        ciro++;

    }else if(voto==2){

        danilogentili++;

    }else if(voto==2){

        nulo++;

    }else if(voto==2){

        branco++;
    }else if (voto<1 || voto >6){
    
    printf("\n valor invalido");

    }

    printf("\n ")




  }





}