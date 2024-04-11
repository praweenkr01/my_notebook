//14function
#include<stdio.h>

int sm(int ,int);
void swapByvalue(int,int);
void swapReference(int *,int*);


void main(){//special funcion executed first

int a=19,b=8;
printf("%d\n",sm(a,b));

//call by value 
int h=2,g=3;
swapByvalue(h,g);
printf("passed by value:%d\t%d\n",h,g);
swapReference(&h,&g);
printf("passed by reference: %d\t%d\n",h,g);


}

int sm(int a,int b){
    return a+b;
}
void swapByvalue(int h,int g){
    int temp=h;
    h=g;
    g=temp;

}

void swapReference(int* h, int * g){

    int temp=*h;
    *h=*g;
    *g=temp;
}