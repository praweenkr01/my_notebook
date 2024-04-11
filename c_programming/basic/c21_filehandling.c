//file handling
#include<stdio.h>
#include <stdlib.h>

void main(){

    //writing mode
    FILE *fp;
    //opening the file in w(writing mode )
    //this will erase all the previous written things(even if nothing changed)
    fp=fopen("test.txt","w");
    //fputc puts the character in the file(overwritten all)
    fputc('Z',fp);

    //we can use fputc in loop to put multiple charachter
    for(int i=0;i<10;i++)
        fputc('T',fp);
    //the file contain
    //ZTTTTTTTTTT


    // fputs
    //puting strings in file
    fputs("My name is Praveen\n I worked at TATA ELXSI",fp);
    //ZTTTTTTTTTTMy name is Praveen
    //I worked at TATA ELXSI

    //fprintf
    char name[20]="Abhi";
    int rating=4;
    fprintf(fp,"\n%s 's rating is\t %d",name,rating);
        // ZTTTTTTTTTTMy name is Praveen
        //  I worked at TATA ELXSI
        // Abhi 's rating is	 4
    fclose(fp);




    // -------------------reading mode "r"------------------------
    // FILE *fp=NULL; fp as file pointer already declared 
    //so need of re-declaration

    fp=NULL;
    fp=fopen("test.txt","r");

    if (fp==NULL){
        puts("error in loading file");
        exit(1);
    }
    while(!feof(fp)){
        printf("%c",fgetc(fp));
    }
    rewind(fp);//this is to take your pointer back to begining
    
    //fgets
    char str[5];
    fgets(str,5,fp);//4char at a time and 1 null
    putchar('\n');//new line
    puts(str);//ZTTT

    //fscanf
    fseek(fp,0,SEEK_SET);//bringing pointer back to begining
    fscanf(fp,"%s",str);//till the time no space or line change detected
    printf("%s",str);//ZTTTTTTTTTTMy


    fclose(fp);
    //---append mode ----------------
    //to write after what's written we use append
    fp=fopen("test.txt","a");
    char append[40]="\nThis was appended";
    fprintf(fp,"%s",append);
    //we can also use puts and putc
    

    fclose(fp);


}