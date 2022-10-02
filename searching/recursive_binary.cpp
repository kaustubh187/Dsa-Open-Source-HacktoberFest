#include<iostream>
using namespace std;
int bsearch(int arr[],int low,int high,int x){ 
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x)
         return mid;
        else if(arr[mid]>x)
         return bsearch(arr,low,mid-1,x);
        else
         return bsearch(arr,mid+1,high,x);
    }
return -1;
}
int main()
{ 
    int arr[]={1,2,3,4,5,6};
    int n=6,x;
    cout<<"enter a number of which you want to find index ";
    cin>>x;
    int search=bsearch(arr,0,6,x);
    if(search==-1)
     cout<<"index is not present";
    else
     cout<<"number found at index"<<search;
    return 0;
}
