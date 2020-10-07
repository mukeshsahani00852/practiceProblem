# !/bin/bash

function Select() {
    echo "Select a list : "
    echo "1. Singly Linked List."
    echo "2. Doubly Linked List."
    echo "3. Circular Linked List."
    read choice 
    if [ $choice -eq 1 ]
    then 
        echo "Singly Linked List has been selected."
    elif [ $choice -eq 2 ]
    then 
        echo "Doubly Linked List has been selected."
    elif [ $choice -eq 3 ]
    then 
        echo "Circular Linked List has been selected."
    else 
        echo "InValid Choice"
        Select 
    fi 

    echo "$choice"
}

Select 




