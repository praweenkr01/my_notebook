//19union
#include<stdio.h>

union stored_result{
    int num;
    char ch;
    float floatvalue;
};


void main(){
    //everything about union is same as struct
    //but the value stored in single space
    //as we give other parameter the previous one overwritten


    union stored_result value;
    value.num=10;
    printf("the num value: %d\n",value.num);
    value.floatvalue=4.33;
    printf("the float value:%f\n",value.floatvalue);
    printf("the num value gone (overwritten):%d\n",value.num);//garbage

    //union were used when memory were expensive 
    //not used now a days

    


}