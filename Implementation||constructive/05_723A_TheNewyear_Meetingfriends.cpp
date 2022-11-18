#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
   int a,b,c;
   cin>>a>>b>>c;
   int maxi=max(a,b);
   maxi=max(maxi,c);
   int mini=min(a,b);
   mini=min(mini,c);
   cout<<maxi-mini;
 }

signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     solve();
}
