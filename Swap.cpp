#include<iostream>

using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int l=0;
    int r=1;
    swap(a[l],a[r]);
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }


}