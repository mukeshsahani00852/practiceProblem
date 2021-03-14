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

    /**
     * @function : isPermutation. 
     * @name : ispermutaionVersion_2
     * @working : check the character count in string. 
     */

    public static boolean isPermutation_version2(String str1, String str2) {
        if(str1.length() != str2.length()) 
            return false; 
        else {
            int[] letter_ = new int[128]; 
            for(char c : str1.toCharArray()) {
                letter_[c]++; 
            }

            for(int i = 0; i < str2.length(); i++) {
                letter_[str2.charAt(i)]--; 
                if(letter_[str2.charAt(i)] < 0) {
                    return false; 
                }
            }
            return true; 
        }
    }

    /**
     * @function : replace all space with %20. 
     * @name : replace_space, 
     * @give : true_length, 
     * @return : modified string. 
     */

    public static void replace_space(char[] str, int truelength) {
        // we are suppose to replae all space with %20 
        int space_count = 0, index; 
        for(int i = 0; i < truelength; i++) {
            if(str[i] == ' ') {
                space_count += 1; 
            }
        }
        index = truelength + 2*space_count; 
        str[index--] = '\0';
        
        for(int i = truelength - 1; i >= 0; i--) {
            if(str[i] == ' ') {
                str[index] = '0'; 
                str[index - 1] = '2'; 
                str[index - 2] = '%';
                index -= 3;  
            } else {
                str[index] = str[i]; 
                index -= 1; 
            }
        }

    }


}
