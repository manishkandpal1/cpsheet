#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
   int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << min(min(k * l / nl, c * d), p / np) / n << endl;
 }

signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     solve();
}
