import java.lang.System;
import java.util.Stack;

class stack{
    public static void main(String args[]){
          Stack<Integer> stk = new Stack<>();
            

          stk.push(78);  
          stk.push(113);  
          stk.push(90);  
          stk.push(120);

          System.out.println("Elements in Stack: " + stk);
          boolean result = stk.empty();
          System.out.println("Is the stack empty? " + result);  
          System.out.println("Pop Operation in Java: ")
          stk.pop();
          System.out.println("Elements in Stack: " + stk);
        }
}