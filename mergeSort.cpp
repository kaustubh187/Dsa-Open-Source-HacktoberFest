#include<iostream>
using namespace std;
int arr[10]={5,3,6,2,8,9,1,7,4};
void sort(int arr[],int l,int mid,int r){
    int i,j,k;
    int n1=mid-l+1;
    int n2 =r-mid;
    int arr1[n1],arr2[n2];
    for (int i = 0; i < n1; i++)
    {
        arr1[i]=arr[l+i];
    }
    for (int i = 0; i < n2; i++)
    {
        arr2[i]=arr[mid+i+1];
    }
    i=0;
    j=0;
    k=l;
    while (i<n1 && j<n2)  
    {
        if (arr1[i]>arr2[j])
        {
            arr[k]=arr2[j];
            j++;
            k++;
        }else if (arr1[i]<arr2[j])
        {
            arr[k]=arr1[i];
            i++;
            k++;
        }else
        {
            arr[k]=arr1[i];
            k++;
            i++;
        }
    }
    while (j<n2)
        {
            arr[k]=arr2[j];
            k++;
            j++;
        }
        
    
    while (i<n1)
        {
            arr[k]=arr1[i];
            i++;
            k++;
        }
        
    
    
    
    

}

void mergeSort(int arr[],int l,int r){
    if(l<r){
        int mid = l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        sort(arr,l,mid,r);
    }

}
int main(){
    cout<<"Array Before MergeSort"<<endl;
    for (int i=0;i<10;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    mergeSort(arr,0,9);
    cout<<"Array Before MergeSort"<<endl;
    for (int i=0;i<10;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}