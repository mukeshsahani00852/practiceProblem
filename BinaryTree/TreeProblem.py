# filename : TreeProblem.py 

from BinarySearchTree import BinarySearchTree 

# ---------------------- problem : 1 ------------------------------------------


""" 
    * Given Sorted Array with unique integers make a Binary Serach Tree out of it with minimal Height. 
"""
binaryTree = BinarySearchTree()
def minimal_height_binary_serach_tree_from_sorted_array(arr, binaryTree, start, end):
    # recursive approch. 
    if start > end: 
        return None 
    else: 
        mid = int((start + end)/2)
        print(f"mid : {mid} start : {start} end : {end}")
        binaryTree.insertKey(arr[mid])
        minimal_height_binary_serach_tree_from_sorted_array(arr, binaryTree, start, mid - 1)
        minimal_height_binary_serach_tree_from_sorted_array(arr, binaryTree, mid + 1, end)
 



# -----------------------Testing------------------------------------------------
if __name__ == '__main__':
    data = [1, 2, 3, 4, 5, 6, 7]
    minimal_height_binary_serach_tree_from_sorted_array( data, binaryTree, 0, len(data) - 1)
    binaryTree.inorderTraversal()
    print("----")
    print(binaryTree.height())