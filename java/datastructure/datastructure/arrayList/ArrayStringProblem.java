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
            char_set[i] = true; 
        }
        return true; 
    }


}
