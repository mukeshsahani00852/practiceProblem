package datastructure.testing;

import datastructure.linkedList.SinglyLinkedList; 
import datastructure.linkedList.LinkedListProblem;

public class LinkedListProblemTesting {
    
    public static void main(String[] args) {
        
        SinglyLinkedList<Integer> list = new SinglyLinkedList<Integer>(); 
        list.add(12); 
        list.add(32); 
        list.add(3232); 
        list.add(12); 
        list.add(32); 
        list.add(32); 
        list.printList(); 
        LinkedListProblem.removeDuplicate_version2(list);
        list.printList();

    }


}
