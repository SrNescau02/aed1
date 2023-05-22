#include <stdio.h>

float renda(int n, float filhos[n],float salario[n]){

   float somafilhos=0,somasalario=0;
   float rendapercapita=0;
    

    for(int i=0;i<n;i++){
 
      somafilhos+=filhos[i];
       somasalario+=salario[i];

   }

   rendapercapita=somasalario/(somafilhos+n);

  

   return rendapercapita;

}


int main(){

int n;
float resultado=0;

    printf("\n quantos habiantes tem");
    scanf("%i",&n);

   
    float filhos[n],salario[n];
    

   for(int i=0;i<n;i++){
  
    printf("\n digite a quantiade de filhos  do adulto %i e seu salario ",i+1);
    scanf("\n %f %f", &filhos[i],&salario[i]);
   

   }

resultado=renda( n,filhos,salario);
  printf("\n rendapercapita =%f",resultado);
      


    return 0;
}