#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     map<string, int> mp;
     mp["Tetrahedron"]  = 4;
	   mp["Cube"]         = 6;
	   mp["Octahedron"]   = 8;
	   mp["Dodecahedron"] = 12;
	   mp["Icosahedron"]  = 20;
	  int n; cin >> n;
	  int res = 0;
	  for (int i = 0; i < n; i++) {
	  	string s; cin >> s;
	  	res += mp[s];
	  }
	  cout << res << endl;
}
