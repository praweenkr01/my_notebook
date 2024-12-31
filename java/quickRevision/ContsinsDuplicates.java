import java.util.HashSet;

public class ContsinsDuplicates {
    public static void main(String[] args) {
        // Example usage
        int[] nums = {1, 2, 3, 3};
        System.out.println(hasDuplicate(nums));
        
    }

    public static boolean hasDuplicate(int[] nums) {
        HashSet<Integer> visited=new HashSet<>();

        for(int num:nums){
            if(visited.contains(num))
                return true;
            visited.add(num);
        }
        return false;
    }
}
