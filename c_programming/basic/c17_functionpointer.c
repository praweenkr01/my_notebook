//function pointer
// #include<stdio.h>

// int sum(int a, int b){return a+b;}//addition
// int sub(int a,int b){return a-b;}//subtraction
// int mul(int a,int b){return a*b;}//multiplication
// int div(int a,int b){return a/b;}//division

// void select(int(*ptr)(int,int),int a ,int b){
//     printf("%d\n",ptr(a,b));
// }

// void main(){

//     int a=3,b=4;
//     select(sum,a,b);//7
//     select(sub,a,b);//-1
//     select(mul,a,b);//12

// }



//----using function pointer-------------------

#include<stdio.h>


void  add(int a, int b){printf("%d\n",a+b);}//addition
void  sub(int a,int b){ printf("%d\n",a-b);}//subtraction
void  mul(int a,int b){ printf("%d\n",a*b);}//multiplication
void  div(int a,int b){ printf("%d\n",a/b);}//division

void main(){


    int opcode;
    do{    
        printf("select one operation\n\
                0:addition\n\
                1:subtraction\n\
                2:multiplication\n\
                3:division");

        scanf("%d",&opcode);
    }while(opcode>3||opcode<0);


    printf("Enter two operand to perform operation\n");
    int num1,num2;
    scanf("%d%d",&num1,&num2);

    void (*select[4])(int,int)={add,sub,mul,div};
    (*select)(num1,num2);

    

}