//15functionindetail
#include<stdio.h>
#include<string.h>

//passing array as arguments
float average(int arr[],int n){
    float sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum/n;
}

//passing string as arguments

void strcatA(char *first,char *second){

    int l1=strlen(first),l2=strlen(second);
    int i=0;
    for (i=0;i<=l2;i++){
        first[l1+i]=second[i];
    }
}


//returning the string

char * string_literal(){

    return "string literal returned";
}



// char * stringfromlocal(){
//     char ret[]="string from local";
//     // return ret;//returning address of local variable(warning)
//     //undesired result
// }


char * stringfromlocalusingstatic(){
    static char ret[]="string from local using static";
    //static will make the value stay even after the function complete execution
    return ret;
}






void main(){

    int arr[5]={2,4,5,1,6};
    float avg=average(arr,5);
    printf("%.2f\n",avg);

    char first[]="Praveen";
    char second[]="Kumar";

    // char *first="Praveen"; //instead of above declaration if these two used ,no answer received
    // char *second="Kumar";

    strcat(first,second);
    printf("%s\n",first);

    char *str=string_literal();
    //str[0]='Z';//this can't be done and here after no print
    printf("%s\n",str);


    // char *strin=stringfromlocal();
    // printf("%s\n",strin);

    char *strin=stringfromlocalusingstatic();
    printf("%s\n",strin);
    strin[0]='X';
    printf("%s\n",strin);


}