#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     int n;
     cin>>n;
     string s;
     map<string,int>mp;
     map <string,int> :: iterator it;
     while(n--){
        cin>>s;
        mp[s]++;
     }
     int x=0;
     for(it=mp.begin();it!=mp.end();it++){
        if (it->second>x)
            {
                x = it->second;
                s= it->first;
            }
     }
     cout<<s;
     return 0; 
    
}
