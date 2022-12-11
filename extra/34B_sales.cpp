#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
 int n, m, a[100];
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    int s(0);
    for (int i = 0; i < m; ++i)
    {
        if (a[i] >= 0)
        {
            break;
        }
        s += a[i];
    }
    cout << -s << endl;
}

signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(0);
     solve();
}
