//25 macro and enum preprocessor
//#preprocessor directive:extented code
#include<stdio.h>

//macros
# define MAX(a,b) if(a>b){printf("max:%d\n",a);}\
                    else{printf("max:%d\n",b);}
#define MUL(a,b) a*b


void main(){

    printf("mul using macros:%d\n",MUL(3,4));//12
    printf("mul using macros:%d\n",MUL(5-2,7+4));//-5
    //bcz: intrepreded as 5-2*7+4= 5-14+4 =-5

    #undef MUL
    //the below code will give error as we have undefined MUL
    // printf("mul using macros:%d\n",MUL(5-2,7+4));


    //if MAX defined
    #ifdef MAX
        MAX(5,2);//max:5 (printed)
    #endif



    printf("\n\n");

    //----predefined macros--------
    printf("Date: %s\n",__DATE__);
    printf("file: %s\n",__FILE__);
    printf("line:%d\n",__LINE__);
    printf("time:%s\n",__TIME__);
    printf("ansi: %d\n",__STDC__);


    printf("\n\n");






    //enum:user defined type to assign names to integral constant
    
    enum direction {North,South,East=4,West};

    enum direction karnataka,Bangal,Rajasthan,Kashmir;
    // karnataka=South;
    // Bangal=East;Rajasthan=West;Kashmir=North;

    enum direction place;
    place=South;

    switch (place)
    {

    case East:
        printf("We are near to bangal");
        break;
    case West:
        printf("We are near to Rajasthan");
        break;
    case North:
        printf("We are near to Kashmir");
        break;
    case South:
        printf("We are near to Karnataka");//this will be printed
        printf("\n%d\n",place);//1(index)

        //we could have set other value as well
        //like East=4 so all ahead of it's will be like 4,5,6...index
        printf("%d\n",East);//4
        printf("%d\n",West);//5


        printf("%d\n",sizeof(place));//4byte(as there we know it's integer)
        break;
    
    default:
        break;
    }




    //using typedef in enum
    typedef enum {male,female,other}gender;

    gender praveen=male;
    putchar('\n');
    if(praveen==male)
        printf("discount:20%%");
    else
        printf("discount : 50%%");


    


}