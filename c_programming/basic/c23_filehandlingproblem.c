//23filehandlingprogram.c
#include<stdio.h>
#include<stdlib.h>

void main(){

    //counting total line in file
    FILE *fp1=NULL;
    fp1=fopen("test.txt","r");

    if (fp1==NULL)
        exit(1);

    char c;
    int count=1;
    while((c=fgetc(fp1))!=EOF){
        if(c=='\n')
            count+=1;
    }
    printf("total lines in file: %d\n",count);
    fclose(fp1);

    //copying content of one file to other
    FILE *fp2=NULL;
    fp2=fopen("duplicate.txt","w");
    fp1=fopen("test.txt","r");

    while((c=fgetc(fp1))!=EOF){
        fputc(c,fp2);

    }
    fclose(fp1);
    fclose(fp2);


}