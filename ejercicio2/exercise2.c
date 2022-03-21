#include <stdio.h>
#include <stdlib.h>

int main(){
  int edad,mes;
  

    //arrancar el programa
    printf("progama elaborado por Gomez Perez Manuel de Jesus \n\n");


    //pedir datos
    printf("introduce tu edad: ");
    scanf("%d",&edad);

    printf("introduce tu mes de cumpleaños en numero: ");
    scanf("%d",&mes);




    //condicion utuilizando and 
     if((mes>= 7 && mes <= 8) && (edad >= 18))
     {
       printf("tu fuiste a ceptado   a la fiesta de año nuevo");
     }else{
         printf("lo siento tu no calificas para la fiesta");
     }

     //fin programa
     return 0;

}