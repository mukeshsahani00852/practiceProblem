package datastructure.testing;

import datastructure.arrayList.ArrayStringProblem;
import java.util.Scanner; 

public class arrayStringTest {
    public static void main(String[] args) {
        

        Scanner sc = new Scanner(System.in); 
        char[] data = new char[20]; 
        data = "java is good                                ".toCharArray(); 
        int true_length = "java is good".length(); 
        System.out.println(data); 
        ArrayStringProblem.replace_space(data, true_length);
        System.out.println(data); 

        sc.close(); // close scanner. 

    }
}
