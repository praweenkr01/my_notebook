#include<stdio.h>

int countWord(char ch[]){
    
	int res=0;
	char prev=' ';
	int i=0;

	while(ch[i]!='\0'){

		if (ch[i]==' ' && prev!=' '){
			prev=' ';
			res++;
		}
		else{
			prev=ch[i];
		}
		i++;
	}

	if (i==0)
		return 0;

	if (ch[i-1]==' ')
		res--;
	return res+1;
}

void strCopy(char str2[],char str1[]){

	int index=0;
	while(str1[index]){
		str2[index]=str1[index];
		index++;
	}
	str2[index]='\0';
}

int length(char ch[]){

	 int index=0;
	 while(ch[index]!='\0')
		 index++;
	 return index;
}

void strRev(char str[]){

	int len=length(str);
	int left=0,right=len-1;

	while(left<right){

		char ch=str[left];
		str[left]=str[right];
		str[right]=ch;

		left++;
		right--;
	}
}
void strCat(char s1[],char s2[]){

	int i=length(s1),indx=0;
	while(s2[indx]){
		s1[i]=s2[indx];
		indx++;
		i++;
	}
	s1[i]='\0';
}
int strCmp(char s1[],char s2[]){

	int index=0;
	while(1){
		if (s1[index]=='\0' && s2[index]=='\0'){
			return 0;
		}

		else if(s1[index]>s2[index] || s1[index]<s2[index]){
			return s1[index]-s2[index];
		}

		else{
			index++;
		}

	}

}

void titlecase(char str[]){

	int i=0;
	char prev=' ';

	while(str[i]!='\0'){

		if (prev==' '){
			if (str[i]>=97 && str[i]<=122)
				str[i]=str[i]-32;
		}
		else if(str[i]<=90 && str[i]>=65)
			str[i]=str[i]+32;

		prev=str[i];
		i++;
	}
}

void capitalize(char str[]){

	int i=0;
	if (str[i]!='\n'){
		if(str[i]>=97 && str[i]<=122)
			str[i]=str[i]-32;
		i++;
	}

	while(str[i]!='\0'){
		if(str[i]<=90 && str[i]>=65)
			str[i]=str[i]+32;
		i++;
	}
}
void uppercase(char dest[],char str[]){

	int i=0;
	while(str[i]!='\0'){

		if (str[i]>=97 && str[i]<=122)
			dest[i]=str[i]-32;
		else
			dest[i]=str[i];
		i++;
	}
	dest[i]='\0';
}

void lowercase(char dest[],char str[]){

	int i=0;
	while(str[i]!='\0'){

		if (str[i]>=65 && str[i]<=90)
			dest[i]=str[i]+32;
		else
			dest[i]=str[i];
		i++;
	}
	dest[i]='\0';
}

int main(){

    char string[250]="The raM anD Rohan __ell ";

    char str1[20]="s_itaRam";
    char str2[20]="RamRAM";

    printf("no. word:%d\n",countWord(string));

    strCopy(string,str1);
    printf("string:%s\n",string);

    printf("string length:%d\n",length(string));

    strRev(string);
    printf("string Rev:%s\n",string);


    printf("string Cmp:%d\n",strCmp(string,str2));

    strCat(string,str2);
    printf("string Cat:%s\n",string);

    titlecase(string);
    printf("Titlecase:%s\n",string);

    capitalize(string);
    printf("Capitalise:%s\n",string);

    lowercase(string,str2);
    printf("lowercase:%s\n",string);

    uppercase(string,str2);
    printf("uppercase:%s\n",string);


    return 0;
}