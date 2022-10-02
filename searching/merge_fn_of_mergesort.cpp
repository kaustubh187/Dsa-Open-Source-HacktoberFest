#include<iostream>
using namespace std;
void merge(int a[],int low,int mid,int high)
{
    int n1=mid-low-1,n2=high-mid;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
        left[i]=a[i];
    for(int i=0;i<n2;i++){
        right[i]=a[mid+i+1];
    }
    int i=0,j=0,k=0;
    while(i<n1&&j<n2)
        if(left[i]<=right[j]){
            a[k]=left[i];
            i++;
            k++;}
        else{
            a[k]=right[j];
            j++;
            k++;}
    while(i<n1)
        a[k]=left[i];
        i++;
        k++;
    while(j<n2)
        a[k]=right[j];
        j++;
        k++;
    for(k=0;k<high;k++);
       cout<<a[k]<<" ";
}
int main(){
    int a[]={10,15,20,11,30};
   // int n=sizeof(a)/sizeof(a[0]);
    int low=0,mid=2,high=4;
    merge(a,low,mid,high);
    return 0;
}
