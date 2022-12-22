    #include <bits/stdc++.h>
    using namespace std;
    #define endl '\n'
    #define ll long long
    void solve(){
      int n, m, last;
    double t, max(0);
    cin >> n >> m;

    for (int i = 1; i <= n; i++){
        cin >> t;
        if (ceil(t / m) >= max) {
            last = i;
            max = ceil(t / m);
        }
    }

    cout << last << endl;
    }
    
    signed main()  {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(0);
        solve();
    }
