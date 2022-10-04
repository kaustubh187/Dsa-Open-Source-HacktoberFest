/*

Leetcode Question
238. Product of Array Except Self
https://leetcode.com/problems/product-of-array-except-self/

*/

class Solution {
    public int[] productExceptSelf(int[] nums) {
        
        int[] res= new int[nums.length];
        int i,l=nums.length, pl=1;
        for(i=0; i<l; i++)
        {
            pl=pl*nums[i];
            res[i] = pl;
        }
        int prod=1;
        for(i=l-1; i>0; i--)
        { 
            res[i]=res[i-1]*prod;
            prod*=nums[i];
        }
        res[0]=prod;
        return res;
    }
}
