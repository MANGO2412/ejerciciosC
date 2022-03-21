#include <stdio.h>
#include <stdlib.h>

int main (){
    int num, i;
    printf("programa elaborado por Gomez Perez Manuel de Jesus \n\n");
    printf("Escribe un numero: ");
    scanf("%d",&num);
    

    i = num;
    puts(" ");
     while(i> 0){
       if( (i%10 )!= 1)
       {
        printf("%d \n\n",i);
    
       }
       i = i-1;
     }


 return 0;


}