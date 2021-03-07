package datastructure.testing;

import datastructure.arrayList.ArrayStringProblem;
import java.util.Scanner; 

public class arrayStringTest {
    public static void main(String[] args) {
        

        /**
         * @problem : determine wheter string contain unique character or not. 
         */

        Scanner sc = new Scanner(System.in); 

        String data = sc.next(); 
        if(ArrayStringProblem.isUnique(data)) {
            System.out.println("All character are not unique !"); 
        } else {
            
        }

        sc.close(); // close scanner. 

    }
}
