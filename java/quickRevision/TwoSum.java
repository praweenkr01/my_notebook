import java.util.Arrays;
import java.util.HashMap;

public class TwoSum {
    public static void main(String[] args) {
        // Example usage
        int[] nums={1,2,3,4,5}; int target=9;
        System.out.println(Arrays.toString(twoSum(nums, target)));
        
    }

    public static int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> map=new HashMap<>();

        for(int i=0;i<nums.length;i++){
            int diff=target-nums[i];

            if(map.containsKey(diff))
                return new int[] {map.get(diff),i};
            else{
                map.put(nums[i],i);
            }
        }

        return new int[]{-1,-1};
    }
    
}
