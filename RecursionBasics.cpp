#include<bits/stdc++.h>
using namespace std;

void hello(int n)
{
    if(n==0)
    return ;
    else
    {
        cout<<"Hello World"<<" "<<n<<endl;
        return hello(n-1);
    }
}

int main()
{
      hello(5);
      hello(-1);
}