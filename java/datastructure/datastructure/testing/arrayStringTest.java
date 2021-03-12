package datastructure.testing;

import datastructure.arrayList.ArrayStringProblem;
import java.util.Scanner; 

public class arrayStringTest {
    public static void main(String[] args) {
        

        Scanner sc = new Scanner(System.in); 

        String str1 = sc.next(), str2 = sc.next();
        
        if(ArrayStringProblem.isPermutation_version1(str1, str2)) {
            System.out.println(str1 + " " + str2 + " are permutation of each other"); 
        } else {
            System.out.println(str1 + " " + str2 + " are not permutation of each other"); 
        }

        sc.close(); // close scanner. 

    }
}
