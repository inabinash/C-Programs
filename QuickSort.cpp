#include<bits/stdc++.h>
using namespace std;
void swap(int a[],int i,int j)
{
    int temp =a[j];
    a[j]=a[i];
    a[i]=temp;
}

int Partition(int a[],int l,int r)
{
    int i=l-1;
    int j=l;
   
    int pivot=a[r];
    for(int j=l;j<r;j++)
    {
         if(a[j]<pivot)
         {
             i++;
             swap(a,i,j);
         }
         
    }

    swap(a,i+1,r);
    for(int i=0;i<7;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    return i+1;

}
void QuickSort(int a[],int l,int r)
{
    if(l<r) 
    {
     int pi=Partition(a,l,r);
     //cout<<pi<<endl;
     QuickSort(a,l,pi-1);
     QuickSort(a,pi+1,r);
    }

}

int main()
{
    int arr[7]={5,4,6,2,7,8,1};
    
    QuickSort(arr,0,6);
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
}