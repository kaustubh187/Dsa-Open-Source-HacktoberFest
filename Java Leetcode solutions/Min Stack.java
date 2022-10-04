/*
Min Stack
https://leetcode.com/problems/min-stack/

*/
class MinStack {
Stack<Integer> st= new Stack<>();
        Stack<Integer> st2= new Stack<>();
    public MinStack() {
        
    }
    
    public void push(int val) {
        if(st2.isEmpty() || val<=st2.peek())
            st2.push(val);
        st.push(val);
        
    }
    
    public void pop() {
        if(st.peek().equals(st2.peek()))
            st2.pop();
        st.pop();
        
    }
    
    public int top() {
        return st.peek();
    }
    
    public int getMin() {
        return st2.peek();
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
