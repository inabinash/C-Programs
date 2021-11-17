#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<string>strs={"eat","tea","tan","ate","nat","bat"};
     
    unordered_map<string,vector<string>>m;

    for(auto it:strs)
    {
        cout<<it<<endl;
        string s1=it;
        sort(s1.begin(),s1.end());
        m[s1].push_back(it);
        
    }

    for(auto it=m.begin();it!=m.end();++it)
    {
        cout<<it->first<<endl;
    }
        
    }
    
