#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
  int n,x;
  cin>>n>>x;
  if(n<=2){
    cout<<1<<"\n";
  }else{
    cout<<floor((n-3)/x)+2<<"\n";
  }
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
