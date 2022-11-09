#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

void solve(){
	ll n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int mini=INT_MAX;
	for(int i=0;i<n;i++){
		mini=min(arr[i],mini);
	}
	int res=0,ans=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=mini){
			if(arr[i]%mini==0){
				res++;
			}else{
				ans=1;
				break;
			}
		}
	}
	if(ans){
		cout<<n<<"\n";
	}else{
		cout<<res<<endl;
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
