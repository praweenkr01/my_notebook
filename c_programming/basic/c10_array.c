#include<stdio.h>

void main(){

    int arr[10]={1,2,3,4,5};//rest of all element assign 0
    int arr1[10];//this will have all garbage value

    // int arr2[5]={1,2,3,4,5,6,7};//the array will conatin 5 values oly correctly
                                //rest if accessed it will give garbage value
                                //warning will be there about the excess element
    
    // int arr3[-2];//this is wrong (error )positive value only
    
    int arr4[]={2,3,4,5,6,8};//adjust the size as per assignmet
    int arr5[5]={};//this will get 5 zero assignment/
                    //if getting value at other index it will give garbage or above assigned values



    printf("%d\n",sizeof(arr));//40



    //initlization at run time
    int array[5];
    for (int i=0;i<5;i++)
        scanf("%d",&array[i]);

    for(int i=0;i<5;i++){
        printf("%d\t",array[i]);
    }

    printf("\n%d\n",*array+1);//first ele+1
    printf("\n%d\n",*(array+1));//second element


    // array++;//this is wrong
    //constant pointer




    //2D array
    int arr2d[][3]={2,3,4,5,6,7};
    printf("%d",arr2d[1][1]);




}