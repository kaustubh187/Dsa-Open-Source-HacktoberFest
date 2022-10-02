#include<iostream>
using namespace std;
int bsearch(int arr[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x)
         return mid;
        else if(arr[mid]>x)
         high=mid-1;
        else
         low=mid+1;
    }
return -1;

}
int main()
{ 
    int arr[]={1,2,3,4,5,6};
    int n=6,x;
    cout<<"enter a number of which you want to find index";
    cin>>x;
    int search=bsearch(arr,n,x);
    if(search==-1)
     cout<<"index is not present";
    else
     cout<<"number found at index"<<search;
    return 0;
}
