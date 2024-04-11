//11string
#include<stdio.h>
#include<conio.h>


void main(){

    char s1[30];
    scanf("%s",s1);//It will discard all the input after space
                    //if input=Praveen Kumar Raj (it will take only Praveen)
    printf("%s\n",s1);//Praveen

    //Note: all the chrachter entered after space will act as input for gets here.
    //so to be safe never use space with scanf in string
        // BUT USING PUTS() THIS CAN BE AVOIDED

    gets(s1);//till the ENTER is pressed it takes input
    printf("%s",s1);

    char ch[20]="Sita Rama";
    printf("\n%s\n",ch);//Sita Rama


    //Buffer overflow drawback of gets and scanf
    char name[5];//length 5 only
    gets(name);//getting anything bigger length then 5
    printf("%s",name);//it prints all that entered (even after length 5)

    //Problem:It's overwriting the memory that we don't know so VERY DANGEROUS.
    
    //to get only 5 char we can do hard coding
    scanf("%5s",name);//Praveen
    printf("%s",name);//Prave


    char nme[30]="Praveen Kumar";
    printf("%10.5s",nme);//     Prave
    //%10 means takes atleast 10 space and write from right side 
    //%.5s print only the five character
    //%10.5% take 10 space and print only 5 char from right side


    puts(nme);//Praveen Kumar
    
    printf("%s",&nme);//Praveen Kumar
    printf("%s",&nme[2]);//aveen Kumar
    // printf("%s",nme[2]);//error
    printf("%c",nme[2]);//a
    //
    //puts() put the new line itself




    // Add string.h header file to add more functionalities into string


    






}