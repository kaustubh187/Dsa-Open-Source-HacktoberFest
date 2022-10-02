#include<iostream>
using namespace std;
void partion(int arr[],int l,int h,int p)
{
    swap(arr[p],arr[h]);
    int i=l-1;
    for(int j=l;j=h-1;j++)
    {
        if(arr[j]<p)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i=1],arr[h]);
}
int main()
{
    int arr[]={10,80,30,90,40,50,70};
    int l=0,h=6,p=70;
    partion(arr,l,h,p);
    for(int i=0;i<=h;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
