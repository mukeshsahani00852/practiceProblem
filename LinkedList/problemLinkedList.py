# filename : problemLinkedList.py 

# problem 1 : remove duplicates. 

import LinkedList 


def removeDuplicate(linkedlist): 
    current = linkedlist.head 
    previous = current 
    aux_data = []
    while current is not None:
        if current.data in aux_data: 
            previous.next = current.next 
        else: 
            aux_data.append(current.data) # append data 
            previous = previous.next 
        current = current.next       
      
def makeLinkedList(lst): 
    linkedlist = LinkedList.LinkedList()
    for ele in lst: 
        linkedlist.insertKey(ele) 
    return linkedlist 

if __name__ == '__main__': 
    data = [12, 12, 44, 1, 131, 11, 1, 32, 1] # list 
    linkedlist = makeLinkedList(data) # get linked list. 
    linkedlist.printList() # print linked list. 
    removeDuplicate(linkedlist)
    print() # get an empty line. 
    linkedlist.printList()   