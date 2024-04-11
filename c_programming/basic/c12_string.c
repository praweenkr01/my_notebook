//12string
#include<stdio.h>
#include<string.h>

int strlenA(char *);
void strcatA(char *,char *);
int strcmpA(char *,char *);
void strrevA(char *);


void main(){

    char name[20]="Praveen";
    printf("predefined:%d\t",strlen(name));//7
    printf("applied: %d\n",strlenA(name));//7





    char surname[10]="Kumar";
    strcat(name,surname);
    printf("concat predefined: %s\n",name);//PraveenKumar

    char sita[20]="Sita";
    char Ram[10]="Rama";

    strcatA(sita,Ram);
    printf("%s\n",sita);//sitaRama




    //strcmp
    int cmp=strcmp(sita,Ram);
    printf("default strcmp:%d\t",cmp);
    printf("defined strcmpA %d\n",strcmpA(sita,Ram));

    printf("strcmp %d\t",strcmp("abc","abc"));
    printf("defined strcmpA %d\n",strcmpA("abc","abc"));

    printf("strcmp %d\t",strcmp("Aabca","abc"));
    printf("defined strcmpA %d\n",strcmpA("Aabca","abc"));


    //strrev
    char var[10]="APRT";
    strrev(var);
    printf("default :%s\t",var);//TRPA

    strrevA(var);
    strrevA(var);
    printf("usedefuned:%s\n",var);//TRPA










    
}

//length of string
int strlenA(char *string){
    int i=0;
    while (string[i]!='\0')
        i++;
    return i;
}


void strcatA(char *string1,char *string2){
    int l1=strlen(string1),l2=strlen(string2);

    int i=0;
    for(i=0;i<=l2;i++){
        string1[i+l1]=string2[i];
    }
}

int strcmpA(char *string1,char *string2){

    int l1,l2;
    l1=strlen(string1);l2=strlen(string2);

    int i=0;
    while (i<=l1 || i<=l2){

        if (string1[i]=='\0'&&string2[i]=='\0')
            return 0;

        else if (string1[i]=='\0')
            return -1;

        else if (string2[i]=='\0')
            return 1;
        
        else{
            if (string1[i]==string2[i])
                i++;
            else if (string1[i]>string2[i])
                return 1;
            else
                return -1;

        }

    }
    return 0;
}


void strrevA(char * string){
    int l=strlen(string)-1;

    int i=0;
    while (i<l){
        char temp=string[i];
        string[i]=string[l];
        string[l]=temp;
        l--;
        i++;


    }
    
}




