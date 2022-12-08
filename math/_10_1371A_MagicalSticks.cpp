#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    ll n;
    cin>>n;
    if(n%2){
        cout<<(n/2)+1<<"\n";
    }else{
        cout<<n/2<<"\n";
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
