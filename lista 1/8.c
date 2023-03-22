#include <stdio.h>

int
main ()
{
    float codigo,salario,aumento,salariofinal;
  printf("\n digite o codigo do empregado \n 1-escrituario \n 2-secretario \n 3-caixa \n 4-gerente \n 5-diretor \n ");
  scanf("\n %f", &codigo);

  printf(" \n digite o salario do empregado \n ");
  scanf("\n %f", &salario);

  if(codigo <1 || codigo>5){
       printf("\n valor invalido");

  }else  if(codigo==1){
      printf("\n Escrituario e o cargo do empregado");
      aumento=salario*0.5;

      printf("\n valor do aumento e %f",aumento);
      salariofinal=salario+aumento;

          printf("\n salario final e %f",salariofinal);

  }else    if(codigo==2){
      printf("\n  secretario e o cargo do empregado");
      aumento=salario*0.35;

      printf("\n valor do aumento e %f",aumento);
      salariofinal=salario+aumento;

          printf("\n salario final e %f",salariofinal);

  }else  if(codigo==3){
      printf("\n caixa e o cargo do empregado");
      aumento=salario*0.20;

      printf("\n valor do aumento e %f",aumento);
      salariofinal=salario+aumento;

          printf("\n salario final e %f",salariofinal);

  }else  if(codigo==4){
      printf("\n gerente e o cargo do empregado");
      aumento=salario*0.1;

      printf("\n valor do aumento e %f",aumento);
      salariofinal=salario+aumento;

          printf("\n salario final e %f",salariofinal);

  }else if(codigo==5){
      printf("\n diretor e o cargo do empregado");
     

      printf("\n  diretor nao tem aumento, valor do salario final e %f",salario);
     
  }





  return 0;
}
