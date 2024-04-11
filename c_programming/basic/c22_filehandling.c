//22_filehandling
#include<stdio.h>
#include<stdlib.h>


void main(){

    FILE *fp=NULL;




    fp=fopen("test.txt","r+");
    // (r+) mode is used for modifying
    // both read and write

    char str[]="r+mode in used";
    fprintf(fp,"%s",str);
    fputc('X',fp);

    rewind(fp);//it's important so that expected result occur

    char c=fgetc(fp);
    putchar(c);//
    c=fgetc(fp);
    putchar(c);

    rewind(fp);//important
    fputc('Z',fp);
    fclose(fp);



    //-------------w+ mode----------------------------
    //both read and write but specially write
    //erase all the previous this written once opened

    fp=fopen("test.txt","w+");
    if (fp==NULL)
        exit(1);
    fputs("My Name is Khan",fp);
    rewind(fp);//pointer moved back to begining
    putchar('\n');//for newline
    while(!feof(fp))
        printf("%c",fgetc(fp));
    putchar('\n');//newline in console(not file)
    fputc('X',fp);
    fclose(fp);


    //------(a+) mode ------------------------
    //reading and appending
    //this does not erase all that is present

    fp=fopen("test.txt","a+");
    if (fp==NULL)
        exit(1);
    
    fputs("t\nthe newly line added by a+",fp);
    rewind(fp);
    printf("\n\n%c\n",fgetc(fp));
    rewind(fp);//this takes the cursion again to last of file
                //else it won't be appended at last
    fputs("\nadding again by a+",fp);


    //using few function
    int cursiorpos=ftell(fp);
    printf("\n%d\n",cursiorpos);

    fclose(fp);
    

    

}