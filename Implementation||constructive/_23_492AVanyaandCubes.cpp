#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n,h=0,cnt=0;
    cin>>n;
	while (cnt <= n){
		h++;
		cnt += (h*(h+1))/2;
	}
    cout<<h-1<<"\n";
}

signed main(){
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     solve();
}
