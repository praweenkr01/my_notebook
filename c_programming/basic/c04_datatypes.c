//datatypes
//datatypes:tells how much storage memory to be allocated
//Primary,Derived,Userdefined

//Primary:int,float,char,double,void,short,long

//Derived: Array,Structure,Union,Pointer

//User-defined: typedef,enumerated
#include<stdio.h>

void main(){


    typedef int Integer;
    Integer g=20; //user defined data type

    struct student{
        int rollcode;
        int mark;
        char name[20];

    };

    struct student praveen={1,95,"Praveen"};//derived

    int b=30; //primary




    char a=254;
    printf("digit: %d\t",a); // it will give: -2
    printf("character: %c\n",a); //character: ■
    printf("%d\n",sizeof(a)); //1 byte


    unsigned char d=256;
    printf("%d\n",d);// this will give: 0


    short int intger=65535;
    printf("size of short:%d\n",sizeof(intger));//2 byte
    printf("short int:%hi\t",intger);//this will give:-1(hi -short int)
    printf("unsigned short:%hu\n",intger);//output:65535 (hu unsigned short int)


    float nm=3;
    // scanf("%f",&nm);//if input with decimal generate some garbage
                    //if no decimal generate 0(for lower print statement)
    printf("float printed as int:%d\n",nm);//undesired result



    int mm=9;
    // scanf("%d",&mm);
    printf("After float input in int:%f\t",mm);//undesired
    printf("%d\n",mm);//9


    char ch=65;
    printf("integer value: %d\t",ch);//65
    printf("character %c\n",ch);//A



    char t=1;
    while(t){//this isn't infinite loop as 
            //the number will run from 1 to 127 and then -128 to -1
            //eventually stop at 0
        printf("%d",t);
        t++;
    }
    printf("\n");


    unsigned char j=-1;
    printf("\n%d",j);//255



}