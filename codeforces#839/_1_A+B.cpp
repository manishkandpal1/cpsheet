//   https://codeforces.com/contest/1772/problem/A  
  #include <bits/stdc++.h>
    using namespace std;
    #define endl '\n'
    #define ll long long

      
    void solve(){
        string s;
        cin>>s;
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='+'){
                sum=(int)(s[i-1]-48)+(int)(s[i+1]-48);
            }
        }
        cout<<sum<<"\n";

    }
    signed main()
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(0);
        int t;
        cin>>t;
        while(t--){
        solve();
        }
    }
