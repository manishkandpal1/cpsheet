#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int c=0;
	for(int i=1;i<n;i++){
		if(arr[i]==arr[i-1]){
			c++;
			break;
		}
	}
	if(c>0){
		cout<<"NO\n";
	}else{
		cout<<"YES\n";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
