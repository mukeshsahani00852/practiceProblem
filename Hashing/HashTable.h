#ifndef HASHTABLE_H 
#define HASHTABLE_H 

#include <iostream> 
#include <cstdlib> 
#include "LinkedList.h"

using namespace std; 


/**
 * 
 * we are creating a hash table with chaining
 * as collision resolution technique. 
 * 
*/

class HashTable {
    public: 

        HashTable(); 
        void add(int elemen); 

    private: 
        
        ListNode *list; 


}; 

HashTable::HashTable() {
    
}



#endif 