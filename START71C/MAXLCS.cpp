//https://www.codechef.com/START71C/problems/MAXLCS

    #include <bits/stdc++.h>
    using namespace std;
    #define endl '\n'
    #define ll long long
  
    
    void solve(){
        int n;
	    cin>>n;
	    string s;
         cin>>s;
         string temp=s;
	    reverse(s.begin(),s.end());
	  vector<vector<int>>frq(n+1, vector<int>(n+1, 0));
	    for(int i=1; i<=n; i++){
	        for(int j=1; j<=n; j++){
	            if(s[j-1]!=temp[i-1])
	            frq[i][j]=max(frq[i][j-1],frq[i-1][j]);
	            else
	            frq[i][j]=frq[i-1][j-1]+1;
	        }
	    }
	    cout<<(int)frq[n][n]/2<<"\n";
    }
    
    signed main()  {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(0);
        int t;
        cin>>t;
        while(t--){
        solve();
        }
    }
