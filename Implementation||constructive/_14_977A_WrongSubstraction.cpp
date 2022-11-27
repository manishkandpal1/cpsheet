#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
  int k,n,w;
  cin>>k>>n>>w;
  int cost=0;
  for(int i=1;i<=w;i++){
    cost+=i*k;
  }
  if(cost>n){
    cout<<cost-n<<"\n";
  }else{
    cout<<"0\n";
  }
}

signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
        solve();
}
