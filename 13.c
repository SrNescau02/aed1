/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

    int main(){
        
        float horas;
        float salariom;
        float horasx;
        float horatrabalhada=0;
        float horaextra=0;
        float salariobruto=0;
        float quantiar=0;
        float salarior=0;
        printf("digite o numero de horas trabalhadas");
        scanf("\n %f",&horas);
        
        printf("digite o valor do salario minimo ");
        scanf("\n %f",&salariom);
        
        printf("digite o numero de horas extras trabalhadas");
        scanf("\n %f",&horasx);
        
        horatrabalhada=salariom/8;
        horaextra=salariom/4;
        salariobruto=horas*horatrabalhada;
        quantiar=horasx*horaextra;
        salarior=salariobruto+quantiar;

        
      
        printf("\n salario sera =%.2f",salarior);
       
      
    
        return 0;
}
