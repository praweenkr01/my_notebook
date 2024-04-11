//function pointer return
#include<stdio.h>

int * returnPointerFun(int[]);
int naturalNumSumupto(int a);


void f(int *p, int *q){
    p=q;
    *p=2;

}

void main(){

    int *p;
    int a[]={1,2,3,4,5,6};
    p=returnPointerFun(a);
    printf("%d\n",*p);//3 as we have shifted that by 2
    //but
    //a=a+2//error coz array is constant pointer 



    int i=0,j=1;
    f(&i,&j);
    //here  we passed the address of two var to pointer p and q in functionf
    //*p=&i and *q=&j;
    //p=q//p nd q now points to j
    //*p=2 makes j=2
    //so now i=0 still same but j=2
    printf("i=%d\tj=%d\n",i,j); //0 2


    int naturalnum=7;
    printf("%d",naturalNumSumupto(naturalnum));


}


int * returnPointerFun(int arr[]){

    arr=arr+2;
    return arr;

}


//recursion
    //direct 
    //indirect

    //tail recursion(always avoid:takes extra space )
    //non-tail recursion

int naturalNumSumupto(int a){
    
    //base case
    if (a==0)
        return 0;
    //direct recursion
    return a+naturalNumSumupto(a-1);

    //this is not tail recursion as the function call stack being used
    //by other recursion function

}