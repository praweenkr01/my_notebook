//formatted_inputoutput
#include<stdio.h>

void main(){
    //syntax
    //scanf("string control",var1,var2......);

    //problem not solved
    // int a;
    // float b; 
    // char c;
    // scanf("%d%f%c",&a,&b,&c);//if input provided by pressing enter %c takes '\n' 
                                //if input provided by space in between %c takes ' '(whitespace)
    // printf("Integer: %d\n Float:%f\n Char: %d",a,b,c);


    int i;
    char ch;
    float f;
    int inputCount,outputLength;

    inputCount=scanf(" %d",&i);//there should not be space after %d
    outputLength=printf("inputCount:%d\n",inputCount);//this will give :1(taking only one input)
    printf("outputLength:%d\n",outputLength);//13

    printf("%6d\n",outputLength);//take space of 6 and print from right side
    printf("%1d\n",outputLength);//take 1 space so will print normally


    scanf("%f",&f);
    printf("%6.2f",f);//taking space 6
                    //print by rounding up to 2 decimal

}