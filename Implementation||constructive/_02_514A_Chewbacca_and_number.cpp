#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
     string x;
     cin >> x;
    for (auto& d: x){
        if (d > '4')
            d= '9' - d + '0';
    }

    if (x.front() == '0')
        x.front() = '9';
    cout << x << endl;
 }

signed main(){
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     solve();
     return 0;
}
