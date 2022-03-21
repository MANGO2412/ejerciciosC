#include <stdio.h>
#include <stdlib.h>
int main(){
    int edad;
    //mis datos
    printf("develop program by Gomez perez Manuel de Jesus \n\n\n");
    
    printf("introduce un numero del 1 al 20: ");
    scanf("%d",&edad);
    
    //my condition to use and
    if((edad > 0)&& (edad <= 20))
    {
        printf("tu numero esta entre 0 y 20");
    }
    else if((edad > 10)&&(edad <= 20))
    {
        printf("tu numero esta entre 10 y 20 \n\n\n");
    }else{
        printf("o no, yo no pense en ese numero \n\n\n");
    }


    return 0;
}