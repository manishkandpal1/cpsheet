#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
 int n,k;
 cin>>n>>k;
 while(k--){
    int rem=n%10;
    if(rem>0){
        n--;
    }else{
        n/=10;
    }
 }
 cout<<n<<"\n";
}

signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
        solve();
}
