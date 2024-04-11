//13pointer
#include<stdio.h>

void main(){


    //pointer :store the address of the variable
    //points to a memory location 
    
    int * ptr;
    //the pointer ptr store the address of an integer variable

    int a=20;
    ptr=&a;
    printf("a=%d\t and *ptr=%d \n",a,*ptr);//20  20
    printf("&a=%d\t and ptr=%d\n",&a,ptr);//6422296   6422296

    //double pointer
    int **ptr2=&ptr;
    printf("%d\t %d\n",*ptr,**ptr2); //20   20

    //POINTER ARITHEMATIC

    int arr[5]={1,10,3,4,5};
    int *p=&arr[0],*q=arr;

    printf("%d\t %d\n",*p,*q);// 1   1

    printf("%d\t %d\n",*p+1,*q++);// 2   1
    printf("%d\n",*q);//10
    printf("%d\n",*(p++));//this will give 1 
                            //bcz in post increment first they return and then increment
    
    printf("%d\n",*--p);//1 the increment happened above is decremented here

    //p-q
    printf("%d\n",q-p);//1 this gives the NUMBER OF ELEMENT ahead TWO POINTER

    printf("%d\n",*p+++4);//first it return and then increament
                            //1+4=5 and points to 2nd ele 10 now
    printf("%d\n",*++p+4);//3+4=7 as preincrement and addition


    p-=2;//back to first ele (arr[0])
    printf("%d\t%d\t%d\n",(*p)++,*p++,*++p);//Rto L
                                        //increment first and value 10
                                        //value:10 AND then increment
                                        //now we are at 3rd ele and return :3 and then increment in value
    printf("%d\n",*p);//4 as this ele was 3 and incremented in preevious step


    //const int 
    const int w=-11;
    const int * j=&w;
    //*j=10 ;//error 






    //------VOID POINTER-----------
    void *vp;
    int i=10; float f=3.2; char c='y';

    vp=&i;
    printf("%d\t",*(int *)vp);//10

    vp=&f;
    printf("%f\t",*(float *)vp);//3.200000

    vp=&c;
    printf("%c\n",*(char *)vp);//y


    //-----NULL POINTER-----------------
    int *pr;//this pointer is unknownly pointing(wild pointer)
    //its not good idea to have wild pointer 

    int *pt=NULL;//null pointer
    pt=(int *)malloc( sizeof(int)*10);
    //it's used for error handling 
    //even if memory allocation not possible it can be handled


    //dangling pointer
    //if we free above allocated memory
    free(pt);
    //right now the memory is free but our pointer still pointing to that
    //undesired result will come if accessed 
    //hence it's better to assign NULL
    pt=NULL;



}