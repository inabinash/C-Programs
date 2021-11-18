#include<bits/stdc++.h>

using namespace std;
 string addStrings(string num1, string num2) {
        
      
        int carry=0;
        
        if(num1.length()<num2.length())
        {
            swap(num1,num2);
        }
         int n1=num1.length();
         int n2=num2.length();
            for(int i=n1-1,j=n2-1;i>=0;i--)
            {
               int sum=0;
                int x=num1[i]-'0';
                int y=0;
                if(j>=0)
                {
                    y=num2[j]-'0';
                    j--;
                }
                
                sum=x+y+carry;
                num1[i]=(sum%10)+'0';
                carry=sum/10;
                
            }
        
        if(carry)
        {
            num1.insert(0,1,'0'+carry);
        }
        
        return num1;
        
        }
int main()
{
   string s1="123";
   string s2="1231";
   
   cout<<addStrings(s1,s2)<<endl;
}