#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
    int n;
    cin>>n;
    int c=0,m=0;
    while(n--){
        int a,b;
        cin>>a>>b;
        c-=a;
        c+=b;
        if(c>m){
            m=c;
        }
    }
    cout<<m;
}
