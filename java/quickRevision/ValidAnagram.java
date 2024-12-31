// package java.quickRevision;

import java.util.Arrays;

public class ValidAnagram {
    public static void main(String[] args) {
        // Example usage
        String s = "racecar"; String t = "carrace";
        System.out.println(isAnagram( s,t));
        
    }

    public static boolean isAnagram(String s, String t) {
        if(s.length()!=t.length())
            return false;
        
        int[] count=new int[26];
        for(int i=0;i<s.length();i++){
            count[s.charAt(i)-'a']++;
            count[t.charAt(i)-'a']--;
        }

        for(int i=0;i<26;i++){
            if(count[i]!=0)
                return false;
        }
        return true;
    }


    // public static boolean isAnagram(String s, String t) {
    //     char[] arr1=s.toCharArray();
    //     char[] arr2=t.toCharArray();

    //     Arrays.sort(arr1);Arrays.sort(arr2);

    //     return Arrays.equals(arr1, arr2);
    // }
    
}
