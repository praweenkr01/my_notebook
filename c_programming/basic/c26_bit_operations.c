#include<stdio.h>

int checkBit(int num,int pos){

	int checkmask=1<<pos;
	return (checkmask&num)!=0;

}

int clearBit(int num,int pos){

	int checkmask=~(1<<pos);
	num= checkmask&num;
	return num;
}

int setBit(int num,int pos){

	int checkmask=1<<pos;
	num= checkmask|num;
	return num;

}
int toggleBit(int num,int start,int end){
	int checkmask=0;

	for (int i=start;i<=end;i++){

		int temp=1<<i;
		checkmask=checkmask|temp;
	}

	num= checkmask^num;
	return num;
}

void  swap(int *num1,int *num2){

	printf("Before swap\n");
	printf("num1=%d num2=%d\n",*num1,*num2);
	*num1=*num1^*num2;
	*num2=*num1^*num2;
	*num1=*num1^*num2;

	printf("After Swap\n");
	printf("num1=%d num2=%d\n",*num1,*num2);
}


int multiplyBy7(int userInput){
	//multiply by 8
	int result=userInput<<3; //2**3=8(shifting left by 3)

	//subtracting one time to get it multiplied by 7
	result-=userInput;

	return result;
}

void display_binary(int num)
{
	int checkbit;
	for (int i=31;i>=0;i--)//32 bit integer 0-31
	{
		checkbit=1<<i;
		if(checkbit&num)//checkbit
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}

int main(){
    int num1=6,num2=5,pos=2;
    int result;

    display_binary(num1);
    printf("checkbit :%d\n",checkBit(num1,pos));

    display_binary(num1);
    printf("clearbit :%d\n",clearBit(num1,pos));

    display_binary(num1);
    printf("setbit :%d\n",setBit(num1,pos));

    display_binary(num1);
    printf("togglebit :%d\n",toggleBit(num1,0,pos));


    printf("mulby7 :%d\n",multiplyBy7(num1));

    swap(&num1,&num2);




    return 0;
}