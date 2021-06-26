#ifndef UTIL_H 
#define UTIL_H 


bool isSorted(int *arr, int length) {
    if(length == 0 || length == 1) {
        return true; 
    } else {
        return *(arr + length - 1) < *(arr + length - 2) ? false : isSorted(arr, length - 1); 
    }
}

#endif 