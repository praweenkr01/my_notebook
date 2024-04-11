//control_statement
#include<stdio.h>
#include<conio.h>

void main(){

    int integer;
    scanf("%d",&integer);


    if (integer){
        puts("The value you intered is not Zero");
    }
    else if (integer==0){
        printf("the interger value is Zero");
    }
    else{
        puts("Something wrong entwred");
    }



    int switchvalue;
    scanf("%d",&switchvalue);

    switch (switchvalue)
    {
    case 1:
        puts("The value entered is 1");
        break;
    
    case 2:
        puts("the value entered is 2");
        break;
        
    default:
        puts("The value entered is somethingelse");
        break;
    }
    
}