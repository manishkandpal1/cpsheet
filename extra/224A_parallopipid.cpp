    #include <bits/stdc++.h>
    using namespace std;
    #define endl '\n'
    #define ll long long
  
    void solve(){
    int x,y,z;
	cin>>x>>y>>z;
	int a=sqrt((x*y)/z);
	int b=sqrt((x*z)/y);
	int c=sqrt((y*z)/x);
	int val=(a+b+c)*4;
	cout<<val;
    }
    
    signed main()  {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(0);
        solve();
    }
