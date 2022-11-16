#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
     int n;
     cin>>n;
     int x=2*n;
     int arr[x];
     unordered_map<int,int> mp;
     for(int i=0;i<x;i++){
        cin>>arr[i];
        mp[arr[i]]++;
     }
     for(int i=0;i<x;i++){
        if(mp[arr[i]]>2){
            cout<<"NO\n";
            return;
        }
     }
     cout<<"YES\n";
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
     return 0;
}
