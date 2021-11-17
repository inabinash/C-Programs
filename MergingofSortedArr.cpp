#include<bits/stdc++.h>
using namespace std;
printArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}

Merging(int a[],int b[],int n1,int n2)
{
  
    int c[n1+n2];
    int i=0;
    int j=0;
    int k=0;
   while(i<n1&&j<n2)
   {
       if(a[i]<b[j])
       {
           c[k]=a[i];
           k++;
           i++;
       }
       else{
           c[k]=b[j];
           k++;
           j++;
       }
   }

  
   
       while(i<n1)
       {
           c[k++]=a[i++];

       }
   
   
   
       while(j<n2)
       {
           c[k++]=b[j++];
           
       }
   
   printArr(c,n1+n2);

}

int main()
{
    int a[]={1,5,8,9};
    int b[]={2,3,10};

    Merging(a,b,4,3);
}