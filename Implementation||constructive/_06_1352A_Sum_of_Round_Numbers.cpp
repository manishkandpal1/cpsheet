#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
   int n;
   cin >> n;
   vector<int> ans;
   int power = 1;
   while (n > 0) {
	if (n % 10 > 0) {
		ans.push_back((n % 10) * power);
	}
	n /= 10;
	power *= 10;
    }
cout << ans.size() << endl;
for (auto number : ans) cout << number << " ";
cout << endl;
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
