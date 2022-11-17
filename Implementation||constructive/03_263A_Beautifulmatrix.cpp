#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
   int a[5][5],i,j;
    for(int r=0;r<5;++r){
        for(int c=0;c<5;++c){
            cin>>a[r][c];
            if(a[r][c]==1){
                i=abs(r-2);
                j=abs(c-2);
                cout<<i+j;
                 }
        }
    } 
 }

signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     solve();
}
