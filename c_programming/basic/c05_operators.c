//operators

//unary,binary,ternary

#include<stdio.h>

void main(){

//arithematic--------
int a;
a=3+4;//7
a=7-3;//4
a=7/3;//2
a=2*5;//10
a=7%3;//1

//relational operation-------
if(3>2){
    //logical operator ||(or), &&(and)
    if (5<8 || 2>3){
        if(2<=3 && 3>=1){
            printf("understood relational operator\n");
        }
    }
}


//Bitwise operator
int num1=10,num2=8;
printf("%d\n",num1&num2);//8  (1000)&(1010)=(1000)
printf("%d\n",num1|num2);//10
printf("%d\n",num1>>2);// 1010-->0010=2
printf("%d\n",num1<<2);//40
printf("%d\n",num1^num2);//2 (1000)xor(1010)=(0010)
printf("%d\n",~num1); //invert all the bits





//equality operator
if ('A'==65){
    if (3!=2){
        printf("equality operator\n");
    }
}


int x=20;//assignment operator

//ternary operator
printf("%d",2<3?10:0);//10

printf("\ncomma coperator here after");


//comma operator
int y=6,u=7,o;
o=5,10; //here o=5 assigned
printf("\n%d",o);//5

o=(3,4);//this will assign 4 to o
printf("\n%d\n",o);//4

// int count=10,5; this is error
int count=(7,8); //this is correct and assign 8 to count
printf("%d\n",count);//8


count=(2,4,printf("Praveen kumar"));
printf("%d\n",count);//13 (as printf return length of string inside)





/*
precedence and associativity

(),.,->,++,--(post fix) LtoR

++,--,+,-,!,~,*,& sizeof (unary operator) RtoL

*,/,% LtoR
+,- LtoR

<<,>> LtoR

relational
<,<=,>,>=

==,!=

bitwise
&
^
|
&&
||
?:

assignment operator
+=,-=,*=,/=,%=,>>=,<<=,^=  RtoL
comma operator


*/

}