/*

121. Best Time to Buy and Sell Stock
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

*/
class Solution {
    public int maxProfit(int[] prices) {
        
        int minprice=Integer.MAX_VALUE;
        int maxp=0;
        int i;
        for(i=0; i<prices.length; i++)
        {
            if(prices[i]<minprice){
                minprice=prices[i];
                }
            else if(prices[i]-minprice>maxp){
                maxp=prices[i]-minprice;
                }
        }
     
        return maxp;
    }
}
