
import java.util.Scanner;

public class j_01hello{
    public static void main(String[] args) {
        System.out.println("Hello World");
        System.out.print("Same Line will be used:");
        System.out.println("Here is Value");


        int num=20;
        float fl=5.0f;
        boolean correct=true;
        char ch='c';
        String str="Non-primitive data type";



        System.out.println(num+fl+ch);//124.0
        System.out.println(str);


        //BASIC OPERATOR


        int x;
        // System.out.println(x);//eror as not inilitised
        x=45;
        int y=4;

        System.out.println(y+x);
        System.out.println(y-x);
        System.out.println(y*x);
        System.out.println(x/y);
        System.out.println(x%y);


        System.out.println(Math.pow(2,3));//8.0 return double

        int a=3;
        double b=5.0;

        double c=a*b;//this is correct(gives 15.0)
        System.out.println(c);

        // int d=a*b;//error can't assign double to int
        int d=(int)(a*b);
        System.out.println(d);//15

        final int s=5;//this value can't be changed
        final int t;//only declared as final so can assign once
        t=4;//this is now the final assignment
        System.out.println(t);

        byte smallNum=99;//range(-128 to 127)
        System.out.println(smallNum);

        short midnum=678; //range(-32768 to 32767)
        long largernum=54647758;


        //all other operator are same as C programming

        if (t==4 && s==5){
            System.out.println("&& operator");
        }
        else if(t==5){
            System.out.println("Else if case");
        }
        else{
            //pass
        }


        String str1="Hello World and me";
        int n=str1.length();
        System.out.println(str1+": length="+n);
        str1=str1.toUpperCase();
        System.out.println(str1);
        System.out.println(str1.subSequence(0,4));
        System.out.println(str1.substring(4));


        int mx=Math.max(2, 1);
        int mn=Math.min(2, 1);
        int abs=Math.abs(-4);
        double sqrt=Math.sqrt(64);

        System.out.println(mx);
        System.out.println(mn);
        System.out.println(abs);
        System.out.println(sqrt);        
        System.out.println(Math.random());
        
        int day=4;
        switch (day) {
            case 1:
              System.out.println("Monday");
              break;
            case 2:
              System.out.println("Tuesday");
              break;
            case 3:
              System.out.println("Wednesday");
              break;
            case 4:
              System.out.println("Thursday");
              break;
            case 5:
              System.out.println("Friday");
              break;
            case 6:
              System.out.println("Saturday");
              break;
            case 7:
              System.out.println("Sunday");
              break;
          }


    }
}

