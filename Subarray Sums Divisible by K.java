/*

Leetcode Question

974. Subarray Sums Divisible by K
https://leetcode.com/problems/subarray-sums-divisible-by-k/

*/

class Solution {
    public int subarraysDivByK(int[] arr, int k) {
        
        int sum=0, rem=0, ans=0;
        int i;
        HashMap<Integer, Integer> hm = new HashMap();
        hm.put(0, 1);
        for(i=0; i<arr.length; i++)
        {
            sum+=arr[i];
            rem=sum%k;
            if(rem<0){
                rem+=k;
            }
            if(hm.containsKey(rem))
            {
                ans+=hm.get(rem);
                hm.put(rem, hm.get(rem)+1);
            }
            else
            {
                hm.put(rem, 1);
            }
        }
        return ans;
        
    }
}
