package datastructure.utils;
import java.util.ArrayList; 

public class ArrayFunction {
    
    public ArrayFunction() {
        // default constructor. 
    }

    public static boolean isIn(ArrayList<Integer> arrayList, int element) {
        for(int i  = 0; i < arrayList.size(); i++) {
            if(arrayList.get(i) == element) {
                return true; 
            }
        }
        return false; 
    }

}
