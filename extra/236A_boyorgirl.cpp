#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int l=s.length();
    int ans=0;
    for(int i=1; i<l; i++)
    {
        if(s[i]!=s[i-1])
            ans++;
    }
    if(ans&1)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
     return 0; 
}

