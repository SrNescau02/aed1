#include <stdio.h>
#include <stdbool.h>



int main (){


int contador1=7;

    for(int i=3;i<=1000;i++){
        
        bool primo =false;   


       for(int a=2;a<=i/2;i++){

         if(i%a==0){
          

            primo = false;
            

         }
         
       }
      
    if (primo){

        contador1++;
    }
       
    }
    
 printf("\n a quantidade de numeros primos sao %i ",contador1);




}