#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

void solve(){
	int n;
	cin>>n;
	string a,a1,a2;
	cin>>a;
	int x=n/2;
	for(int i=0;i<x;i++){
		a1+=a[i];
	}
	for(int i=x;i<n;i++){
		a2+=a[i];
	}
	if(a1==a2){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
