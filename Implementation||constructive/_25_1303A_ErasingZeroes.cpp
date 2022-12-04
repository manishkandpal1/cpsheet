#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
        int  c=0,p1=0,p2=0;
        string s;
        cin>>s;
        for(int i=0; i<s.length(); i++)   {
            if(s[i]=='1')   {
                p1=i;
                break;
            }
        }
        for(int i=s.length(); i>=p1; i--) {
            if(s[i]=='1') {
                p2=i;
                break;
            }
        }
        for(int i=p1; i<p2; i++) {
            if(s[i]=='0')
                c++;
        }
        cout<<c<<endl;
}

signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     int t;
     cin>>t;
     while(t--){
     solve();
     }
}
