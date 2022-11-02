#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(n<2*k+1){
        cout<<"NO\n";
                return;
    }
    if(k==0){
        cout<<"YES\n";
    }
    else{
        int i=0,j=n-1;
        while(i<k && i<j){
            if(s[i]!=s[j]){
                cout<<"NO\n";
                return;
            }
            i++,j--;
        }
        cout<<"YES \n";
    }

}

int main()
{
    int x;
    cin>>x;
    while(x--){
        solve();
    }
    return 0;
}
