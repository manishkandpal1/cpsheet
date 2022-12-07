#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n, i(0), a[7];
    cin >> n;
    for (int i = 0; i < 7; i++) cin >> a[i];
    int t = a[0];

    while (t < n) {
        i++;
        i %= 7;
        t += a[i];
    }

    cout << i + 1 << endl;
}

signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     solve();
}
