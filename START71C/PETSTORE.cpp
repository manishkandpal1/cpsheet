//https://www.codechef.com/START71C/problems/PETSTORE

    #include <bits/stdc++.h>
    using namespace std;
    #define endl '\n'
    #define ll long long
  
    
    void solve(){
      int n;
      cin>>n;
      int a[n],b[n];
    multiset<int>ms;
        // map<int,int>mp;
      for(auto &it:a){
        cin>>it;
        // mp[it]++;
        ms.insert(it);
      }
      int flag=1;
      for(auto &it:ms){
      if(ms.count(it)&1){
        flag=0;
        break;
      }
      }
      if(flag){
        cout<<"YES\n";
      }else{
        cout<<"NO\n";
      }
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
