#include <stdio.h>
#include <stdlib.h>

int main(){
   //aplicando and , es un programa que genera un secucion aleatoriao 
   int numb, i;

   printf("programa elaborado por GOMEZ PEREZ MANUEL DE JESUS 1C\n\n");

   printf("inserta un numero del 9 al 98: ");
   scanf("%d",&numb);

   i = numb;
   puts("");

   //utilizando un bucle para  imprimir la sucesion
   while(i>0){
       if((i%2 == 0) || (i%10 == 0) || (i%5 == 0))
       {
        printf("%d \n\n",i);
       }
       i = i -1;
   } 

   return 0; 

}