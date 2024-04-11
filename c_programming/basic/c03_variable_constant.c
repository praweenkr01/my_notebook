//variable_constant

#include<stdio.h>
#include"c02_execution_process.c"

//syntax
//datatype varname;
//datatype varname=assign-value;

int num=100;
void display();//this is function

int main(){

    float value=1.3;
    char c;
    c='a';

    //void c;  error
    int a=2,b;


    //constant
    const int max=30;
    //const min; error


    //Namming 
    //_name, Name, nam_e, neo10,SUM, camelCase, snake_case, etc
    
    //32 keywords
    //goto, break, float, int, sizeof, continue, do ,while ,switch,auto,double,long , const , extern...
    
    extern int x;
    printf("%d",x);

    return 0;


    
}


