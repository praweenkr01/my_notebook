

// Widening Casting (automatically) - converting a smaller type to a larger type size
// byte -> short -> char -> int -> long -> float -> double

// Narrowing Casting (manually) - converting a larger type to a smaller size type
// double -> float -> long -> int -> char -> short -> byte

import java.util.Arrays;

public class j_03array {
    public static void main(String[] args) {
        int myInt = 9;
        double myDouble = myInt; // Automatic casting: int to doubl

        double mDouble = 9.78d;
        int mInt = (int) myDouble; // Manual casting: double to int

        int []numbers={1,2,3,5};
        for(int num:numbers){
            System.out.println(num);
        }

        int [] nums;
        nums=new int[5];//all inisilized with zero
        nums[0]=2;
        for(int num:nums){
            System.out.println(num);
        }

        String[] names={"Praveen","Kumar","Raj"};
        Arrays.sort(names); //["Kumar","Praveen","Raj"]
        for(String name:names){
            System.out.println(name);
        }

        Arrays.fill(nums,4);//[4, 4, 4, 4, 4]
        System.out.println(Arrays.toString(nums));//[4, 4, 4, 4, 4]
        boolean isEqual=Arrays.equals(numbers, nums);
        System.out.println(isEqual); //false

        int[] cp=Arrays.copyOf(nums, 7);//copy the ele upto which present rest zero
        System.out.println(Arrays.toString(cp));//[4, 4, 4, 4, 4, 0, 0]

        int[] arr=Arrays.copyOfRange(cp,1,3);//[4, 4]
        System.out.println(Arrays.toString(arr));

        









    }
}
