#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int i,j,k,n,m;

    string s, x;
    cin>>s;

    for(i=0;i<5;i++) {
        cin>>x;
        if(x[0]==s[0] || x[1]==s[1]){
            cout<<"YES\n";
            return ;
        }
    }

    cout<<"NO";
}

signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     solve();
}
