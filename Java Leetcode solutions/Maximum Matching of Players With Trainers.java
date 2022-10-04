/*
2410. Maximum Matching of Players With Trainers
https://leetcode.com/contest/biweekly-contest-87/problems/maximum-matching-of-players-with-trainers/
*/
class Solution {
    public int matchPlayersAndTrainers(int[] players, int[] trainers) {
        
        int i,j=0, cnt=0;
        int n1=players.length, n2=trainers.length;
        Arrays.sort(players);Arrays.sort(trainers);
        for(i=0; i<n1; i++)
        {
            while(j<n2 && players[i]>trainers[j])
            {
                j++;
            }
            if(j<n2 && players[i]<=trainers[j])
            {cnt++;j++;}
        }
        return cnt;
    }
}
