package datastructure.arrayList;

public class ArrayStringProblem {


    /**
     * @function : isUnique. 
     * @name : string : data 
     * @work : determine whether string contains all unique character. 
     */

    public static boolean isUnique(String data) {
        boolean[] char_set = new boolean[128]; 
        for(int i = 0; i < data.length(); i++) {
            if(char_set[data.charAt(i)]) {
                return false; 
            }  
            char_set[data.charAt(i)] = true; 
        }
        return true; 
    }

    /**
     * @function : isPermutation.
     * @name : isPermutation_version_1 
     * @working : in this implementation i have sorted both string than compare them if both are equal 
     * than they are permutation of each other. 
     */

    public static boolean isPermutation_version1(String str1, String str2) {
        if(str1.length() != str2.length()) {
            return false; 
        } else {
            return stringSort(str1).equals(stringSort(str2)); 
        }
    }

    public static String stringSort(String str) {
        char[] char_array = str.toCharArray(); 
        java.util.Arrays.sort(char_array); 
        return new String(char_array); 
    }


    


}
