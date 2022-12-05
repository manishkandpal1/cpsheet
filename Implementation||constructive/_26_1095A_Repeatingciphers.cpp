#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
      int n;
      cin>>n;
      string s;
      cin>>s;
      int i=0,skip=1;
      while(i<n){
        cout<<s[i];
        i+=skip;
        skip++;
      }
}

signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     solve();
}
