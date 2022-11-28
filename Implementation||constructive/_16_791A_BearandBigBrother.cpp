#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int multi(int a,int b){
    int i=1;
    while(1){
        a*=3;
        b*=2;
        if(a>b){
            return i;
        }
        i++;
    }
}
void solve(){
    int a,b;
    cin>>a>>b;
    int ans=multi(a,b);
    cout<<ans<<"\n";
}
signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     solve();
    
}
