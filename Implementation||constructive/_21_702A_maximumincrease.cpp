#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n, ans= 1;
	cin >> n;
	vector <int> arr (n);
	for (auto &i : arr) cin >> i;
 
	for (int i= 0; i<n-1;i++) {
		int j=i;
		while (j<n-1 && arr [j+1] > arr[j])
			j++;
		ans= max (ans, j - i + 1);
		i = j;
	}
 
	cout <<ans;
}

signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     solve();
}
