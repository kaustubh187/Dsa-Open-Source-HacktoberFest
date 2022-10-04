/*

Leetcode Question
Largest Rectangle in Histogram

https://leetcode.com/problems/largest-rectangle-in-histogram/

*/

class Solution {
    public int largestRectangleArea(int[] heights) {
        int n=heights.length;
        Stack<Integer> st = new Stack();
        int i;
        int leftsmall[] = new int[n];
        int rightsmall[] = new int[n];
        for(i=0; i<n; i++)
        {
            while(!st.isEmpty()&& heights[st.peek()]>=heights[i])
            {
                st.pop();
            }
            if(st.isEmpty())
                leftsmall[i]=0;
            else
                leftsmall[i]=st.peek()+1;
            st.push(i);
        }
         while(!st.isEmpty())
            {
                st.pop();
            }
        for(i=n-1; i>=0; i--)
        {
            while(!st.isEmpty()&& heights[st.peek()]>=heights[i])
            {
                st.pop();
            }
            if(st.isEmpty())
                rightsmall[i]=n-1;
            else
                rightsmall[i]=st.peek()-1;
            st.push(i);
        }
        int maxA=0;
        for(i=0; i<n; i++)
        {
            maxA=Math.max(maxA, heights[i]*(rightsmall[i]-leftsmall[i]+1));
        }
        return maxA;
    }
}
