#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int check(int x){
    if (x <= 1)
        return 0;
    for (int i = 2; i <x; i++)
        if (x%i==0)
            return 0;
    return 1;
}
void solve(){
    int a1,a2;
    cin>>a1>>a2;
    int sum=a1+a2;
    if(check(sum)){
        cout<<"Alice\n";
    }else{
        cout<<"Bob\n";
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
