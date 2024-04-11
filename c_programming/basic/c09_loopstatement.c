//09loop_statement
#include<stdio.h>

void main(){
    char i;

    for (i=0;printf("vini"),i+1;i++){//prints vini hello 256 times
        printf("hello %d\n",i);
    }
    for (i=0;printf("vini"),0;i++){//prints vini and terminates(0 times)
        printf("hello %d\n",i);
    }

    i=1;
    putchar("\n");

    while(i<10){
        printf("%d\t",i);
        i++;
    }


    do{
        i--;
        if (i==5)
            continue;
        printf("\n%d",i);
        
    }while(i>0);







}