# filename : LinkedListTest.py 

from LinkedList.LinkedList import SinglyLinkedList, DoublyLinkedList 

if __name__ == "__main__": 
    list = DoublyLinkedList() # singly linked list. 
    list.add(322)
    list.add(3211)
    list.add(8883)
    list._print() # print linked list. 
    list.printList() # print linked list. 
    list.remove(322) # remove linked list. 
    list.printList() # print linked list. 
    print(list.search(3211))
    print(list.search(3223232))