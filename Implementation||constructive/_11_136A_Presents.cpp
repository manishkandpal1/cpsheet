#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
   int n,k;
   cin>>n;
   int arr[n+1];
   for(int i=1;i<=n;i++){
    cin>>k;
    arr[k]=i;
   }
   for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
   }
}


signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
        solve();
}
