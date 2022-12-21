    #include <bits/stdc++.h>
    using namespace std;
    #define endl '\n'

    void solve(){
     string s, t;
    cin >> s >> t;
    reverse(t.begin(), t.end());
    if (s == t){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
  }
    
    signed main()  {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(0);
        solve();
    }
