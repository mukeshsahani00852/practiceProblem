package java_stack.Stack; 

import java.util.Stack; 

public class StackProblems {
    
    public static void main(String[] args) {
        StackWithMinProblem stack_with_min = new StackWithMinProblem(); 
        stack_with_min.push(5); 
        System.out.println("Min : " + stack_with_min.get_min());
        stack_with_min.push(6); 
        System.out.println("Min : " + stack_with_min.get_min());
        stack_with_min.push(3); 
        System.out.println("Min : " + stack_with_min.get_min());
        stack_with_min.push(7); 
        System.out.println("Min : " + stack_with_min.get_min());
        System.out.println("popped out element : " + stack_with_min.pop());
        System.out.println("Min : " + stack_with_min.get_min());
        System.out.println("popped out element : " + stack_with_min.pop());
        System.out.println("Min : " + stack_with_min.get_min());

    }
}


class StackWithMinProblem {

    private Stack<Integer> mainStack; 
    private Stack<Integer> aux_stack; 

    StackWithMinProblem() {
        this.mainStack = new Stack<Integer>(); 
        this.aux_stack = new Stack<Integer>(); 
    }

    public void push(int element) {
        this.mainStack.push(element); 
        if(this.aux_stack.isEmpty()) {
            this.aux_stack.push(element); 
        } else {
            if(this.aux_stack.peek() >= element) {
                this.aux_stack.push(element); 
            }
        }
    }

    public int pop() {
        if(this.mainStack.isEmpty()) {
            return -1;  
        } else {
            if(this.mainStack.peek() == this.aux_stack.peek()) {
                this.aux_stack.pop(); 
                return this.mainStack.pop(); 
            } else {
                return this.mainStack.pop(); 
            }
        }
    }

    public int get_min() {
        if(this.aux_stack.isEmpty()) 
            return -1; 
        else
            return this.aux_stack.peek(); 
    }


}


