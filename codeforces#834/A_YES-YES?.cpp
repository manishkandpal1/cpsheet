#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    string z,z1="";
    cin>>z;
    int i,j,k,l,m,n;
    for(int i=0;i<20;i++){
        z1+="Yes";
    }
    if((i=z1.find(z,0))==string::npos){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
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
     return 0;
}
