//https://codeforces.com/problemset/problem/208/A

    #include <bits/stdc++.h>
    using namespace std;
    #define endl '\n'
    #define ll long long

    void solve(){
       string s;
       bool flag=true;
       cin>>s;
       for(int i=0;i<s.size();i++){
          if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B'){
              i+=2;
              if(!flag){
	            cout<<" ";
                }
	        continue;
	    }else{
	        flag=false;
	        cout<<s[i];
	    }
	}
 }

    signed main()  {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(0);
        solve();
    }
