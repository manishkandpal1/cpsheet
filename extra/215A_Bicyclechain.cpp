    #include <bits/stdc++.h>
    using namespace std;
    #define endl '\n'
    #define ll long long

    void solve(){
    int n, m, a[50], b, max(0), count(1);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < m; ++i)  {
        cin >> b;
        for (int j = 0; j < n; ++j)  {
            if (b % a[j] == 0) {
                int x = b / a[j];
                if (x > max) {
                    max = x;
                    count = 1;
                }
                else if (x == max) {
                    count += 1;
                }
                break;
            }
        }
    }
    cout << count << endl;
}
    signed main()
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(0);
        solve();
    }
