
#include<stdio.h>

void detCase(char ch){

	if(ch>=97 && ch<=122)
		printf("Lower Case Character\n");
	else if(ch>=65 && ch<=90)
		printf("Upper Case Character\n");
	else if(ch>=48 && ch<=57)
		printf("Numberical Charachter\n");
	else
		printf("Special Character\n");

}

int maxOfThree(int num1,int num2,int num3){

	int res=num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
	return res;

}


void max_minPossible(int num){

	int arr[10];//to store the count of digit
	for(int i=0;i<10;i++){
		arr[i]=0;
	}

	while(num){
		int rem=num%10;
		arr[rem]+=1;//incrementing the count of digit
		num/=10;
	}

	int max_number=0,min_number=0;

	for (int i=9;i>=0;i--){
		int temp=arr[i];
		while(temp){
			max_number=max_number*10+i;
			temp-=1;
		}
	}

	for (int i=1;i<=9;i++){
		int temp=arr[i];
		while(temp){
			min_number=min_number*10+i;
			temp-=1;
		}
	}

	printf("Max Number: %d\n",max_number);
	printf("Min Number: %d\n",min_number);

}

int main(){

    int num1=425,num2=34,num3=76;
    char ch='C';
    detCase(ch);
    printf("Max :%d\n",maxOfThree(num1,num2,num3));
    max_minPossible(num1);
    return 0;
}

