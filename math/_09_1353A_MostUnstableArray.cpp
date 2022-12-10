#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
        int n, m;
		cin >> n >> m;
		cout << min(2, n - 1) * m << endl;
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
}
