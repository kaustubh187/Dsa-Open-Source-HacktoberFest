#include<bits/stdc++.h>
using namespace std;
vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       int j=0;
       vector<int> v;
       stack<int> st;
       while(j<n)
       {
           if(st.empty())
           {
               v.push_back(j+1);
               st.push(j);
               j++;
           }
           else
           {
               
               if(!st.empty() && price[st.top()]<=price[j])
               {
                   st.pop();
                   
               }
               else
               {
                    //cout<<"Top o' stack is:  "<<st.top()<<endl;
                    v.push_back(j - st.top());
                    st.push(j);
                    j++;
               }
           }
       }
       //cout<<endl;
       return v;
}
int main(){

        int daypr[] = {100, 80, 60, 70, 60, 75, 85};

        vector<int> ans = calculateSpan(daypr,7);

        cout<<"The span values for corresponding days: ";

        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }

}