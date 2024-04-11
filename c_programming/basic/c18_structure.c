//structure.c
#include<stdio.h>

struct student{
    int rollNo;
    char *name;
    float marks;
} s4;//no space allocated , this is just user defined data type format
//here above s4 has been declared together

typedef struct professor{
    int profid;
    char *name;
    float rating;
} prof;//aliasing the struct professor to prof

void main(){

    // struct student s1;//here s1 is object(var of type struct student)
    struct student s1={1,"Praveen",95.5};
    struct student s2;
    s2=s1;

    printf("s1's rollno:%d\n",s1.rollNo);
    s2.rollNo=2;
    printf("s2's rollno:%d\n",s2.rollNo);


    //initilizing
    struct student s3={.name="Ayush",.marks=90.4};
    printf("s3's name is %s\n",s3.name);
    printf("s3's roll number is %d\n",s3.rollNo);//default 0
    s3.rollNo=3;

    //getting default char and float value
    printf("%s\t%f\n",s4.name,s4.marks);//null 0.00000


    //typedef
    prof p1={1,"sabraj",4.0};
    printf("p1's name is %s\n",p1.name);


    //array of structure
    prof smvdu[10];
    for(int i=0;i<10;i++){
        smvdu[i].profid=i;
        smvdu[i].rating=3.8;
    }
    printf("%d is profid of smvdu's 5th prof\n",smvdu[4]);




    //pointer to structure (structure pointer)
    prof *smvduptr;
    smvduptr=&smvdu[4];
    //accessing the value by pointer
    printf("5th prof id: %d\n",smvduptr->profid);//4
    printf("this should also give same:%d\n",(*smvduptr).profid);



}