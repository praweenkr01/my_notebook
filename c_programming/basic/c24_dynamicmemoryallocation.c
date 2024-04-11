//24dynamic memory allocation
#include<stdio.h>

#include<stdlib.h>
//malloc
//calloc
//realloc
//free



void main(){

    //SMA-static memory allocation:\
     compile time (decided how much memory to be allocated)

    //DMA=dynamic memory allocation:\
     run time (decided at run time and less memory wastage)


    int n=5,*ptr;

    //malloc:return void pointer
            //assign single block of memory of particular size
            //if could not allocate memory return null
            //initially garbage value in allocated memory
    ptr=(int *)malloc(n*sizeof(int));
    
    char values[5]="67834";
    for(int i=0;i<5;i++){
        *(ptr+i)=(int)values[i];
    }

    for(int i=0;i<5;i++){
        printf("%d\t",*(ptr+i));//54 55 56 51 52
    }
    free(ptr);//freeing the memory

    //calloc
            //assign n different block of size sizeof(datatype)
            //if could not allocate return null
            //initially(default) contain 0
    int *ptr2=NULL;
    ptr2=(int *)calloc(n,sizeof(int));
    putchar('\n');//newline
    for(int i=0;i<5;i++){
        printf("%d\t",*(ptr2+i));//0 0 0 0 0
    }


    //realloc
            //used to change the size already allocated
            //(resize) increase /decrease allocated memory
            //already existing value not changed
            //if unable to increase size as contigious memory already allocated.
            //new fresh memory is assign and content copied to that
            //and old memory is freed.

    int *ptr3=NULL;
    ptr3=(int *)realloc(ptr2,6*sizeof(int));
    putchar('\n');
    for(int i=0;i<6;i++){
        printf("%d\t",*(ptr3+i));
    }

    //realloc act same as malloc here
    int *ptr4=(int *)realloc(NULL,2*sizeof(int));
    free(ptr4);



    //free
            //release the dynamically allocated memory
            //void return type
            //pointer become dangling pointer after memory freed
            //best to assign NULL to those pointer after freeing
    free(ptr3);
    free(ptr2);

    //memory leak is major problem (we should take care of)
    //if memory dynamically allocated it need to be freed manually
    //else memory consumption will increases(bad sign )
    //free the memory :free(ptr) after use
    
    ptr2=NULL;
    ptr3=NULL;

}