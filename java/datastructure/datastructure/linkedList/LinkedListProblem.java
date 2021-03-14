package datastructure.linkedList;

import java.util.HashSet; 

public class LinkedListProblem {


    /**
     * remove duplicate from LinkedList version1 : with help of aux datastructure HashSet. 
     */

    public static void removeDuplicate_version1(SinglyLinkedList<Integer> list) {
        HashSet<Integer> data_set = new HashSet<Integer>();
        LinkedListNode<Integer> current = list.getHead(), previous = list.getHead();
        while(current != null) {
            if(data_set.contains(current.getData())) {
                previous.setNext(current.getNext()); 
            } else {
                data_set.add(current.getData()); 
                previous = current;
            }
            current = current.getNext(); 
        } 
        
    }

    /**
     * remove duplicate from linkedlist version 2: without using aux datastructure HashSet. 
     */

    public static void removeDuplicate_version2(SinglyLinkedList<Integer> list) {
        LinkedListNode<Integer> current = list.getHead(), runner = null, previous = null;
        while(current != null) {
            runner = current.getNext();
            previous = current; 
            while(runner != null) {
                if(runner.getData() == current.getData()) {
                    previous.setNext(runner.getNext()); 

                } else {
                    previous = runner; 
                }
                runner = runner.getNext(); 
            } 
            current = current.getNext(); 

        } 

    }

}
