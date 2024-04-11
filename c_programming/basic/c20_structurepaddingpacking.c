//structure paddingpacking
#include<stdio.h>

//padding
struct class1{

    char ch1;
    int i1;
    char ch2;

    //size of this struct class1=12
    //padding takes paramenter in largest size
    // char(1 but taken 4)+int(4)+char(1 but taken 4)=12
    //faster but takes more memory
};

struct class2{

    char ch1;
    char ch2;
    int i1;

    //size of this struct class2=8
    //as word size is 4(largest) and first two paramenter can adjust in it.
    //char (1+1 but taken 4)+int(4)=8
};

struct class3{

    long long ll;//(8byte)
    char ch1;
    char ch2;
    int i1;
    int i2;

    //size of this struct class3=24
    //as word size is 8(largest)
    //two char and one integer comes in one word as (2+4<8)
    //lastly 1 word to get the integer i2;
    //ll(8)+[char (1+1)+int(4)]but taken 8 +int(4 but taken 8)=24

};

struct class4{

    long double ld;//12 byte
    long long ll;
    char ch1;
    char ch2;
    


    //size of this struct class4=32
    //as word size is (min(largest word,system(64 or 32 bit))) is 8
    //ld takes 8+4bytes but 2 word=16
    //ll takes 8byte
    //ch1 and ch2=1+1 but takes 8(1 word byte)
    //total=16+8+8=32
};

struct class5{

    long double ld;//12 byte
    char ch1;
    char ch2;
    long long ll;


    //size of this struct class5=24
    //as word size is (min(largest word,system(64 or 32 bit))) is 8
    //ld takes 8+4bytes but 2 word=16
    //ch1 and ch2 =1+1 this can be put in prev 4empty byte
    //ll takes 8byte
    //total=16+8=24
};



//packing 

#pragma pack(1)//paking in 1byte fetch at a time.
struct class1packed{

    char ch1;
    int i1;
    char ch2;

    //size of this struct class1packed=6
    //packing make the word size 1 , 1byte at a time
    // char(1 taken 1)+int(4)+char(1 taken 1 only)=6
    //slower but takes less memory
};

void main(){

    //padding
    printf("%d\n",sizeof(struct class1));//12
    printf("%d\n",sizeof(struct class2));//8
    printf("%d\n",sizeof(struct class3));//24

    printf("%d\n",sizeof(struct class4));//32
    printf("%d\n",sizeof(struct class5));//24

    printf("%d\n",sizeof(long double));//12

    //packing
    printf("%d\n",sizeof(struct class1packed));//6
 

}
