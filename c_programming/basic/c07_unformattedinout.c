//unformatted_inputoutput
#include<stdio.h>
// #include<string.h>
#include<stdlib.h>
#include<conio.h>

void main(){



    char ch;
    ch=getch();//this takes one character and move to next line
                //the character you type won't be printed on screen

    char vini[30];
    gets(vini);//taking strings and this will move to next line on ENTER
    printf("%s",vini);


    char c;
    c=getchar();//even if multiple character provided it takes first char only
                //move to next like on ENTER

    printf("%c",c);
    printf("%c",ch);



    //--------------------------------------------------

    // unformatted output
            //putchar()
            //puts()
            //putch()
    putchar(c);
    putch(ch);
    puts(vini);



    char che;
    che=getche();//this will terminate the program if any key pressed
            //the key pressed is printed on screen.


}