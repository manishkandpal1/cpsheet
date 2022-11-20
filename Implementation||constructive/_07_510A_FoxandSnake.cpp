#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
   int n,m;
   cin>>n>>m;
   int odd=0;
   for(int i=0;i<n;i++){
	if(i%2==0){
        for(int j=0;j<m;j++){
		cout<<"#";
        }
	}else{
        ++odd;
        for(int j=0;j<m;j++){
            if(odd%2==1&&j==m-1){
                cout<<"#";
                }else if(odd%2==0&&j==0){
                    cout<<"#";
                    }
					else {
                    cout<<".";
                    }
                 }
        }
        cout<<"\n";
	}
}

signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     solve();
}
